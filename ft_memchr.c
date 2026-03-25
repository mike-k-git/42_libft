/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:55:16 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 16:07:34 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s: pointer to the object to be examined
 * 	c: bytes to search for
 * 	n: max number of bytes to examine
 *
 * Return value
 * 	Pointer to the location of the byte, or a null pointer
 * 	if no such byte is found.
 *
 * Description
 * 	Finds the first occurrence of '(unsigned char)c' in
 * 	the initial 'n' bytes (each interpreted as unsigned char)
 * 	of the object pointed to by 's'.
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond the end
 * 	of the array searched.
 * 	The behavior is undefined if 's' is a null pointer.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
