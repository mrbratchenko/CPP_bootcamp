/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:33:59 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/29 14:34:01 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <iostream>

template < typename T >
class MutantStack: public std::stack< T > 
{
	private:
   		typedef std::stack< T > container;

	public:
		MutantStack( void ){
			return;
		}
		MutantStack( MutantStack const & src ): container(src) {
			return;
		}
		~MutantStack( void ) {
			return;
		}
		
		typedef typename    container::container_type::iterator    iterator;
		using    container::operator=;
		
		iterator    begin() {
			return ( container::c.begin() );
		}
		iterator    end() { 
			return ( container::c.end() );
		}

};

#endif
