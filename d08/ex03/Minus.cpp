#include "Minus.hpp"

Minus::Minus ( void )
{
    return ;
}

Minus &Minus::operator=( Minus const & )
{
    return *this;
}

Minus::Minus( Minus const &src )
{
    *this = src;
    return ;
}

Minus::~Minus ( void )
{
    return ;
}


void Minus::execute( void ) {

//        std::cout <<"<Minus called" << std::endl;
        if (this->_cells[_iter] - 1 >= 0)
            this->_cells[_iter] -= 1;
//        std::cout <<  this->_cells[_iter] << std::endl;
        return;

}