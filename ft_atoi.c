/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:56:50 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/13 09:31:42 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	nptr: pointer to the null-terminated byte string to be interpreted
 *
 * Return value
 * 	Integer value corresponding to the contents of 'nptr' on success.
 * 	If no conversion can be performed, '0' is returned.
 *
 * Description
 * 	Interprets an integer value in a byte string pointed to by 'nptr'.
 * 	The implied radix is always 10.
 * 	Discards any whitespace characters until the first non-whitespace
 * 	character is found, then takes as many characters as possible to form
 * 	a valid integer number representation and converts them to
 * 	an integer value. The valid integer value consists of the following parts:
 * 		(optional) plus or minus sign
 * 		numeric digits
 *
 * Undefine behavior
 * 	If the value of the result cannot be represented, i.e.
 * 	the converted value falls out of range of the corresponding return type,
 * 	the behavior is undefined.d behavior
 */

int	ft_atoi(const char *nptr)
{
	int	integer;
	int	negative;

	integer = 0;
	negative = 0;
	while (*nptr && ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			negative = 1;
	while (*nptr && ft_isdigit(*nptr))
		integer = integer * 10 - (*nptr++ - '0');
	if (!negative)
		integer = -integer;
	return (integer);
}
