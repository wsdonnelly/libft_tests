/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 11:02:17 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"
/*
void test2(unsigned int n, char * str)
{
	str[n] = ((str[n] + 1) % 26) + 'a';
}
*/
void test_ft_striteri()
{
	TESTF("ft_striteri");
	TESTN(1);
	char str[] = "hello world!";
	printf("orig str\t%s\n", str);
	//ft_striteri(str, &test2);
	//printf("modified str\t\t%s\n", str);*/
}
