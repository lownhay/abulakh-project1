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


int	*ft_strfindmax(char **k, char *str)
{
	int		*pos;
	int		i;
	int		j;

	i = 3;
	pos = (int *)malloc(sizeof(int) * 2);
	if (!pos)
		return (0);
	pos[1] = 0;
	pos[0] = 0;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (k[i][j] == str[0] && i > pos[0])
				pos[0] = i;
			if (k[i][j] == str[0] && j > pos[1])
				pos[1] = j;
			j--;
		}
		i--;
	}
	return (pos);
}

int	*ft_strfindmin(char **k, char *str)
{
	int		*pos;
	int		i;
	int		j;

	i = 0;
	pos = (int *)malloc(sizeof(int) * 2);
	if (!pos)
		return (0);
	pos[1] = 3;
	pos[0] = 3;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (k[i][j] == str[0] && i < pos[0])
				pos[0] = i;
			if (k[i][j] == str[0] && j < pos[1])
				pos[1] = j;
			j++;
		}
		i++;
	}
	return (pos);
}

char **creat_map(int k)
{
	int i;
	int s;
	char **obl;

	i = 0;
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
			obl[i][s] = '.';
			s++;
		}
		i++;
	}
	return (obl);
}

int check_position(char **obl, char **mas, int k, int j)
{
	int i;
	int p;
	int *posmin;
	int **pos;

	i = 0;
	k = 0;
	obl[0][0] = '0';
	pos = (int **)malloc(sizeof(int *) * j);
	while (i < j)
	{
		pos[i] = ft_strfindmax(&mas[i * 4], "#");
		posmin = ft_strfindmin(&mas[i * 4], "#");
		pos[i][0] = pos[i][0] - posmin[0] + 1;
		pos[i][1] = pos[i][1] - posmin[1] + 1;
		i++;
	}
	return (1);
}

int main(void)
{
	int fd;
	int ret = 0;
	int i = 0, j = 0, s = 0, ii= 0;
	int m, k = 0;
	char buf[600];
	char **mas;
	char **obl;

	m = 0;
	fd = open("sample.fillit", O_RDONLY);
	while ((ret = read(fd, &(buf[m]), 21)))
	{
		buf[ret + m] = '\0';
		mas = ft_strsplit(&(buf[m]), '\n');
		if (!checkvalid(mas))
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
	mas = ft_strsplit(buf, '\n');
	k = ft_sqrt(ft_next_power(j * 4));
	obl = creat_map(k);
	while (!check_position(obl, mas, k, j))
	{
		k++;
		ft_free_split(obl);
		obl = creat_map(k);
	}
	ft_free_split(obl);
	ft_free_split(mas);
	close(fd);
	return (0);
}
