#ifndef REVISOR_H
#define REVISOR_H

#include "ui_Sudoku.h"
using namespace std;
class Revisor
{
public:
    explicit Revisor(Ui::SudokuClass *ui) : ui(ui) {}
    Revisor(){}
    ~Revisor(){delete ui;}

    void revisar_tabla(int (&grid)[9][9], int (&previousgrid)[9][9]){
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                QTableWidgetItem* cell = ui->Table->item(i, j);
                if (cell) {
                    //cout <<"i: "<< i<<"j: "<<j <<"Contenido: "<<cell->text().toInt()<< "\n"<< endl;
                    if (cell->text().toInt() > 0) {
                        if (cell->text().toInt() >= 10) {
                            ui->ErrorLabel->setText("Número mayor a 9");
                            //return;
                        } else if (isValidPlace(i, j, cell->text().toInt(),grid) == false) {
                            //cout <<"i: "<< i<<"j: "<<j <<"Contenido: "<<cell->text().toInt()<< endl;
                            ui->ErrorLabel->setText("Solución incorrecta");
                            //return;
                        } else {
                            ui->ErrorLabel->setText("No hay errores");
                        }
                    } else {
                        ui->ErrorLabel->setText(" ");
                    }
                    grid[i][j] = cell->text().toInt();
                }
                previousgrid[i][j] = grid[i][j];
            }
        }
    }

    //Retorna True si num está presente el la columna col
    bool isPresentInCol(int row_i,int col, int num, int grid[9][9]){
        for (int row = 0; row < 9; row++)
            if (grid[row][col] == num && row_i!=row)
                return true;
        return false;
    }

    //Retorna True si num está presente el la fila row
    bool isPresentInRow(int row, int col_i, int num, int grid[9][9]){
        //cout <<"\nFila: "<<row <<"\n"<<  endl;
        for (int col = 0; col < 9; col++){

            if (grid[row][col] == num && col!=col_i){
                //cout <<"\nvalor evaluado: "<<grid[row][col]<< " ubicado en:["<<row<<"]["<<col<<"] " <<"\n"<<  endl;
                //cout << "["<<row<<"]["<<col_i<<"] es igual a ["<<row<<"]["<<col<<"]"<<endl;
                return true;}}
        return false;
    }

    int get_id(int boxStart){
        if (boxStart>=6)
            return 6;
        if (boxStart>=3)
            return 3;
        if (boxStart>=0)
            return 0;
        return 0;
    }

    //Retorna True si num está presente el la caja
    bool isPresentInBox(int boxStartRow, int boxStartCol, int num, int grid[9][9]){

        int boxStartRowId=get_id(boxStartRow);
        int boxStartColId=get_id(boxStartCol);
        for (int row = 0; row < 3; row++)
            for (int col = 0; col < 3; col++)
                if (grid[row + boxStartRowId][col + boxStartColId] == num && (row + boxStartRowId)!=boxStartRow && (col + boxStartColId)!=boxStartCol){
                    //cout <<"\nvalor evaluado: "<<grid[row + boxStartRowId][col + boxStartColId]<< " ubicado en:["<<row + boxStartRowId<<"]["<<col + boxStartColId<<"] " <<"\n"<<  endl;
                    //cout << "["<<boxStartRow<<"]["<<boxStartCol<<"] es igual a ["<<row + boxStartRowId<<"]["<<col + boxStartColId<<"]"<<endl;
                    //cout <<grid[boxStartRow][boxStartCol]<<" es igual a "<<grid[row + boxStartRowId][col + boxStartColId]<<endl;
                    return true;}
        return false;
    }

    //Retorna True si hay un espacio vacío
    bool findEmptyPlace(int& row, int& col, int grid[9][9]){
        for (row = 0; row < 9; row++)
            for (col = 0; col < 9; col++)
                if (grid[row][col] == 0)
                    return true;
        return false;
    }

    //Retorna True si el num puede ser colocado en ese espacio
    bool isValidPlace(int row, int col, int num, int grid[9][9]){
        return !isPresentInRow(row, col, num, grid) && !isPresentInCol(row,col, num, grid) && !isPresentInBox(row,col, num, grid);
    }

private:
    Ui::SudokuClass *ui;
};

#endif // REVISOR_H
