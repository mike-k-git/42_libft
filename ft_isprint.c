/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:31:58 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:36:00 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters
 * 	c:  character to classify
 *
 * Return value
 * 	Non-zero value if the character can be printed, zero otherwise.
 *
 * Description
 * 	Checks if the given character can be printed, i.e. it is either 
 * 	a number (0123456789), an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), 
 * 	a lowercase letter (abcdefghijklmnopqrstuvwxyz), 
 * 	a punctuation character (!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~), 
 * 	or space, or any character classified as printable by the current C locale.
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not representable 
 * 	as unsigned char and is not equal to 'EOF'.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
