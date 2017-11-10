/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 20:45:56 by abulakh           #+#    #+#             */
/*   Updated: 2017/10/25 20:45:57 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	// char a[] = "";
	// char a1[] = "kak sam lul";
	// char a2[] = "";
	// char a3[] = "kak sam lul";
	// char str[] = "memmove может оказаться очень полезной функцией..............";
	// char str2[] = "memmove может оказаться очень полезной функцией..............";
	// char str[] = "123456";
	// char *k;
	// char str1[] = "1234578";
	// char *k1;
	// int i = 0;
	// char str[10];
	// while (str[i])
	// {
	// 	str[i] = '\0';
	// 	i++;
	// }
	// char str2[10];
	// i = 0;
	// while (str2[i])
	// {
	// 	str2[i] = '\0';
	// 	i++;
	// }
	/*memset(a, '1', 3);
	printf("%s\n", a);
	ft_memset(a1, '2', 3);
	printf("%s\n", a1);*/


	/*bzero(a, 1);
	printf("%c\n", *(a + 1));
	ft_bzero(a1, 1);
	printf("%c\n", *(a1 + 1));*/

	/*memcpy(a1, a, 5);
	printf("%s\n", a1);
	ft_memcpy(a3, a2, 5);
	printf("%s\n", a3);*/

	/*memccpy(a1, a, '1', 6);
	printf("%s\n", a1);
	ft_memccpy(a3, a2, '1', 6);
	printf("%s\n", a3);*/
	
	/*memmove(str + 50, str + 38, 46);
	printf("%s\n", str);
	ft_memmove(str2 + 50, str2 + 38, 46);
	printf("%s\n", str2);*/

	/*k = memchr(str, '4', 15);
	printf("Позиция символа = %s\n", k);
	k1 = ft_memchr(str, '4', 15);
	printf("Позиция символа = %s\n", k1);*/

	/*printf("%d\n", memcmp(a, a1, 10));
	printf("%d\n", ft_memcmp(a2, a3, 10));*/

	/*printf("base = %lu\n", strlen(a1));
	printf("my = %lu\n", strlen(a3));*/

	/*printf("base = %s\n", strdup(a1));
	printf("my = %s\n", strdup(a3));*/

	/*printf("base = %s\n", strcpy(a + 14, a1));
	printf("my = %s\n", ft_strcpy(a2 + 14, a3));
	printf("%s\n", a);
	printf("%s\n", a2);*/

	/*printf("base = %s\n", strncpy(a + 14, a1, 7));
	printf("my = %s\n", ft_strncpy(a2 + 14, a3, 7));
	printf("%s\n", a);
	printf("%s\n", a2);*/
	
	/*printf("%s\n", str);
	printf("%s\n", str2);
	strcat(str, "privet");
	printf("base1 = %s\n", str);
	strcat(str, " moy drug");
	printf("base2 = %s\n", str);
	ft_strcat(str2, "privet");
	printf("my1 = %s\n", str2);
	ft_strcat(str2, " moy drug");
	printf("my2 = %s\n", str2);*/

	/*printf("%s\n", str);
	printf("%s\n", str2);
	strncat(str, "privet lul", 6);
	printf("base1 = %s\n", str);
	strncat(str, " moy drug suk", 9);
	printf("base2 = %s\n", str);
	ft_strncat(str2, "privet lul", 6);
	printf("my1 = %s\n", str2);
	ft_strncat(str2, " moy drug suk", 9);
	printf("my2 = %s\n", str2);*/

	/*k = strchr(str, 'p');
	printf("Base = %s\n", k);
	k1 = ft_strchr(str, 'p');
	printf("My = %s\n", k1);*/

	/*k = strrchr(str, 'h');
	printf("Base = %s\n", k);
	k1 = ft_strrchr(str, 'h');
	printf("My = %s\n", k1);*/

	/*printf("Base = %s\n", strstr(str, str1));
	printf("My = %s\n", ft_strstr(str, str1));*/

	/*printf("Base = %s\n", strnstr(str, str1, 17));
	printf("My = %s\n", ft_strnstr(str, str1, 17));*/

	/*printf("Base = %d\n", strcmp(str, str1));
	printf("My = %d\n", ft_strcmp(str, str1));*/

	/*printf("Base = %d\n", strncmp(str, str1, 5));
	printf("My = %d\n", ft_strncmp(str, str1, 5));*/

	/*printf("base = %d\n", atoi("9223372036854775808"));
	printf("my = %d\n", ft_atoi("9223372036854775808"));*/

	/*printf("base = %d\n", isalpha('a'));
	printf("my = %d\n", ft_isalpha('a'));*/

	/*printf("base = %d\n", isdigit('a'));
	printf("my = %d\n", ft_isdigit('a'));*/

	/*printf("base = %d\n", isalnum('\n'));
	printf("my = %d\n", ft_isalnum('\n'));*/

	/*printf("base = %c\n", toupper('f'));
	printf("my = %c\n", ft_toupper('f'));
	printf("base1 = %c\n", toupper('S'));
	printf("my1 = %c\n", ft_toupper('S'));
	printf("base2 = %c\n", toupper('.'));
	printf("my2 = %c\n", ft_toupper('.'));*/

	/*printf("base = %c\n", tolower('f'));
	printf("my = %c\n", ft_tolower('f'));
	printf("base1 = %c\n", tolower('S'));
	printf("my1 = %c\n", ft_tolower('S'));
	printf("base2 = %c\n", tolower('.'));
	printf("my2 = %c\n", ft_tolower('.'));*/
	
	/*char *c;
	int i;
	i = 0;
	c = (char *)malloc(sizeof(char) * 15);
	while (i < 9)
	{
		c[i] = '0' + i;
		i++;
	}
	printf("%s\n", c);
	free(c);
	i = 0;
	c = (char *)ft_memalloc(9);
	while (i < 9)
	{
		c[i] ='0' +  i;
		i++;	
	}
	printf("%s\n", c);
	printf("check1\n");
	ft_memdel(&c);
	printf("check2\n");*/
	//printf("check0000\n");
	char **k;
	int i;
	i = 0;
	//printf("check001\n");
	k = ft_strsplit("***hskafd****shkfjsdh *  *lol*l", '*');
	//printf("check002\n");
	while (k[i])
	{
		printf("%s\n", k[i]);
		i++;
	}



	return (0);
}
