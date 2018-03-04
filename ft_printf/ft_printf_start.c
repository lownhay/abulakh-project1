/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abulakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:41:58 by abulakh           #+#    #+#             */
/*   Updated: 2018/02/24 19:41:59 by abulakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_print_1(char *format, int i)
{
	int k;

	k = 0;
	while (format[i + k] && format[i + k] != '%')
	{
		ft_putchar(format[i + k]);
		k++;
	}
	return (k);
}

void ft_start_va(const char **format, va_list ap)
{
	f_print mybaby;
	
	mybaby.first[0] = 0;
	mybaby.first[1] = 0;
	mybaby.first[2] = 0;
	mybaby.first[3] = 0;
	mybaby.first[4] = 0;
	printf("c = %c\n", **format);
	while(ft_strchr("+#0 -", **format))
	{
		printf("check\n");
		if (**format == '+')
			mybaby.first[0] = 1;
		if (**format == '#')
			mybaby.first[1] = 1;
		if (**format == '0')
			mybaby.first[2] = 1;
		if (**format == ' ')
			mybaby.first[3] = 1;
		if (**format == '-')
			mybaby.first[4] = 1;
		(*format)++;
	}
	printf("+ = %d\n# = %d\n0 = %d\n' ' = %d\n - = %d\n", mybaby.first[0], mybaby.first[1], mybaby.first[2], mybaby.first[3], mybaby.first[4]);
	exit(1);
}

int ft_printf(const char *format, ...)
{
	int i;

	i = 0;
	va_list ap;
	va_start(ap, format);
	while (*format)
	{
		while (*format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		if (*format == '%')
		{
			format++;
			ft_start_va(&format, ap);
		}
	}
	va_end(ap);
	return (i);
}

int main(void)
{
	int i;
	int k;

	i = 0;
	k = 0;
	ft_printf("bla-bla\n%+ +##0-d", 1);
	//var("%s", "test string");
	//ft_printf("%s", "test string");
	return (1);
}