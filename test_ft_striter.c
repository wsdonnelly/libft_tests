/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:06 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 11:03:00 by willdonnell      ###   ########.fr       */
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
	//ft_striter(str, &test);
	//printf("modified str\t\t%s\n", str);

}