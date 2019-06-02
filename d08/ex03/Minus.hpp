#ifndef MINUS_HPP
# define MINUS_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class Minus: public Operator
{

public:
    Minus(void);
    ~Minus(void);
    Minus( Minus const & src );
    Minus & operator=( Minus const & );
    virtual void execute( void );

};

# endif