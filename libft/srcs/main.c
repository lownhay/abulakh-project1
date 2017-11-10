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
	// char a[] = "bbbbbbbbbb";
	// char a1[] = "aaa";
	// char a2[] = "bbbbbbbbbb";
	// char a3[] = "aaa";
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

	// printf("%d\n", memcmp(a, a1, 8));
	// printf("%d\n", ft_memcmp(a2, a3, 8));

	/*printf("base = %lu\n", strlen(a1));
	printf("my = %lu\n", strlen(a3));*/

	/*printf("base = %s\n", strdup(a1));
	printf("my = %s\n", strdup(a3));*/

	// printf("base = %s\n", strcpy(a, a1));
	// printf("my = %s\n", ft_strcpy(a2, a3));
	// printf("%s\n", a);
	// printf("%s\n", a2);

	/*printf("base = %s\n", strncpy(a + 14, a1, 7));
	printf("my = %s\n", ft_strncpy(a2 + 14, a3, 7));
	printf("%s\n", a);
	printf("%s\n", a2);*/


	// char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	// char buff1[0xF00] = "there is no stars in the sky";
	// char buff2[0xF00] = "there is no stars in the sky";
	// size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
	// printf("base = %zu\n", strlcat(buff1, str, 0));
	// printf("my = %zu\n", ft_strlcat(buff2, str, 0));
	// printf("%s\n", buff1);
	// printf("%s\n", buff2);
	
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

	// char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	// char *d1 = strchr(src, '\0');
	// char *d2 = ft_strchr(src, '\0');
	// printf("Base = %s\n", d1);
	// printf("My = %s\n", d2);

	/*k = strrchr(str, 'h');
	printf("Base = %s\n", k);
	k1 = ft_strrchr(str, 'h');
	printf("My = %s\n", k1);*/

	/*char *s1 = "";
	char *s2 = "";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	printf("Base = %s\n", i1);
	printf("My = %s\n", i2);*/

	/*char *s1 = "A";
	char *i1 = strnstr(s1, s1, 2);
	char *i2 = ft_strnstr(s1, s1, 2);

	printf("Base = %s\n", i1);
	printf("My = %s\n", i2);*/

	// char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	// char *s2 = "\x12\x02";
	// printf("Base = %d\n", strcmp(s1, s2));
	// printf("My = %d\n", ft_strcmp(s1, s2));
	char *str;
	char *str1;

	str = "123";
	str1 = "abcd";
	printf("Base = %d\n", strncmp(str, str1, 0));
	printf("My = %d\n", ft_strncmp(str, str1, 0));

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
	// char **k;
	// int i;
	// i = 0;
	//printf("check001\n");
	// k = ft_strsplit("***hskafd****shkfjsdh *  *lol*l", '*');
	//printf("check002\n");
	// while (k[i])
	// {
	// 	printf("%s\n", k[i]);
	// 	i++;
	// }

	//char *s1 = "   \t  \n\n \t\t  \n\n\n";
	// char *s1 = "  \t \t \n   \n\n\n\t";
	// char *s2 = "";
	// char *ret = ft_strtrim(s1);

	// if (!strcmp(ret, s2))
	// 	printf("TEST_SUCCESS");
	// printf("TEST_FAILED");

	//printf("ft_itoa = %s\n", ft_itoa(1943739013));

	//ft_putnbr(-2147483648);

	return (0);
}
