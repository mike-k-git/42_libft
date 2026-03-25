/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:37:23 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:38:47 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *	content: The content to store in the new node.
 *
 * Return value
 *	A pointer to the new node
 *
 * External functions
 * 	malloc
 *
 * Description
 *	Allocates memory (using malloc(3)) and returns
 *	a new node. The ’content’ member variable is
 *	initialized with the given parameter ’content’.
 *	The variable ’next’ is initialized to NULL.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
