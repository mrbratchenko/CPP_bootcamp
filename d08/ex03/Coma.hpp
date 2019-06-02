#ifndef COMA_HPP
# define COMA_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class Coma: public Operator
{

public:
    Coma(void);
    ~Coma(void);
    Coma( Coma const & src );
    Coma & operator=( Coma const & );
    virtual void execute( void );

};

# endif