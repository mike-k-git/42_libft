/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:10:23 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 15:15:26 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is a lowercase letter, zero otherwise.
 *
 * Description
 * 	Checks if the given character is classified as a lowercase character 
 * 	according to the current C locale.
 * 	In the default "C" locale, ft_islower returns true only for 
 * 	the lowercase letters (abcdefghijklmnopqrstuvwxyz).
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not representable 
 * 	as unsigned char and is not equal to 'EOF'.
 */

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*
 * Parameters
 * 	c: character to be converted
 *
 * Return value
 * 	Uppercase version of 'c' or unmodified 'c' if no
 * 	uppercase version is listed in the current C locale.
 *
 * Description
 * 	Converts the given character to uppercase according
 * 	to the character conversion rules defined by
 * 	the currently installed C locale.
 * 	In the default "C" locale, the following
 * 	lowercase letters abcdefghijklmnopqrstuvwxyz
 * 	are replaced with respective
 * 	uppercase letters ABCDEFGHIJKLMNOPQRSTUVWXYZ.
 *
 * Undefined behavior
 * 	If the value of 'c' is not representable as unsigned char
 * 	and does not equal 'EOF', the behavior is undefined. 
 */

int	ft_toupper(int c)
{
	if (ft_islower(c) != 0)
		c -= 32;
	return (c);
}
