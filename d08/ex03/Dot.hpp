#ifndef DOT_HPP
# define DOT_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class Dot: public Operator
{

public:
    Dot(void);
    ~Dot(void);
    Dot( Dot const & src );
    Dot & operator=( Dot const & );
    virtual void execute( void );

};

# endif