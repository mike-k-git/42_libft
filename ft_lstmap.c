/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:56:28 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:57:09 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Parameters
 *	lst: The address of a pointer to a node.
 *	f: The address of the function to apply to each
 *	node’s content.
 *	del: The address of the function used to delete a
 *	node’s content if needed.
 *
 * Return value
 *	The new list.
 *	NULL if the allocation fails.
 *
 * External functions
 * 	malloc, free
 *
 * Description
 *	Iterates through the list ’lst’, applies the
 *	function ’f’ to each node’s content, and creates
 *	a new list resulting of the successive applications
 *	of the function ’f’. The ’del’ function is used to
 *	delete the content of a node if needed
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (new);
		}
		if (!new)
			new = node;
		else
			ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
