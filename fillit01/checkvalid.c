/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:25:29 by abulakh           #+#    #+#             */
/*   Updated: 2017/11/24 16:25:29 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int	checkvalid(char **mas)
{
	int i, i1, i2;
	int k;
	int n;
	int m, flag = 0;

	k = 0;
	n = 0;
	m = 0;
	i = 0;
	while (mas[i])
		i++;
	if (i != 4)
		return (0);
	i = 0;
	while (mas[i])
	{
		while (mas[i][k] && ft_strlen(mas[i]) == 4)
		{
			if (mas[i][k] == '#' && i < 3 && mas[i + 1][k] == '#' && mas[i][k + 1] == '#' && mas[i + 1][k + 1] == '#')
				flag = 1;
			if (flag != 1 && mas[i][k] == '#' && ((i < 3 && mas[i + 1][k] == '#') && mas[i][k + 1] == '#'))
				m += 2;
			if (flag != 1 && mas[i][k] == '#' && ((i < 3 && mas[i + 1][k] == '#') && mas[i][k + 1] != '#'))
				m++;
			if (flag != 1 && mas[i][k] == '#' && ((i < 3 && mas[i + 1][k] != '#') && mas[i][k + 1] == '#'))
				m++;
			if (flag != 1 && mas[i][k] == '#' && i == 3 && mas[i][k + 1] == '#')
				m++;
			if (mas[i][k] != '.' && mas[i][k] != '#')
				break ;
			k++;
			n++;
		}
		if (ft_strcmp(mas[i], "####") == 0)
			i1 = 4;
		k = 0;
		i++;
	}
	if (flag == 1)
		m = 3;
	i = 0;
	while (k < 4)
	{
		if (mas[0][k] == '#' && mas[1][k] == '#' && mas[2][k] == '#' && mas[3][k] == '#')
			i2 = 4;
		k++;
	}
	if (m != 3 || n != 16)
		return (0);
	return (m);
}

// int main(void)
// {
// 	int fd;
// 	int ret;
// 	int m, ol, rl;
// 	char buf[22];
// 	char **mas;

// 	m = 0;
// 	rl = 0;
// 	ol = 0;
// 	fd = open("simple.fillit", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		ft_putstr("open() error");
// 		return (1);
// 	}
// 	while ((ret = read(fd, buf, 21)))
// 	{
// 		buf[ret] = '\0';
// 		mas = ft_strsplit(buf, '\n');
// 		if (!checkvalid(mas, &ol, &rl))
// 		{
// 			ft_free_split(mas);
// 			ft_putstr("error\n");
// 			break ;
// 		}
// 		ft_free_split(mas);
// 	}
// 	close(fd);
// 	return (0);
// }
