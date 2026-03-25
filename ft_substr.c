/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:47:43 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 11:27:31 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * Parameters
 * 	's': The original string from which to create the substring.
 * 	'start': The starting index of the substring within ’s’.
 * 	'len': The maximum length of the substring.
 *
 * Return value
 * 	The substring. NULL if the allocation fails.
 *
 * External functs
 * 	malloc
 *
 * Description
 * 	Allocates memory (using malloc(3)) and returns a substring 
 * 	from the string ’s’. The substring starts at index ’start’ 
 * 	and has a maximum length of ’len’.
 *
 * Undefined behavior
 * 	Function assumes that 's' is a NUL-terminated C string.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;
	size_t	new_len;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		new_len = 0;
	else if (s_len - start < len)
		new_len = s_len - start;
	else
		new_len = len;
	new = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!new)
		return (NULL);
	if (new_len > 0)
		ft_strlcpy(new, s + start, new_len + 1);
	else
		new[0] = '\0';
	return (new);
}
