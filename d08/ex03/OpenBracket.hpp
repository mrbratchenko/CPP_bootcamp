#ifndef OPENBRACKET_HPP
# define OPENBRACKET_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class OpenBracket: public Operator
{

public:
    OpenBracket(void);
    ~OpenBracket(void);
    OpenBracket( OpenBracket const & src );
    OpenBracket & operator=( OpenBracket const & );
    virtual void execute( void );

};

# endif