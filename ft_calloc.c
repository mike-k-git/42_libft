/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:33:48 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 10:16:39 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

/*
 * Parameters
 *	nmemb: number of objects
 *	size: size of each object
 *
 * Return value
 *	On success, returns the pointer to the beginning of newly allocated memory.
 *	To avoid a memory leak, the returned pointer must be deallocated
 *	with free() or realloc().
 *	If 'size' is zero, a unique pointer value that can be successfully
 *	passed to free() will be returned.
 *	On failure, returns a null pointer.
 *
 * Description
 * 	Allocates memory for an array of 'nmemb' objects of 'size' and
 * 	initializes all bytes in the allocated storage to zero.
 *
 * Undefined behavior
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
