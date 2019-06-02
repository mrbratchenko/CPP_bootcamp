#ifndef PLUS_HPP
# define PLUS_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class Plus: public Operator
{

public:
    Plus(void);
    ~Plus(void);
    Plus( Plus const & src );
    Plus & operator=( Plus const & );
    virtual void execute( void );

};

# endif