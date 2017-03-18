#ifndef LSYSTEMRULE_H
#define LSYSTEMRULE_H

/// @file LSystemRule.h
/// @brief basic header file for the LSystemRule class

#include <string>

/// @class LSystemRule
/// @brief class to contain LSystem rules

class LSystemRule
{

public:

    /// @brief ctor
    LSystemRule(){}

    /// @brief user defined ctor
    LSystemRule (const std::string &_predecessor, const std::string &_successor);

    /// @brief copy ctor
    LSystemRule (const LSystemRule &_LSystemRule);

    /// @brief dtor
    ~LSystemRule(){}

    /// @brief This is called to get the predecessor
    inline std::string getPredecessor(){return m_predecessor;}

    /// @brief This is called to get the successor
    inline std::string getSuccessor(){return m_successor;}

private:

    /// @brief store the predecessor
    std::string m_predecessor;

    /// @brief store the successor
    std::string m_successor;
};

#endif // LSYSTEMRULE_H
