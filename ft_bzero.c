/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:01:18 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 13:11:53 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	s: pointer to the object to fill
 * 	n: pointer to the object to fill
 *
 * Return value
 * 	None
 *
 * Description
 * 	Erases the data in the 'n' bytes of the memory starting at
 * 	the location pointed to by 's', by writing zeros (bytes
 * 	containing '\0') to that area.
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond the end of the 's' array.
 * 	The behavior is undefined if 's' is a null pointer.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
