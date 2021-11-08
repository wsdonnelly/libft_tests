/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:44:25 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test(unsigned int n, char * str)
{
	str[n] = ((str[n] + 1) % 26);
}

void test_ft_striteri()
{
	TESTF("ft_striteri");
	TESTN(1);
	char str[] = "hello world!";
	printf("orig str\t%s\n", str);
	ft_striteri(str, &test);
	printf("modified str\t\t%s\n", str);
}
