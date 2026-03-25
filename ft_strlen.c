/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:38:27 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:42:15 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s: pointer to the null-terminated byte string to be examined
 *
 * Return value
 * 	The length of the null-terminated byte string 's'.
 *
 * Description
 * 	Returns the length of the given null-terminated byte string, that is,
 * 	the number of characters in a character array whose first element is
 * 	pointed to by 's' up to and not including the first null character.
 *
 * Undefined behavior
 * 	The behavior is undefined if 's' is not a pointer to
 * 	a null-terminated byte string.
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
