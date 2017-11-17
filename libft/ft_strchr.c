/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:07:04 by abulakh           #+#    #+#             */
/*   Updated: 2017/10/26 17:07:04 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	a = (char *)s;
	if (ft_strlen(a) == 0)
		return (NULL);
	while (k < ft_strlen(a))
	{
		if (a[i] == c)
		{
			break ;
		}
		i++;
		if (a[i] == '\0' && c != '\0')
			return (NULL);
		k++;
	}
	return (&a[i]);
}
