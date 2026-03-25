/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:43:14 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 11:45:41 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *  s: The string to iterate over.
 *  f: The function to apply to each character.
 *
 * Return value
 *  The string created from the successive applications of ’f’.
 *  Returns NULL if the allocation fails.
 *
 * External functions
 *  malloc
 *
 * Description
 *  Applies the function f to each character of the
 *  string s, passing its index as the first argument
 *  and the character itself as the second. A new
 *  string is created (using malloc(3)) to store the
 *  results from the successive applications of f.
 *
 * Undefined behavior
 * 	Function assumes that 's' is NUL-terminated C string
 * 	and F is not NULL.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	str_len;
	char	*new;
	int		i;

	str_len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
