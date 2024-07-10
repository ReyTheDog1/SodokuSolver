/********************************************************************************
** Form generated from reading UI file 'Sudoku.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuClass
{
public:
    QWidget *centralWidget;
    QTableWidget *Table;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *OutputLabel1;
    QLabel *ErrorLabel;
    QPushButton *Revisar_Button;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Clear;
    QPushButton *Undo_Solve;
    QWidget *tab_2;
    QSlider *horizontalSlider;
    QLabel *OutputLabel1_2;
    QPushButton *Solve;
    QLabel *OutputLabel1_3;
    QPushButton *SolveSlow;
    QLabel *OutputLabel1_5;
    QPushButton *Stop_Recussion;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SudokuClass)
    {
        if (SudokuClass->objectName().isEmpty())
            SudokuClass->setObjectName("SudokuClass");
        SudokuClass->resize(705, 603);
        SudokuClass->setLayoutDirection(Qt::RightToLeft);
        SudokuClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(SudokuClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget#centralWidget\n"
"{\n"
"background: rgba(32, 80, 96, 100);\n"
"}"));
        Table = new QTableWidget(centralWidget);
        if (Table->columnCount() < 9)
            Table->setColumnCount(9);
        if (Table->rowCount() < 9)
            Table->setRowCount(9);
        Table->setObjectName("Table");
        Table->setGeometry(QRect(10, 30, 451, 451));
        QFont font;
        font.setPointSize(12);
        Table->setFont(font);
        Table->setMouseTracking(false);
        Table->setStyleSheet(QString::fromUtf8("border:solid;"));
        Table->setFrameShadow(QFrame::Plain);
        Table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Table->setRowCount(9);
        Table->setColumnCount(9);
        Table->horizontalHeader()->setVisible(false);
        Table->horizontalHeader()->setMinimumSectionSize(10);
        Table->horizontalHeader()->setDefaultSectionSize(50);
        Table->horizontalHeader()->setHighlightSections(false);
        Table->verticalHeader()->setVisible(false);
        Table->verticalHeader()->setMinimumSectionSize(10);
        Table->verticalHeader()->setDefaultSectionSize(50);
        Table->verticalHeader()->setHighlightSections(false);
        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 170, 451, 21));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(10, 320, 451, 21));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(140, 30, 41, 451));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(3);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(290, 30, 41, 451));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::Shape::VLine);
        OutputLabel1 = new QLabel(centralWidget);
        OutputLabel1->setObjectName("OutputLabel1");
        OutputLabel1->setGeometry(QRect(640, 280, 49, 16));
        OutputLabel1->setLayoutDirection(Qt::LeftToRight);
        ErrorLabel = new QLabel(centralWidget);
        ErrorLabel->setObjectName("ErrorLabel");
        ErrorLabel->setGeometry(QRect(200, 490, 491, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        ErrorLabel->setFont(font1);
        Revisar_Button = new QPushButton(centralWidget);
        Revisar_Button->setObjectName("Revisar_Button");
        Revisar_Button->setGeometry(QRect(10, 490, 181, 51));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        Revisar_Button->setFont(font2);
        Revisar_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 0 2px;\n"
"  background: rgb(84, 255, 90); \n"
"  font: bold 20px;\n"
"}"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(470, 130, 231, 251));
        tabWidget->setStyleSheet(QString::fromUtf8("*\n"
"\n"
"{\n"
"	background: rgba(32, 80, 96, 50);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
"	\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"	\n"
"	\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                       "
                        "         stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        Clear = new QPushButton(tab);
        Clear->setObjectName("Clear");
        Clear->setGeometry(QRect(20, 30, 181, 51));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: red; /* Fondo verde */\n"
"    border: none;\n"
"    color: white; /* Color de la letra */\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Bordes redondeados */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    \n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(116, 0, 0);\n"
"}\n"
""));
        Undo_Solve = new QPushButton(tab);
        Undo_Solve->setObjectName("Undo_Solve");
        Undo_Solve->setGeometry(QRect(20, 130, 181, 51));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(76, 175, 80, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        Undo_Solve->setPalette(palette);
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        Undo_Solve->setFont(font3);
        Undo_Solve->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50; /* Fondo verde */\n"
"    border: none;\n"
"    color: white; /* Color de la letra */\n"
"    padding: 15px 15px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Bordes redondeados */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Fondo m\303\241s oscuro al pasar el cursor */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41; /* Fondo a\303\272n m\303\241s oscuro al hacer clic */\n"
"}\n"
""));
        Undo_Solve->setAutoDefault(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(30, 150, 160, 22));
        horizontalSlider->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        OutputLabel1_2 = new QLabel(tab_2);
        OutputLabel1_2->setObjectName("OutputLabel1_2");
        OutputLabel1_2->setGeometry(QRect(20, 170, 31, 16));
        OutputLabel1_2->setStyleSheet(QString::fromUtf8("color: white;"));
        OutputLabel1_2->setAlignment(Qt::AlignCenter);
        Solve = new QPushButton(tab_2);
        Solve->setObjectName("Solve");
        Solve->setGeometry(QRect(40, 20, 151, 41));
        Solve->setFont(font3);
        Solve->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(43, 255, 114);; /* Fondo verde */\n"
