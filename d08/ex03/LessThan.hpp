#ifndef LESSTHAN_HPP
# define LESSTHAN_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class LessThan: public Operator
{

public:
    LessThan(void);
    ~LessThan(void);
    LessThan( LessThan const & src );
    LessThan & operator=( LessThan const & );
    virtual void execute( void );

};

# endif