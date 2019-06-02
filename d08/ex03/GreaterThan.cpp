#include "GreaterThan.hpp"

GreaterThan::GreaterThan ( void )
{
    return ;
}

GreaterThan &GreaterThan::operator=( GreaterThan const & )
{
    return *this;
}

GreaterThan::GreaterThan( GreaterThan const &src )
{
    *this = src;
    return ;
}

GreaterThan::~GreaterThan ( void )
{
    return ;
}


void GreaterThan::execute( void ) {
//    std::cout <<"GreaterThan called" << std::endl;
//    this->_cells.push_back(0);
    *_cells_it++;
//    _iter++;
    return;
}