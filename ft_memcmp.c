/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:09:06 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 16:20:12 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s1, s2: pointers to the objects to compare
 * 	s: number of bytes to examine
 *
 * Return value
 * 	Negative value if 's1' appears before 's2' in lexicographical order.
 * 	Zero if 's1' and 's2' compare equal, or if count is zero.
 * 	Positive value if 's1' appears after 's2' in lexicographical order. 
 *
 * Description
 * 	Compares the first 'n' bytes of the objects pointed to by 's1' and 's2'.
 * 	The comparison is done lexicographically. The sign of the result is
 * 	the sign of the difference between the values of the first pair
 * 	of bytes (both interpreted as unsigned char) that differ
 * 	in the objects being compared. 
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond the end of either object
 * 	pointed to by 's1' and 's2.
 * 	The behavior is undefined if either 's1' or 's2' is a null pointer.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*lhs;
	unsigned char	*rhs;

	lhs = (unsigned char *)s1;
	rhs = (unsigned char *)s2;
	while (n > 0 && *lhs == *rhs)
	{
		lhs++;
		rhs++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*lhs - *rhs);
}
