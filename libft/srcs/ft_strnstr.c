/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:56:12 by abulakh           #+#    #+#             */
/*   Updated: 2017/10/26 18:56:13 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	a = (char *)haystack;
	b = (char *)needle;
	while (a[i] && i < len)
	{
		while (a[i] == b[j] && i < len && a[i] && b[i])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(b))
			return (&a[i] - j);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
