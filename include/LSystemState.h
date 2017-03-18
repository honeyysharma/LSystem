#ifndef LSYSTEMSTATE_H
#define LSYSTEMSTATE_H

/// @file LSystemState.h
/// @brief basic header file for the LSystemState class

#include <ngl/Vec3.h>

/// @class LSystemRule
/// @brief class to contain the LSystem state

class LSystemState
{
public:

    /// @brief ctor
    LSystemState (){}

    /// @brief user defined ctor
    LSystemState(const ngl::Vec3 &_position,const float &_angle);

    /// @brief copy ctor
    LSystemState(const LSystemState &_LSystemState);

    /// @brief dtor
    ~LSystemState(){}

    /// @brief this is called to set the position of state
    void setPosition(ngl::Vec3 _position);

    /// @brief this is called to get the position of state
    inline ngl::Vec3 getPosition(){return m_position;}

    /// @brief this is called to update the position based on branching
    ngl::Vec3 updatePosition(float _distance);

    /// @brief this is called to update the angle based to turn angles
    inline void updateAngle(float _angle){m_angle += _angle;}

private:

    /// @brief store the position of state
    ngl::Vec3 m_position;

    /// @brief store the angle of state
    float m_angle;
};

#endif // LSYSTEMSTATE_H
