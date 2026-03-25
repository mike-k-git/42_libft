/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:50:03 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:52:13 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *	lst: The address of a pointer to a node.
 *	del: The address of the function used to delete the content of the node.
 *
 * Return value
 *	None
 *
 * External functions
 * 	free
 *
 * Description
 *	Deletes and frees the given node and all its
 *	successors, using the function ’del’ and free(3).
 *	Finally, set the pointer to the list to NULL.
 *
 * Undefined behavior
 * 	The function assumes that 'lst' and 'del' are valid pointers.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}
