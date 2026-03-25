/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:10:32 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:14:55 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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
 *  n: The integer to output.
 *  fd: The file descriptor on which to write.
 *
 * Return value
 *  None
 *
 * External functions
 *  write
 *
 * Description
 *  Outputs the integer ’n’ to the specified file
 *  descriptor.
 *
 * Undefined behavior
 * 	The function assumes that 'fd' is a valid file descriptor.
 * 	The function assumes that 'n' is within int range.
 */

void	ft_putnbr_fd(int n, int fd)
{
	char	num[11];
	int		len;
	int		is_negative;
	int		temp;

	temp = n;
	is_negative = 0;
	len = ft_size_n(n);
	if (n < 0)
		is_negative = 1;
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
	write(fd, num, ft_size_n(temp));
}
