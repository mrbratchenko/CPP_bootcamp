#include "Dot.hpp"

Dot::Dot ( void )
{
    return ;
}

Dot &Dot::operator=( Dot const & )
{
    return *this;
}

Dot::Dot( Dot const &src )
{
    *this = src;
    return ;
}

Dot::~Dot ( void )
{
    return ;
}


void Dot::execute( void ) {
    std::cout << this->_cells[_iter] << " ";
    return;
}