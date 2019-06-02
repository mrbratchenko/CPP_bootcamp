#ifndef OPERATOR_HPP
# define OPERATOR_HPP

#include <vector>
#include <iostream>



class Operator
{
    protected:
        std::vector<char> _str;
        std::vector<int> _cells;
        std::vector<char>::iterator _str_it;
        std::vector<int>::iterator _cells_it;
        int _iter;


    public:
        Operator(void);
        virtual ~Operator(void);
        Operator( Operator const & src );
        Operator & operator=( Operator const & );
        void execute( void );

};

# endif