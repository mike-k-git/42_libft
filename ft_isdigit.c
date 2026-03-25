/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:59:12 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:23:04 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is a numeric character, zero otherwise.
 *
 * Description
 * 	Checks if the given character is a numeric character (0123456789).
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not representable 
 * 	as unsigned char and is not equal to 'EOF'.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
