#ifndef CLOSEBRACKET_HPP
# define CLOSEBRACKET_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class CloseBracket: public Operator
{

public:
    CloseBracket(void);
    ~CloseBracket(void);
    CloseBracket( CloseBracket const & src );
    CloseBracket & operator=( CloseBracket const & );
    virtual void execute( void );

};

# endif