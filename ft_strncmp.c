/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:45:47 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 16:29:37 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s1, s2: pointers to the possibly null-terminated arrays to compare
 * 	n: maximum number of characters to compare
 *
 * Return value
 * 	Negative value if 's1' appears before 's2' in lexicographical order.
 * 	Zero if 's1' and 's2' compare equal, or if 'n' is zero.
 * 	Positive value if 's1' appears after 's2' in lexicographical order.
 *
 * Description
 * 	Compares at most 'n' characters of two possibly null-terminated arrays.
 * 	The comparison is done lexicographically.
 * 	Characters following the null character are not compared.
 * 	The sign of the result is the sign of the difference between the values
 * 	of the first pair of characters (both interpreted as unsigned char)
 * 	that differ in the arrays being compared.
 *
 * Undefined behavior
 * 	The behavior is undefined when access occurs past the end of either
 * 	array 's1' or 's2'.
 * 	The behavior is undefined when either 's1' or 's2' is the null pointer.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n > 0 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
