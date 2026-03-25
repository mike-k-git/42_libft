/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:17:13 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:28:17 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is a 7-bit US-ASCII character code
 * 	between 0 and octal 0177 inclusive, '0' otherwise.*
 *
 * Description
 * 	Checks if the given character is a 7-bit US-ASCII character code.
 *
 * Undefined behavior
 * 	The behavior is defined on all integer values.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
