/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:53:26 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:54:38 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Parameters
 *	lst: The address of a pointer to a node.
 *	f: The address of the function to apply to each
 *	node’s content.
 *
 * Return value
 *	None
 *
 * External functions
 * 	None
 *
 * Description
 *	Iterates through the list ’lst’ and applies the
 *	function ’f’ to the content of each node.
 *
 * Undefined behavior
 * 	The function assumes that 'lt' and 'f' are valid pointers.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
