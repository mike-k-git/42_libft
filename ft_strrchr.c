/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:41:37 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 15:44:48 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s: pointer to the null-terminated byte string to be analyzed
 * 	c: character to search for
 *
 * Return value
 * 	Pointer to the found character in 's', or null pointer
 * 	if no such character is found.
 *
 * Description
 * 	Finds the last occurrence of 'c' (after conversion to char
 * 	as if by (char)c) in the null-terminated byte string pointed
 * 	to by 's' (each character interpreted as unsigned char).
 * 	The terminating null character is considered to be a part
 * 	of the string and can be found when searching for '\0'.
 *
 * Undefined behavior
 * 	The behavior is undefined if 's' is not a pointer to
 * 	a null-terminated byte string.
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*c_last;

	c_last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (char)c)
			c_last = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (char)c)
		c_last = (char *)s;
	return (c_last);
}
