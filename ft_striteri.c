/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:46:24 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 11:48:40 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters
 *  s: The string to iterate over.
 *  f: The function to apply to each character.
 *
 * Return value
 *  None
 *
 * External functions
 *  None
 *
 * Description
 *  Applies the function ’f’ to each character of the
 *  string passed as argument, passing its index as
 *  the first argument. Each character is passed by
 *  address to ’f’ so it can be modified if necessary.
 *
 * Undefined behavior
 * 	Function assumes that 's' is NUL-terminated C string.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx++;
	}
}
