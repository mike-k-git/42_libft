/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:35:56 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:12:02 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Parameters
 *  n: integer to examine
 *
 * Return value
 *  size of 'n' as C string (power of 10 + optional sign + '\0')
 *
 * Description
 *  Counts the number of characters to represent 'n' as C string
 */

static int	ft_size_n(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/* Parameters
 *  n: The integer to convert.
 *
 * Return value
 *  The string representing the integer.
 *  NULL if the allocation fails.
 *
 * External functions
 *  malloc
 *
 * Description
 *  Allocates memory (using malloc(3)) and returns
 *  a string representing the integer received as an
 *  argument. Negative numbers must be handled.
 */

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		is_negative;

	is_negative = 0;
	len = ft_size_n(n);
	if (n < 0)
		is_negative = 1;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (len--)
	{
		if (n % 10 < 0)
			num[len] = -(n % 10) + '0';
		else
			num[len] = (n % 10) + '0';
		n /= 10;
		if (len == 0 && is_negative)
			num[len] = '-';
	}
	return (num);
}
