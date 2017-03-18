#ifndef LSYSTEMPARSER_H
#define LSYSTEMPARSER_H

/// @file LSystemParser.h
/// @brief basic header file for the LSystemParser class

#include <string>

#include "LSystemRule.h"
#include "LSystem.h"

/// @class LSystemParser
/// @brief class to parse LSystem axiom and rules from a given text file.

class LSystemParser
{

public:
    /// @brief ctor
    LSystemParser(){}

    /// @brief dtor
    ~LSystemParser(){}

    /// @brief funtion to read file name and return LSytem object.
    /// @parm[in] _filename  the value to set
    LSystem * getLSystemWithFilename (const std::string &_filename);
};

#endif // LSYSTEMPARSER_H
