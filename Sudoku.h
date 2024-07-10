#pragma once

#include "ui_Sudoku.h"
#include "Solve.h"
#include "revisor.h"
#include <QThread>
#include <QtConcurrent/QtConcurrent>
#include <QFuture>

class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = nullptr);
    ~Sudoku();

    void DisplayGrid();
    void DisplayGrid_nt();

private:
    Ui::SudokuClass *ui;
    Revisor revisor;
    Solve SolveThread;
    bool solveSudoku();
    bool solveSudokuNumber();
    void GreyCells();

signals:
    void on_Stopped();
    void revise();

private slots:
    void on_Clear_clicked();
    void on_SolveSlow_clicked();
    void on_Solve_clicked();
    void on_Undo_Solve_clicked();
    void on_Stop_Recussion_clicked();
    void on_Revisar_Button_clicked();

public slots:
    void DisplaySingleItem(int i, int j, int n);
};
