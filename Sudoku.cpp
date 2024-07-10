#include "Sudoku.h"
#include <thread>
#include <chrono>
#include <iostream>
#include <QCoreApplication>
#include <QThread>

int NumSolutionFound = 0;
const int EMPTY = 0;

int grid[9][9] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int previousgrid[9][9] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0}
};

Sudoku::Sudoku(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::SudokuClass),
    revisor(ui)
{
    ui->setupUi(this);
}

Sudoku::~Sudoku()
{
    delete ui;
}

void Sudoku::on_Clear_clicked()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            ui->Table->setItem(i, j, new QTableWidgetItem);
            grid[i][j] = EMPTY;
        }
    }
}


void Sudoku::on_SolveSlow_clicked()
{
    ui->ErrorLabel->setText(" ");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = EMPTY;
        }
    }

    this->revisor.revisar_tabla(grid, previousgrid);

    GreyCells();
    connect(this, &Sudoku::on_Stopped, &SolveThread, &Solve::Stop);
    connect(&SolveThread, &Solve::NewItem, this, &Sudoku::DisplaySingleItem);


    DisplayGrid();
}
void Sudoku::on_Stop_Recussion_clicked()
{
    emit on_Stopped();
    DisplayGrid_nt();
}

void Sudoku::on_Revisar_Button_clicked()
{
    this->revisor.revisar_tabla(grid, previousgrid);
}


void Sudoku::on_Solve_clicked()
{
    ui->ErrorLabel->setText(" ");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = EMPTY;
        }
    }


    this->revisor.revisar_tabla(grid, previousgrid);

    GreyCells();
    qDebug() << "Solving";
    bool test = solveSudoku();
    qDebug() << "Solved";

    NumSolutionFound = 0;
    bool test1 = solveSudokuNumber();

    DisplayGrid();

}

void Sudoku::on_Undo_Solve_clicked() {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = previousgrid[i][j];
            ui->Table->setItem(i, j, new QTableWidgetItem);
            if (grid[i][j] > 0) {
                QString str = QString::number(grid[i][j]);
                ui->Table->item(i, j)->setText(str);
                ui->Table->item(i, j)->setBackground(Qt::white);
            }

        }
    }

}



void Sudoku::DisplayGrid()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            ui->Table->setItem(i, j, new QTableWidgetItem);
            if (grid[i][j]>0){
                QString str = QString::number(grid[i][j]);
                ui->Table->item(i, j)->setText(str);
                if (previousgrid[i][j] > 0)
                {
                    ui->Table->item(i, j)->setBackground(Qt::gray);
                }
            }
        }
    }
    update();
}
void Sudoku::DisplayGrid_nt()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            ui->Table->setItem(i, j, new QTableWidgetItem);
            if (grid[i][j]>0){
                QString str = QString::number(grid[i][j]);
                ui->Table->item(i, j)->setText(str);

            }
        }
    }
    update();
}

void Sudoku::GreyCells()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            ui->Table->setItem(i, j, new QTableWidgetItem);
            if (grid[i][j] > 0) {
                QString str = QString::number(grid[i][j]);
                ui->Table->item(i, j)->setText(str);
                ui->Table->item(i, j)->setBackground(Qt::gray);
            }
        }
    }
    update();
}

void Sudoku::DisplaySingleItem(int i, int j, int n)
{
    ui->Table->setItem(i, j, new QTableWidgetItem);
    QString str = QString::number(n);
    ui->Table->item(i, j)->setText(str);
}


bool Sudoku::solveSudoku() {
    int row, col;
    if (!this->revisor.findEmptyPlace(row, col, grid)){return true;} //when all places are filled
    for (int num = 1; num <= 9; num++) { //valid numbers are 1 - 9
        if (this->revisor.isValidPlace(row, col, num, grid)) { //check validation, if yes, put the number in the grid
            grid[row][col] = num;
            if (solveSudoku()) //recursively go for other rooms in the grid
                return true;
            grid[row][col] = 0; //turn to unassigned space when conditions are not satisfied
        }
    }
    return false;
}

bool Sudoku::solveSudokuNumber() {
    int row, col;
    if (!this->revisor.findEmptyPlace(row, col, grid))
        NumSolutionFound++;
    //qDebug() << "Number solutions found is " << NumSolutionFound;
    return false; //when all places are filled
    for (int num = 1; num <= 9; num++) { //valid numbers are 1 - 9
        if (this->revisor.isValidPlace(row, col, num, grid)) { //check validation, if yes, put the number in the grid
            grid[row][col] = num;
            if (solveSudoku()) //recursively go for other rooms in the grid
                return true;
            grid[row][col] = 0; //turn to unassigned space when conditions are not satisfied
        }
    }
    return false;
}



