#include "LessThan.hpp"

LessThan::LessThan ( void )
{
    return ;
}

LessThan &LessThan::operator=( LessThan const & )
{
    return *this;
}

LessThan::LessThan( LessThan const &src )
{
    *this = src;
    return ;
}

LessThan::~LessThan ( void )
{
    return ;
}


void LessThan::execute( void ) {
//    std::cout <<"LessThan called" << std::endl;
    _iter--;
    return;
}