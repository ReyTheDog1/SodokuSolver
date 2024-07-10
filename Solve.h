#include <QtWidgets/QMainWindow>
#include <QThread>
#include <chrono>
#include <thread>
#include <time.h>
#include <QCoreApplication>
#include "revisor.h"

using namespace std;

class Solve : public QThread
{
    Q_OBJECT
public:
    explicit Solve(QObject* parent = 0) :
        QThread(parent),
        revisor()
    {}

    void start(int inputGrid[9][9], int speed){
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                grid2[i][j] = inputGrid[i][j];
            }
        }
        if (speed == 0) speed = 1;
        SpeedTime = speed;
        mStop = false;

        bool test = solveSudoku();
        if(test){
            qDebug() << "Resuelto";
        } else {
            qDebug() << "Error";
        }
    }

    bool solveSudoku(){
        int row, col;
        if (!revisor.findEmptyPlace(row, col, grid2)){return true;}
        for(int num = 1; num <= 9; num++) {
            if (revisor.isValidPlace(row, col, num, grid2)) {
                grid2[row][col] = num;
                emit NewItem(row, col, num);
                if (mStop == true) return true;
                std::this_thread::sleep_for(std::chrono::milliseconds(SpeedTime));
                if (solveSudoku())
                    return true;
                grid2[row][col] = 0;
            }
        }
        return false;
    }

public slots:
    void Stop(){mStop = true;}

private:
    bool mStop;
    int SpeedTime = 100;
    int grid2[9][9] = {
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

    Revisor revisor;

signals:
    void NewGrid(int grid2[9][9]);
    void NewItem(int i, int j, int n);
};
