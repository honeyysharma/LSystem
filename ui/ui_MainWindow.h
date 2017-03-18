/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Sun Dec 9 02:43:49 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *s_mainWindowGridLayout;
    QGroupBox *s_parameters;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_filename;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *m_generations;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *m_colour;
    QSpacerItem *verticalSpacer;
    QPushButton *m_generate;
    QDoubleSpinBox *m_headingAngle;
    QDoubleSpinBox *m_turnAngle;
    QDoubleSpinBox *m_stepLength;
    QDoubleSpinBox *m_positionX;
    QDoubleSpinBox *m_positionY;
    QDoubleSpinBox *m_positionZ;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(972, 656);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        s_mainWindowGridLayout = new QGridLayout(centralwidget);
        s_mainWindowGridLayout->setObjectName(QString::fromUtf8("s_mainWindowGridLayout"));
        s_parameters = new QGroupBox(centralwidget);
        s_parameters->setObjectName(QString::fromUtf8("s_parameters"));
        gridLayout = new QGridLayout(s_parameters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(s_parameters);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_filename = new QLineEdit(s_parameters);
        m_filename->setObjectName(QString::fromUtf8("m_filename"));

        gridLayout->addWidget(m_filename, 0, 2, 1, 1);

        label_2 = new QLabel(s_parameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(s_parameters);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(s_parameters);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(s_parameters);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        m_generations = new QSlider(s_parameters);
        m_generations->setObjectName(QString::fromUtf8("m_generations"));
        m_generations->setMaximum(10);
        m_generations->setValue(4);
        m_generations->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_generations, 4, 2, 1, 1);

        label_6 = new QLabel(s_parameters);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(s_parameters);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(s_parameters);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_9 = new QLabel(s_parameters);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        m_colour = new QPushButton(s_parameters);
        m_colour->setObjectName(QString::fromUtf8("m_colour"));

        gridLayout->addWidget(m_colour, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 2, 1, 1);

        m_generate = new QPushButton(s_parameters);
        m_generate->setObjectName(QString::fromUtf8("m_generate"));
        m_generate->setFlat(false);

        gridLayout->addWidget(m_generate, 9, 2, 1, 1);

        m_headingAngle = new QDoubleSpinBox(s_parameters);
        m_headingAngle->setObjectName(QString::fromUtf8("m_headingAngle"));
        m_headingAngle->setMinimum(-360);
        m_headingAngle->setMaximum(360);
        m_headingAngle->setSingleStep(0.5);
        m_headingAngle->setValue(90);

        gridLayout->addWidget(m_headingAngle, 1, 2, 1, 1);

        m_turnAngle = new QDoubleSpinBox(s_parameters);
        m_turnAngle->setObjectName(QString::fromUtf8("m_turnAngle"));
        m_turnAngle->setMinimum(-360);
        m_turnAngle->setMaximum(360);
        m_turnAngle->setSingleStep(0.5);
        m_turnAngle->setValue(30);

        gridLayout->addWidget(m_turnAngle, 2, 2, 1, 1);

        m_stepLength = new QDoubleSpinBox(s_parameters);
        m_stepLength->setObjectName(QString::fromUtf8("m_stepLength"));
        m_stepLength->setMaximum(0.5);
        m_stepLength->setSingleStep(0.005);
        m_stepLength->setValue(0.02);

        gridLayout->addWidget(m_stepLength, 3, 2, 1, 1);

        m_positionX = new QDoubleSpinBox(s_parameters);
        m_positionX->setObjectName(QString::fromUtf8("m_positionX"));
        m_positionX->setMinimum(-10);
        m_positionX->setMaximum(10);
        m_positionX->setSingleStep(0.01);

        gridLayout->addWidget(m_positionX, 5, 2, 1, 1);

        m_positionY = new QDoubleSpinBox(s_parameters);
        m_positionY->setObjectName(QString::fromUtf8("m_positionY"));
        m_positionY->setMinimum(-10);
        m_positionY->setMaximum(10);
        m_positionY->setSingleStep(0.01);
        m_positionY->setValue(-0.9);

        gridLayout->addWidget(m_positionY, 6, 2, 1, 1);

        m_positionZ = new QDoubleSpinBox(s_parameters);
        m_positionZ->setObjectName(QString::fromUtf8("m_positionZ"));
        m_positionZ->setMinimum(-10);
        m_positionZ->setMaximum(10);
        m_positionZ->setSingleStep(0.01);

        gridLayout->addWidget(m_positionZ, 7, 2, 1, 1);


        s_mainWindowGridLayout->addWidget(s_parameters, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        s_mainWindowGridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        s_mainWindowGridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        s_mainWindowGridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 972, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LSystem", 0, QApplication::UnicodeUTF8));
        s_parameters->setTitle(QApplication::translate("MainWindow", "Parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Filename", 0, QApplication::UnicodeUTF8));
        m_filename->setText(QApplication::translate("MainWindow", "LSystem.txt", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Heading Angle", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Turn Angle", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Step Length", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Generations", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Position - x", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Position - y", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Position - z", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Colour", 0, QApplication::UnicodeUTF8));
        m_colour->setText(QApplication::translate("MainWindow", "Select", 0, QApplication::UnicodeUTF8));
        m_generate->setText(QApplication::translate("MainWindow", "Generate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
