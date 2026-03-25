/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:46:27 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:47:46 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *	lst: The node to free.
 *	del: The address of the function used to delete he content.
 *
 * Return value
 *	None
 *
 * External functions
 * 	free
 *
 * Description
 *	Takes a node as parameter and frees its content
 *	using the function ’del’. Free the node itself but
 *	does NOT free the next node.
 *
 * Undefined behavior
 * 	The function assumes that 'lst' and 'del' are valid pointers.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
