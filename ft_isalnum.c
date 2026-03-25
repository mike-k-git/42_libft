/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:02:55 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 12:21:41 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Parameters
 * 	c: character to classify
 *
 * Return value
 * 	Non-zero value if the character is an alphanumeric character,
 * 	'0' otherwise.
 *
 * Description
 * 	Checks if the given character is an alphanumeric character
 * 	as classified by the current C locale.
 * 	In the default locale, the following characters are alphanumeric:
 * 		Digits (0123456789),
 * 		Uppercase letters (ABCDEFGHIJKLMNOPQRSTUVWXYZ),
 * 		Lowercase letters (abcdefghijklmnopqrstuvwxyz).
 *
 * Undefined behavior
 * 	The behavior is undefined if the value of 'c' is not representable
 * 	as unsigned char and is not equal to 'EOF'.
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}
