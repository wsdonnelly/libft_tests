/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:19:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 12:51:22 by willdonnell      ###   ########.fr       */
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
}
