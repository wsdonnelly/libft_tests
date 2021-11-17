/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 14:22:10 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test2(unsigned int n, char *str)
{
	str[n] = 'x';
}

void test_ft_striteri()
{
	TESTF("ft_striteri");
	TESTN(1);/*
	char str[] = "hello world!";
	printf("orig str\t%s\n", str);
	ft_striteri(str, &test2);
	printf("modified str\t%s\n", str);
	*/
}
