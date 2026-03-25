/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:16:26 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 15:19:59 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Parameters
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is an uppercase letter, zero otherwise.
 *
 * Description
 * 	Checks if the given character is an uppercase character
 * 	according to the current C locale.
 * 	In the default "C" locale, ft_isupper returns true only for 
 * 	the uppercase letters (ABCDEFGHIJKLMNOPQRSTUVWXYZ). 
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not representable 
 * 	as unsigned char and is not equal to 'EOF'.
 */

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/*
 * Parameters
 * 	c: character to be converted
 *
 * Return value
 * 	Lowercase version of 'c' or unmodified 'c' if no
 * 	lowercase version is listed in the current C locale.
 *
 * Description
 * 	Converts the given character to lowercase according
 * 	to the character conversion rules defined by
 * 	the currently installed C locale.
 * 	In the default "C" locale, the following
 * 	uppercase letters ABCDEFGHIJKLMNOPQRSTUVWXYZ
 * 	are replaced with respective
 * 	lowercase letters abcdefghijklmnopqrstuvwxyz.
 *
 * Undefined behavior
 * 	If the value of 'c' is not representable as unsigned char
 * 	and does not equal 'EOF', the behavior is undefined. 
 */

int	ft_tolower(int c)
{
	if (ft_isupper(c) != 0)
		c += 32;
	return (c);
}
