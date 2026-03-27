/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:31:36 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 11:35:35 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wc(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			wc++;
			while (*s && *s != c)
				s++;
		}
	}
	return (wc);
}

static	size_t	ft_elalloc(char **arr, size_t i, const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	arr[i] = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!arr[i])
	{
		while (i-- > 0)
			free(arr[i]);
		free(arr);
		return (0);
	}
	ft_strlcpy(arr[i], s, word_len + 1);
	return (word_len);
}

/* Parameters
 *	s: The string to be split.
 *	c: The delimiter character.
 *
 * Return value
 *	The array of new strings resulting from the split.
 * 	NULL if the allocation fails.
 *
 * External functions
 *	malloc, free
 *
 * Description
 *	Allocates memory (using malloc(3)) and returns an
 *	array of strings obtained by splitting ’s’ using
 *	the character ’c’ as a delimiter. The array must
 *
 * Undefined behavior
 * 	Function assumes that 's' is NUL-terminated C string.
 */

char	**ft_split(char const *s, char c, int* size)
{
	char	**arr;
	size_t	i;
	int		wc;

	if (!s)
		return (NULL);
	i = 0;
	wc = ft_wc(s, c);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			s += ft_elalloc(arr, i, s, c);
			if (!arr)
				return (NULL);
			i++;
		}
	}
	if (size)
		*size = wc;
	arr[i] = NULL;
	return (arr);
}
