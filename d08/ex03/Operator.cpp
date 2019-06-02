#include "Operator.hpp"

Operator::Operator ( void )
{
    this->_cells.reserve(1);
    this->_cells[0] = 0;
    this->_iter = 0;
    return ;
}

Operator &Operator::operator=( Operator const & )
{
    return *this;
}

Operator::Operator( Operator const &src )
{
    *this = src;
    return ;
}

Operator::~Operator ( void )
{
    return ;
}

void Operator::execute( void )
{

    return ;
}