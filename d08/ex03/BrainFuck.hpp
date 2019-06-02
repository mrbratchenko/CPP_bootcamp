#ifndef BRAINFUCK_HPP
# define BRAINFUCK_HPP

#include <vector>
#include <iostream>
#include "CloseBracket.hpp"
#include "OpenBracket.hpp"
#include "Coma.hpp"
#include "Dot.hpp"
#include "GreaterThan.hpp"
#include "LessThan.hpp"
#include "Minus.hpp"
#include "Plus.hpp"
#include "Operator.hpp"

class BrainFuck: public Operator
{

public:
    BrainFuck(void);
    ~BrainFuck(void);
    BrainFuck( BrainFuck const & src );
    BrainFuck & operator=( BrainFuck const & );
    void read( std::string input );

};

# endif