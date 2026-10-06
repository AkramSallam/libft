/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: asallam <asallam@student.42amman.com>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 12:36:08 by asallam          #+#    #+#              */
/*   Updated: 2026/10/06 18:17:50 by asallam         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ans;
	int	sign;
	int	i;

	i = 0;
	ans = 0;
	sign = 1;
	while (nptr[i] == ' '
			|| (nptr[i] >= '\t' && nptr[i] <= '\r'))
	i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
		ans = (ans * 10) + (nptr[i++] - '0');
	return (ans * sign);
}
