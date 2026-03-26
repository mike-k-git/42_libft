/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:36:06 by mkugan            #+#    #+#             */
/*   Updated: 2025/06/12 19:24:52 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int	ft_size_n_ultoa_base(unsigned long n, int len_base)
{
	int	len;

	len = 1;
	while (n >= (unsigned int)len_base)
	{
		n /= (unsigned int)len_base;
		len++;
	}
	return (len);
}

char	*ft_utoa_base(unsigned long n, char *base)
{
	char	*num;
	int		len;
	int		len_base;

	len_base = ft_strlen(base);
	len = ft_size_n_ultoa_base(n, len_base);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (len--)
	{
		num[len] = base[n % len_base];
		n /= len_base;
	}
	return (num);
}
