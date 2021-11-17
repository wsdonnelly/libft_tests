/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:44:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 16:25:38 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isprint()
{
	TESTF("ft_isprint");

	TESTN(1);
	char c = '9';
	int n1, n2;
	printf("9");
	n1 = ft_isprint(c);
	n2 = isprint(c);
	printf("\nOriginal libc function returns %d\n", n2);
	printf("To be tested function returns %d\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	c = ' ';
	printf("<space>");
	n1 = ft_isprint(c);
	n2 = isprint(c);
	printf("\nOriginal libc function returns %d\n", n2);
	printf("To be tested function returns %d\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);
	c = '\0';
	printf("<empty>");
	n1 = ft_isprint(c);
	n2 = isprint(c);
	printf("\nOriginal libc function returns %d\n", n2);
	printf("To be tested function returns %d\n", n1);
	if (n1 == n2)
		TESTOK(3);
	else
		TESTFAILED(3);
	
}
