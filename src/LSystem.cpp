/// @file LSystem.cpp
/// @brief basic implementation file for the LSystem class

#include "LSystem.h"
#include "LSystemParser.h"
#include <iostream>

LSystem::LSystem(const std::string &_axiom, const std::vector<LSystemRule> &_rules)
{
    m_axiom = _axiom;
    m_rules = _rules;
}

LSystem::LSystem(const LSystem &_LSystem)
{
    m_axiom = _LSystem.m_axiom;
    m_rules = _LSystem.m_rules;
}

/* Daniel Shiffman               */
/* Programming from A to Z       */
/* Spring 2006                   */
/* http://www.shiffman.net       */
/* daniel.shiffman@nyu.edu       */

void LSystem::expandGrammar(int _numberofGenerations)
{
    int step = 0;

    //std::cout<<"Step0"<<" : "<<m_axiom<<"\n";

    //expand LSystem for specified generations

    while(step < _numberofGenerations)
    {
        std::string _newAxiom;
        std::string::iterator _axiomIterator;

        // iterate over axiom
        for (_axiomIterator = m_axiom.begin() ; _axiomIterator < m_axiom.end(); _axiomIterator++)
        {
            std::string _replaceString;
            _replaceString = *_axiomIterator;
            std::vector <LSystemRule>::iterator _rulesIterator;

            //iterate over rules
            for (_rulesIterator = m_rules.begin(); _rulesIterator != m_rules.end();++_rulesIterator)
            {
                std::string _predecessor = (*_rulesIterator).getPredecessor();
                std::string::iterator _predecessorIterator = _predecessor.begin();

                // check to see if predecessor is present in axiom or not
                if(*_predecessorIterator == *_axiomIterator)
                {
                    // get successor if predecessor matches
                    _replaceString = (*_rulesIterator).getSuccessor();
                    break;
                }
            }

            _newAxiom.append(_replaceString);
            //std::cout<<"_newAxiom"<<" : "<<_newAxiom<<"\n";
        }

        // set the new axiom in current axiom
        m_axiom = _newAxiom;
        //std::cout<<"Step"<<step+1<<" : "<<m_axiom<<"\n";

        ++step;
    }
}
