/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:47:14 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 11:59:00 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_findstart(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	ft_findend(char const *s1, char const *set, size_t start)
{
	size_t	i;
	size_t	end;

	end = start;
	i = start;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			end = i;
		i++;
	}
	if (s1[end] != '\0' && !ft_strchr(set, s1[end]))
		end++;
	return (end);
}

/* 
 * Parameters
 * 	s1: The string to be trimmed.
 * 	set: The string containing the set of characters to be removed.
 *
 * Return value
 * 	The trimmed string. NULL if the allocation fails.
 *
 * External functions
 * 	malloc
 *
 * Description
 * 	Allocates memory (using malloc(3)) and returns a copy of ’s1’ 
 * 	with characters from ’set’ removed from the beginning and the end.
 *
 * Undefined behavior
 * 	Function assumes that 's1' and 'set' are NUL-terminated C string.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	start = ft_findstart(s1, set);
	end = ft_findend(s1, set, start);
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[start], end - start + 1);
	return (new);
}
