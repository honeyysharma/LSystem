/// @file LSystemRule.cpp
/// @brief basic implementation file for the LSystemRule class

#include "LSystemRule.h"

LSystemRule::LSystemRule (const std::string &_predecessor, const std::string &_successor)
{
    m_predecessor = _predecessor;
    m_successor = _successor;
}

LSystemRule::LSystemRule (const LSystemRule &_LSystemRule)
{
    m_predecessor = _LSystemRule.m_predecessor;
    m_successor = _LSystemRule.m_successor;
}
