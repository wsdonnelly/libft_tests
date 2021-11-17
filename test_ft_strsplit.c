/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:19:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 11:44:26 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strsplit()
{
	TESTF("ft_strsplt");

	TESTN(1);
	const char *orig = "*hello***world**terve*maailma**";
	char **str_arr;
	unsigned int i;

	printf("original\t%s\n", orig);
	i = 0;
	str_arr = ft_strsplit(orig, '*');
	while (str_arr[i] != NULL)
	{
		printf("%s\t%u\n", str_arr[i], i);
		i++;
	}
	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	str_arr = NULL;

	TESTN(2);
	const char *orig2 = "helloworldtervemaailma";
	printf("original contains no delimintor\t%s\n", orig2);
	i = 0;
	str_arr = ft_strsplit(orig2, '*');
	while (str_arr[i] != NULL)
	{
		printf("%s\t%u\n", str_arr[i], i);
		i++;
	}
	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	str_arr = NULL;

	TESTN(3);
	const char *orig3 = "******************";
	printf("original contains only delimintor\t%s\n", orig3);
	i = 0;
	str_arr = ft_strsplit(orig3, '*');
	while (str_arr[i] != NULL)
	{
		printf("%s\t%u\n", str_arr[i], i);
		i++;
	}
	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	str_arr = NULL;
/*
	TESTN(4);
	const char *orig4 = NULL;
	printf("original is NULL and delimiter\t%s\n", orig4);
	i = 0;
	str_arr = ft_strsplit(orig4, '*');
	while (str_arr[i] != NULL)
	{
		printf("%s\t%u\n", str_arr[i], i);
		i++;
	}
	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	str_arr = NULL;
*/
	TESTN(5);
	const char *orig5 = "*hello***world**terve*maailma**";
	printf("original is *hello***world**terve*maailma** and delimiter is \\0\t%s\n", orig5);
	i = 0;
	str_arr = ft_strsplit(orig5, '\0');
	while (str_arr[i] != NULL)
	{
		printf("%s\t%u\n", str_arr[i], i);
		i++;
	}
	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	str_arr = NULL;
}
