/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:25:54 by adelille          #+#    #+#             */
/*   Updated: 2022/02/02 18:37:35 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TRAITS_HPP
# define ITERATOR_TRAITS_HPP

# include <iterator>

namespace ft
{
	template <class Iterator>
		class iterator_traits
		{
			public:
				typedef typename Iterator::value_type			value_type;
				typedef typename Iterator::difference_type		difference_type;
				typedef typename Iterator::pointer				pointer;
				typedef typename Iterator::reference			reference;
				typedef typename Iterator::iterator_category	iterator_category;
		};

	template <class T>
		class iterator_traits<T*>
		{
			public:
				typedef T								value_type;
				typedef ptrdiff_t						difference_type;
				typedef T*								pointer;
				typedef T&								reference;
				typedef std::random_access_iterator_tag	iterator_category;
		};

	template <class T>
		class iterator_traits<const T*>
		{
			public:
				typedef T								value_type;
				typedef ptrdiff_t						difference_type;
				typedef const T*						pointer;
				typedef const T&						reference;
				typedef std::random_access_iterator_tag	iterator_category;

		};
}

#endif
