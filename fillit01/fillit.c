/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:20:50 by abulakh           #+#    #+#             */
/*   Updated: 2017/11/28 17:20:51 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

int ft_next_power(int c)
{
	while (ft_sqrt(c) == -1)
		c++;
	return (c);
}

int main(void)
{
	int fd;
	int ret = 0;
	int i = 0, j = 0, s = 0, ii= 0, ol = 0, rl = 0;
	int m, k = 0;
	char buf[600];
	char **mas;
	char **obl;

	m = 0;
	fd = open("simple.fillit", O_RDONLY);
	while ((ret = read(fd, &(buf[m]), 21)))
	{
		buf[ret + m] = '\0';
		mas = ft_strsplit(&(buf[m]), '\n');
		if (!checkvalid(mas, &ol, &rl))
		{
			ft_free_split(mas);
			ft_putstr("error\n");
			break ;
		}
		else
			ft_free_split(mas);
		
		m = m + ret;
		j++;
	}
	// if ((ol > 0 || rl > 0) && (rl < 5 || ol < 5))
	// 	k = ft_sqrt(ft_next_power(j * 4)) + 1;
	// else 
	k = ft_sqrt(ft_next_power(j * 4));
	printf("k = %d\n", k);
	obl = (char **)malloc(sizeof(char *) * (k + 1));
	obl[k] = NULL;
	while (i < k)
	{
		obl[i] = (char *)malloc(sizeof(char **) * (k));
		obl[i][k] = 0;
		i++;
	}
	i = 0;
	while (i < k)
	{
		s = 0;
		while (s < k)
		{
			obl[i][s] = s + '0';
			s++;
		}
		i++;
	}
	i = 0;
	while (obl[i])
	{
		printf("%s\n", obl[i]);
		i++;
	}
	i = 0;
	mas = ft_strsplit2(buf, '\n', '#');
	while (mas[i])
	{
		printf("%s\n", mas[i]);
		i++;
	}
	ft_free_split(mas);
	printf("buf: \n%s", buf);
	printf("j = %d\n", j);
	close(fd);
	return (0);
}
