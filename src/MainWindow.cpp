/// @file MainWindow.cpp
/// @brief basic implementation file for the MainWindow class

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <ngl/Vec3.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow)
{
    // setup the user interface
    m_ui->setupUi(this);


    m_gl=new  GLWindow(this);

    // now create GLWindow class
    m_ui->s_mainWindowGridLayout->addWidget(m_gl,0,0,2,3);

    // the following code connects the ui components to the GL class

    /// connect the filename line edit
    connect(m_ui->m_filename,SIGNAL(editingFinished()),this,SLOT(setFilename()));

    /// connect the heading angle spin box
    connect(m_ui->m_headingAngle,SIGNAL(valueChanged(double)),m_gl,SLOT(setHeadingAngle(double)));
    /// connect the turn angle spin box
    connect(m_ui->m_turnAngle,SIGNAL(valueChanged(double)),m_gl,SLOT(setTurnAngle(double)));
    /// connect the step length spin box
    connect(m_ui->m_stepLength,SIGNAL(valueChanged(double)),m_gl,SLOT(setStepLength(double)));

    /// connect the generations slider
    connect(m_ui->m_generations,SIGNAL(valueChanged(int)),m_gl,SLOT(setGenerations(int)));

    /// connect the position - x spin box
    connect(m_ui->m_positionX,SIGNAL(valueChanged(double)),m_gl,SLOT(setXPosition(double)));
    /// connect the position - y spin box
    connect(m_ui->m_positionY,SIGNAL(valueChanged(double)),m_gl,SLOT(setYPosition(double)));
    /// connect the position - z spin box
    connect(m_ui->m_positionZ,SIGNAL(valueChanged(double)),m_gl,SLOT(setZPosition(double)));


    /// connect the generate push button
    connect(m_ui->m_generate,SIGNAL(clicked()),this,SLOT(generateButtonPressed()));
    /// connect the colour push button
    connect(m_ui->m_colour,SIGNAL(clicked()),m_gl,SLOT(setColour()));
}

//This called when editing will finish in line edit UI componenet
void MainWindow::setFilename()
{
    m_filename = m_ui->m_filename->text();
    m_ui->m_generate->setEnabled(true);
}

//This is called when generate button is pushed
void MainWindow::generateButtonPressed()
{
    ngl::Vec3 _position(m_ui->m_positionX->value(),
                        m_ui->m_positionY->value(),
                        m_ui->m_positionZ->value());

    m_gl->generateLSystem(m_filename,
                          m_ui->m_headingAngle->value(),
                          m_ui->m_turnAngle->value(),
                          m_ui->m_stepLength->value(),
                          m_ui->m_generations->value(),
                          _position,
                          ngl::Vec3(0.0,1.0,0.0));
    m_ui->m_generate->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}
