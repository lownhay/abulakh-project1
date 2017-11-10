/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:26:17 by abulakh           #+#    #+#             */
/*   Updated: 2017/10/30 14:26:18 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		k[2];
	long long		m;
	char	*num;

	i = 0;
	k[0] = 0;
	k[1] = 0;
	m = 0;
	num = (char *)str;
	while (num[i] == '\t' || num[i] == '\v' || num[i] == ' '
		|| num[i] == '\r' || num[i] == '\n' || num[i] == '\f')
		i++;	
	if (num[i] == '-')
		k[0] = 1;
	if (num[i] == '-' || num[i] == '+')
		i++;
	while (num[i] >= '0' && num[i] <= '9')
	{
		m = (m + num[i++] - '0') * 10;
		k[1] += 1;
	}
	if (k[1] > 18 && k[0] != 1)
		return (-1);
	else if (k[1] > 18 && k[0] == 1)
		return (0);
	m /= 10;
	if (k[0] == 1)
		m = -m;
	return (m);
}
