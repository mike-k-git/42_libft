/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:34:54 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 11:46:58 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *	s1: The prefix string.
 *	s2: The suffix string.
 *	
 * Return value
 *	The new string. NULL if the allocation fails.
 *	
 * External functions
 *	malloc
 *
 * Description
 *	Allocates memory (using malloc(3)) and returns a
 *	new string, which is the result of concatenating
 *	's1' and 's2'.
 *
 * Undefined behavior
 *	Function assumes that 's1' and 's2' are NUL-terminated C string.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, s1_len);
	ft_memcpy(new + s1_len, s2, s2_len);
	new[s1_len + s2_len] = '\0';
	return (new);
}
