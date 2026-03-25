/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:42:51 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:45:00 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Parameters
 *	lst: The beginning of the list.
 *
 * Return value
 *	Last node of the list
 *
 * External functions
 * 	None
 *
 * Description
 *	Returns the last node of the list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
