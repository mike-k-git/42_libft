/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:25:27 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:25:57 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	big: string to be searched
 * 	little: null-terminated string to search for
 * 	len: max number of bytes to examine 
 *
 * Return value
 * 	If 'little' is an empty string, 'big' is returned; if 'little' occurs
 * 	nowhere in 'big', NULL is returned; otherwise a pointer to the first
 * 	character of the first occurrence of 'little' is returned.
 *
 * Description
 * 	Locates the first occurrence of the null-terminated string 'little'
 * 	in the string 'big', where not more than 'len' characters are searched.
 *
 * Undefined behavior
 * 	Passing 'big' or 'little' as NULL leads to undefined behavior.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i + little_len <= len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
