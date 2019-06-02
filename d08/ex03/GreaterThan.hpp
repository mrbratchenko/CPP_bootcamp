#ifndef GREATERTHAN_HPP
# define GREATERTHAN_HPP

#include <vector>
#include <iostream>

#include "Operator.hpp"

class GreaterThan: public Operator
{

    public:
        GreaterThan(void);
        ~GreaterThan(void);
        GreaterThan( GreaterThan const & src );
        GreaterThan & operator=( GreaterThan const & );
        virtual void execute( void );

};

# endif