/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:45:47 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:46:09 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Parameters
 *	lst: The address of a pointer to the first node of a list.
 *	new: The address of a pointer to the node to be added.
 *
 * Return value
 *	None
 *
 * External functions
 * 	None
 *
 * Description
 *	Adds the node ‘new’ at the end of the list.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
