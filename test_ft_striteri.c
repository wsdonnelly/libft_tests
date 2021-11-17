/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 17:52:41 by willdonnell      ###   ########.fr       */
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

	TESTN(1);
	char s1[] = "hello world!";
	printf("orig str\t%s\n", s1);
	//ft_striteri(s1, &test2);
	
	printf("modified str\t%s\n", s1);
}
