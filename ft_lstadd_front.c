/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:39:13 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:48:00 by mkugan           ###   ########.fr       */
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
 *	Adds the node ’new’ at the beginning of the list.
 *
 * Undefined behavior
 * 	The function assumes that 'new' and 'lst' are valid pointers.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
