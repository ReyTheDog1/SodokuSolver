#ifndef GENERADOR_H
#define GENERADOR_H

#include <cstdlib>
#include <ctime>
#include <vector>
#include "revisor.h"
#include <iostream>

class Generador {
public:
    Generador() {
        std::srand(std::time(nullptr));
    }

    void generateSudoku(int grid[9][9], int celdas) {
        if (solveSudoku(grid)) {
            qDebug() << "Sudoku solved\n";
        } else {
            qDebug() << "Failed to solve Sudoku\n";
        }
        for (int i = 0; i < (81-celdas); i++){
            int row = std::rand() % 9;
            int col = std::rand() % 9;
            if(grid[row][col] == 0){
                i--;
            }else{
                grid[row][col] = 0;
            }
        }
    }

private:
    Revisor revisor;

    bool solveSudoku(int grid[9][9]) {
        int row, col;
        if (!this->revisor.findEmptyPlace(row, col, grid)) {
            return true;
        }

        for (int num = 1; num <= 9; ++num) {
            if (this->revisor.isValidPlace(row, col, num, grid)) {
                grid[row][col] = num;
                if (solveSudoku(grid)) {
                    return true;
                }
                grid[row][col] = 0;
            }
        }
        return false;
    }

};

#endif // GENERADOR_H
