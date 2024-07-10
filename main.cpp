#include "Sudoku.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Sudoku w;
    w.show();
    return app.exec();
}
