/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:01 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 17:20:03 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

char	test4(unsigned int n, char c)
{

	c = ((c + n) % 26) + 'a';
	return (c);
}

void test_ft_strmapi()
{
	const char str[] = "Hello World!";
	char *new;
	TESTF("ft_strmapi")
	TESTN(1);
	printf("orig str\t%s\n", str);
	new = ft_strmapi(str, &test4);
	printf("mapped str\t%s\n", new);
	if (strcmp(new, "uyghllposngs") == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	free (new);
}
