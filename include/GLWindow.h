#ifndef __GL_WINDOW_H__
#define __GL_WINDOW_H__

/// @file GLWindow.h
/// @brief basic header file for the GLWindow class

#include <ngl/Camera.h>
// must be included after our stuff becuase GLEW needs to be first
#include <QtOpenGL>
#include <ngl/TransformStack.h>
#include <ngl/Vec3.h>
#include "LSystemState.h"
#include <string>
#include <stack>
#include "LSystemParser.h"
#include "LSystem.h"


/// @class GLWindow
/// @brief our main glwindow widget for NGL applications all drawing elements are
/// put in this file
class GLWindow : public QGLWidget
{
Q_OBJECT        // must include this if you use Qt signals/slots
public :
  /// @brief Constructor for GLWindow
  /// @param [in] _parent the parent window to create the GL context in
  GLWindow(
           QWidget *_parent
          );
        /// @brief dtor
    ~GLWindow();
 public slots :

    /// @brief set the heading angle value
    /// @parm[in] _angle the value to set
    void setHeadingAngle(double _angle);

    /// @brief set the turn _angle value
    /// @parm[in] _angle the value to set
    void setTurnAngle(double _angle);

    /// @brief set the number generations value
    /// @parm[in] _generations the value to set
    void setGenerations(int _generations);

    /// @brief set the step length value
    /// @parm[in] _stepLength the value to set
    void setStepLength(double _stepLength);

    /// @brief set the X position value
    /// @parm[in] _x the value to set
    void setXPosition(double _x);

    /// @brief set the Y position value
    /// @parm[in] _y the value to set
    void setYPosition(double _y);

    /// @brief set the Z position value
    /// @parm[in] _z the value to set
    void setZPosition(double _z);

    /// @brief a slot to set the colour
    void setColour();

    /// @brief a slot to generate LSystem
    void generateLSystem(QString _filename,
                         double _headingAngle,
                         double _turnAngle,
                         double _stepLength,
                         int _generations,
                         ngl::Vec3 _position,
                         ngl::Vec3 _colour);

private :

    /// @brief LSystem Parser Instance
    LSystemParser m_LSystemParser;

    /// @brief a pointer to LSystem
    LSystem *m_LSystem;

    /// @brief store the heading angle of turtle
    double m_headingAngle;

    /// @brief store the turn angle of turtle
    double m_turnAngle;

    /// @brief store the number of generations
    int m_generations;

    /// @brief store the step length to move
    double m_stepLength;

    /// @brief store the initial position
    ngl::Vec3 m_position;

    /// @brief store the grammar filename
    std::string m_filename;

    /// @brief store the colour
    ngl::Vec3 m_colour;

    /// @brief store the current LSystem string
    std::string m_currentString;

    /// @brief store the vertices to draw
    std::vector <ngl::Vec3 > m_vertices;

    /// @brief store the LSystem branching state
    std::stack <LSystemState> m_LSystemState;

    /// @brief store the VBO buffer
    GLuint VBOBuffers;

    /// @brief determine if LSystem is already generated or not
    bool isLSystemGenerated;

    /// @brief this is called to calculate vertices for drawing
    void calculateVertices();

protected:

  /// @brief  The following methods must be implimented in the sub class
  /// this is called when the window is created
  void initializeGL();

  /// @brief this is called whenever the window is re-sized
  /// @param[in] _w the width of the resized window
  /// @param[in] _h the height of the resized window
  void resizeGL(const int _w,const int _h);

  /// @brief this is the main gl drawing routine which is called whenever the window needs to
  // be re-drawn
  void paintGL();
};

#endif
