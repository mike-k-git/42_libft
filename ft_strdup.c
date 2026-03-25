/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:24:10 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 10:46:27 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * Parameters
 * 	s: pointer to the null-terminated byte string to duplicate
 *
 * Return value
 * 	A pointer to the newly allocated string, or
 * 	a null pointer if an error occurred.
 *
 * Description
 * 	Returns a pointer to a null-terminated byte string,
 * 	which is a duplicate of the string pointed to by 's'.
 * 	The returned pointer must be passed to free to avoid a memory leak.
 *
 * Undefined behavior
 */

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * s_len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