"    border: none;\n"
"    color: black; /* Color de la letra */\n"
"    padding: 10px 15px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Bordes redondeados */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Fondo m\303\241s oscuro al pasar el cursor */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41; /* Fondo a\303\272n m\303\241s oscuro al hacer clic */\n"
"}\n"
""));
        OutputLabel1_3 = new QLabel(tab_2);
        OutputLabel1_3->setObjectName("OutputLabel1_3");
        OutputLabel1_3->setGeometry(QRect(170, 170, 41, 16));
        OutputLabel1_3->setStyleSheet(QString::fromUtf8("color: white;"));
        OutputLabel1_3->setAlignment(Qt::AlignCenter);
        SolveSlow = new QPushButton(tab_2);
        SolveSlow->setObjectName("SolveSlow");
        SolveSlow->setGeometry(QRect(10, 120, 101, 24));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(173, 173, 173, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        SolveSlow->setPalette(palette1);
        QFont font4;
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        SolveSlow->setFont(font4);
        SolveSlow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(173, 173, 173);\n"
"    border: none;\n"
"    color: white; /* Color de la letra */\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 11px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Bordes redondeados */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     /* Fondo m\303\241s oscuro al pasar el cursor */\n"
"	background-color: rgb(103, 103, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgb(1, 144, 211);\n"
"}\n"
""));
        OutputLabel1_5 = new QLabel(tab_2);
        OutputLabel1_5->setObjectName("OutputLabel1_5");
        OutputLabel1_5->setGeometry(QRect(50, 90, 121, 20));
        QFont font5;
        font5.setPointSize(10);
        OutputLabel1_5->setFont(font5);
        OutputLabel1_5->setStyleSheet(QString::fromUtf8("color: white;"));
        OutputLabel1_5->setAlignment(Qt::AlignCenter);
        Stop_Recussion = new QPushButton(tab_2);
        Stop_Recussion->setObjectName("Stop_Recussion");
        Stop_Recussion->setGeometry(QRect(120, 120, 101, 24));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        Stop_Recussion->setPalette(palette2);
        Stop_Recussion->setFont(font4);
        Stop_Recussion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(173, 173, 173);\n"
"    border: none;\n"
"    color: white; /* Color de la letra */\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 11px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Bordes redondeados */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     /* Fondo m\303\241s oscuro al pasar el cursor */\n"
"	background-color: rgb(103, 103, 103);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    \n"
"	background-color: rgb(1, 144, 211);\n"
"}\n"
""));
        tabWidget->addTab(tab_2, QString());
        SudokuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SudokuClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 705, 21));
        SudokuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SudokuClass);
        mainToolBar->setObjectName("mainToolBar");
        SudokuClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SudokuClass);
        statusBar->setObjectName("statusBar");
        SudokuClass->setStatusBar(statusBar);

        retranslateUi(SudokuClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SudokuClass);
    } // setupUi

    void retranslateUi(QMainWindow *SudokuClass)
    {
        SudokuClass->setWindowTitle(QCoreApplication::translate("SudokuClass", "Sudoku", nullptr));
        OutputLabel1->setText(QString());
        ErrorLabel->setText(QString());
        Revisar_Button->setText(QCoreApplication::translate("SudokuClass", "Revisar", nullptr));
        Clear->setText(QCoreApplication::translate("SudokuClass", "Borrar Sudoku", nullptr));
        Undo_Solve->setText(QCoreApplication::translate("SudokuClass", "Restaurar Soluci\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SudokuClass", "Opciones", nullptr));
        OutputLabel1_2->setText(QCoreApplication::translate("SudokuClass", "Lento", nullptr));
        Solve->setText(QCoreApplication::translate("SudokuClass", "Resolver", nullptr));
        OutputLabel1_3->setText(QCoreApplication::translate("SudokuClass", "R\303\241pido", nullptr));
        SolveSlow->setText(QCoreApplication::translate("SudokuClass", "Mostrar Recursi\303\263n", nullptr));
        OutputLabel1_5->setText(QCoreApplication::translate("SudokuClass", "Opciones avanzadas", nullptr));
        Stop_Recussion->setText(QCoreApplication::translate("SudokuClass", "Parar Recursi\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SudokuClass", "Solver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuClass: public Ui_SudokuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
