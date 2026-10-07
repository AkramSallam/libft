/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:16:38 by asallam           #+#    #+#             */
/*   Updated: 2026/10/07 13:28:28 by asallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n = -n;
	}
	if (n == 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_digits(n);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	len--;
	while (n != 0)
	{
		result[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*
#include <limits.h>

int main()
{
	char *s = ft_itoa(0);
	printf("%s", s);
}
*/
