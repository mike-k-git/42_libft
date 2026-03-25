/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:25:39 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:22:46 by mkugan           ###   ########.fr       */
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
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is an alphabetic character, zero otherwise.
 *
 * Description
 * 	Checks if the given character is an alphabetic character, 
 * 	i.e. either an uppercase letter (ABCDEFGHIJKLMNOPQRSTUVWXYZ), 
 * 	or a lowercase letter (abcdefghijklmnopqrstuvwxyz).
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not 
 * 	representable as unsigned char and is not equal to 'EOF'.
 */

int	ft_isalpha(int c)
{
	if (ft_islower(c) != 0 || ft_isupper(c) != 0)
		return (1);
	return (0);
}
