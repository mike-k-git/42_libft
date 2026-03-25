/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:24:45 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 13:31:05 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	dest: pointer to the object to copy to
 * 	src: pointer to the object to copy from
 * 	n: number of bytes to copy
 *
 * Return value
 * 	Returns a copy of 'dest'
 *
 * Description
 * 	Copies 'n' characters from the object pointed to by 'src' to
 * 	the object pointed to by 'dest'. Both objects are interpreted
 * 	as arrays of 'unsigned char'. The objects may overlap:
 * 	copying takes place as if the characters were copied to
 * 	a temporary character array and then the characters
 * 	were copied from the array to 'dest'.
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond the end
 * 	of the 'dest' array.
 * 	The behavior is undefined if either 'dest' or 'src'
 * 	is an invalid or null pointer.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
