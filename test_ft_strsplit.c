/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:19:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:45:05 by wdonnell         ###   ########.fr       */
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
}
