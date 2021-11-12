/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:50:46 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 11:19:19 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

char	test3(char c)
{
	c = ((c + 1) % 26) + 'a';
	return (c);
}

void test_ft_strmap()
{
	const char str[] = "Hello World!";
	char *new;

	TESTF("ft_strmap")
	TESTN(1);
	printf("orig str\t%s\n", str);
	new = ft_strmap(str, &test3);
	printf("mapped str\t%s\n", new);
	free (new);
}
