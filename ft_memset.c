/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:45:18 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 13:12:51 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s: pointer to the object to fill
 * 	c: fill byte
 * 	n: pointer to the object to fill
 *
 * Return value
 * 	A copy of 's'
 *
 * Description
 * 	Copies the value ''(unsigned char)c' into each of the first 'n'
 * 	characters of the object pointed to by 's'.
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond the end of the 's' array.
 * 	The behavior is undefined if 's' is a null pointer.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
		tmp[i++] = (unsigned char)c;
	return (s);
}
