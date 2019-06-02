#include "Plus.hpp"

Plus::Plus ( void )
{
    return ;
}

Plus &Plus::operator=( Plus const & )
{
    return *this;
}

Plus::Plus( Plus const &src )
{
    *this = src;
    return ;
}

Plus::~Plus ( void )
{
    return ;
}


void Plus::execute( void )
{
//    std::cout <<"Plus called" << std::endl;
    this->_cells[_iter] = this->_cells[_iter] + 1;
//    std::cout <<  this->_cells[_iter] << std::endl;
    return;
}