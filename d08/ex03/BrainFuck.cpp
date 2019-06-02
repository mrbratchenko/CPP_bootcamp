#include "BrainFuck.hpp"

BrainFuck::BrainFuck ( void )
{
    return ;
}

BrainFuck &BrainFuck::operator=( BrainFuck const & )
{
    return *this;
}

BrainFuck::BrainFuck( BrainFuck const &src )
{
    *this = src;
    return ;
}

BrainFuck::~BrainFuck ( void )
{
    return ;
}

void BrainFuck::read( std::string input )
{

    Operator op;


    std::copy(input.begin(), input.end(), std::back_inserter(_str));
    _str_it = _str.begin();
    while(_str_it != _str.end())
    {
        if(*_str_it != '>' && *_str_it != '<' && *_str_it != '-' && *_str_it != '+' &&
           *_str_it != '.' && *_str_it != ',' && *_str_it != '[' && *_str_it != ']')
        {
            _str_it = _str.erase(_str_it);
        }
        else
            _str_it++;
    }

    Minus minus;
    Plus plus;
    Dot dot;
    Coma coma;
    OpenBracket openBr;
    CloseBracket closeBr;
    LessThan lessThan;
    GreaterThan greaterThan;

//    for(std::vector<char>::_str_iterator _str_it = _str.begin(); _str_it != _str.end(); ++_str_it) {
//        if (*_str_it == '>'){
//            this->_cells.push_back(0);
//        }
//
//    }
//    this->_cells.resize(1);

//    for (std::vector<int>::const__str_iterator i = _cells.begin(); i != _cells.end(); ++i)
//        std::cout <<  this->_cells[0] << std::endl;
//    std::cout <<  this->_iter << std::endl;
//    void * temp;
    for( _str_it = _str.begin(); _str_it != _str.end(); ++_str_it) {
        if (*_str_it == '>')
            greaterThan.execute();
        else if (*_str_it == '<')
            lessThan.execute();
        else if (*_str_it == '+')
            plus.execute();
        else if (*_str_it == '-')
            minus.execute();
        else if (*_str_it == '.')
            dot.execute();
//        else if (*_str_it == ',')
//            coma.execute();
//        else if (*_str_it == '[')
//        {
//            if (this->_cells[_iter] > 0)
//            {
//                _str_it++;
//            }
//            else
//            {
//                while (*_str_it != ']')
//                    _str_it++;
//                _str_it++;
//            }
//        }

//        else if (*_str_it == ']')
//            closeBr.execute();

//        std::cout << *_str_it;

    }
}