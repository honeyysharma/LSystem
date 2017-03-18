#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "GLWindow.h"

/// @namespace Ui our Ui namespace created from the MainWindow class
namespace Ui
{
    class MainWindow;
}

/// @class MainWindow
/// @brief main UI window, created by MainWindow.ui and extended here

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots :

    /// @brief set the file name value
    /// @parm[in] _filename the value to set
    void setFilename();

    /// @brief called on generate push button pressed event
    void generateButtonPressed();

private:
    Ui::MainWindow *m_ui;
        /// @brief openGL widget
        GLWindow *m_gl;

        /// @brief store the filename read from UI
        QString m_filename;
};

#endif // MAINWINDOW_H
