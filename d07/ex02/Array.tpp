/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:45:18 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/27 16:45:20 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
Array< T >::Array( void ): _array(NULL), _elem(0)  
{
	return ;
}

template < typename T >
Array< T >::Array( unsigned int n ) : _elem(n)
{
	this->_array = new T[_elem];
	for (unsigned int i = 0; i < _elem; i++) {
		_array[i] = 0;
	}
	return ;
}

template < typename T >
Array< T >::Array(Array< T > const & src)
{
	*this = src;
	return ;
}

template < typename T >
Array< T >::~Array( void )
{
	delete [] this->_array;
	return ;
}

template < typename T >
Array<T> &	Array< T >::operator=(Array< T > const & obj)
{
	delete [] this->_array;
	this->_elem = obj._elem;
	if (obj._array != NULL)
	{
		this->_array = new T[_elem];
		for (unsigned int i = 0; i < _elem; i++) {
			_array[i] = obj._array[i];
		}
	}
	else
		this->_array = NULL;
	
	return *this;
}

template < typename T >
T &	Array<T>::operator[]( unsigned int i )
{
	if (this->_elem <= i)
		throw std::out_of_range("This element is out of the limits.");
	return this->_array[i];
}

template < typename T >
unsigned int Array< T >::size() const
{
	return this->_elem;
}
