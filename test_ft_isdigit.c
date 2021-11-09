/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:42:03 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/09 09:50:31 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isdigit()
{
	TESTF("ft_isdigit");

	TESTN(1);
	char c = '9';
	int n1, n2;
	printf("9");
	n1 = ft_isdigit(c);
	n2 = isdigit(c);
	printf("\nOriginal libc function returns %d\n", n2);
	printf("To be tested function returns %d\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	c = 'a';
	printf("a");
	n1 = ft_isdigit(c);
	n2 = isdigit(c);
	printf("\nOriginal libc function returns %d\n", n2);
	printf("To be tested function returns %d\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
}