/// @file LsystemState.cpp
/// @brief basic implementation file for the LSystemState class

#include "LSystemState.h"
#include <math.h>

#define DEGREES_TO_RADIANS(angle) ((angle) / 180.0 * M_PI)

LSystemState :: LSystemState(const ngl::Vec3 &_position, const float &_angle)
{
    m_position = _position;
    m_angle = _angle;
}

LSystemState :: LSystemState(const LSystemState &_LSystemState)
{
    m_position = _LSystemState.m_position;
    m_angle = _LSystemState.m_angle;
}

//This is called to update the position based on distance angle
ngl::Vec3 LSystemState :: updatePosition(float _distance)
{
    m_position.m_x += _distance * cos (DEGREES_TO_RADIANS(m_angle));
    m_position.m_y += _distance * sin (DEGREES_TO_RADIANS(m_angle));

    return m_position;
}
