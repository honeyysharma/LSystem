/// @file LSystemParser.cpp
/// @brief basic implementation file for the LSystemParser class

#include "LSystemParser.h"
#include <fstream>
#include <cstdlib>
#include <iostream>

#include <boost/tokenizer.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/format.hpp>

// create a typecast to tokenizer as it's quicker to wrie than the whole
// line
typedef boost::tokenizer<boost::char_separator<char> > tokenizer;

/// @brief function to parse the Axiom
/// @param _firstWord an iterator to the tokenizer
std::string parseAxiom(tokenizer::iterator &_firstWord);

/// @brief function to parse the Rules
/// @param _firstWord an iterator to the tokenizer
std::string parseRules(tokenizer::iterator &_firstWord);

LSystem * LSystemParser :: getLSystemWithFilename (const std::string &_filename)
{
    std::string _axiom;
    std::vector<LSystemRule> _rules;

    //open the file to parse

    std::fstream fileIn;
    fileIn.open(_filename.c_str(),std::ios::in);

    if (!fileIn.is_open())
    {
        std::cout <<"File : "<<_filename<<" Not found Exiting "<<std::endl;
        exit(EXIT_FAILURE);
    }

    // this is the line we wish to parse
    std::string lineBuffer;

    // say which separators should be used in this
    // case Spaces, Tabs and return \ new line
    boost::char_separator<char> sep(" \t\r\n");

    // loop through the file
    while(!fileIn.eof())
    {
      // grab a line from the input
      getline(fileIn,lineBuffer,'\n');
      // make sure it's not an empty line
      if(lineBuffer.size() !=0)
      {
        // now tokenize the line
        tokenizer tokens(lineBuffer, sep);
        // and get the first token
        tokenizer::iterator  firstWord = tokens.begin();
        // now see if it's a valid one and call the correct function

        if( *firstWord =="Begin")
        {
          //Begin
        }
        else if( *firstWord =="Axiom")
        {
          _axiom = parseAxiom(firstWord);
        }
        else if( *firstWord =="Rule")
        {
          std::string _rule = parseRules(firstWord);

          size_t position;
          std::string _predecessor, _successor;

          //http://www.cplusplus.com/reference/string/string/find/

          //Divide rule into predecessor and successor
          position = _rule.find("=");
          _predecessor = _rule.substr(0,position);
          _successor = _rule.substr(position+1);

          _rules.push_back(LSystemRule(_predecessor,_successor));
        }
        else if( *firstWord =="End")
        {
            //End
        }
        else
        {
          std::cerr<<"Unkown Token "<<*firstWord<<std::endl;
        }
      }
    }
    // close the file
    fileIn.close();

    return (new LSystem(_axiom,_rules));
}

//This is called to parse the Axiom
std::string parseAxiom(tokenizer::iterator &_firstWord)
{
    ++_firstWord;

    // use lexical cast to convert to string then increment the itor
    std::string _axiom = boost::lexical_cast<std::string>(*_firstWord++);

    return _axiom;
}

//This is called to parse the Rules
std::string parseRules(tokenizer::iterator &_firstWord)
{
    ++_firstWord;

    // use lexical cast to convert to string then increment the itor
    std::string _rule = boost::lexical_cast<std::string>(*_firstWord++);

    //store the variables in Data Storage

    return _rule;
}
