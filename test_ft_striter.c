/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:06 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:20:06 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test(char *str)
{
	*str = 'x';
}

void test_ft_striter()
{
	TESTF("ft_striter");
	TESTN(1);
	char str[] = "hello world!";
	printf("orig str\t%s\n", str);
	ft_striter(str, &test);
	printf("modified str\t\t%s\n", str);
}