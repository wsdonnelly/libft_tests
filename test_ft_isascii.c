/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:50 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 10:40:58 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isascii()
{
	TESTF("ft_isascii");

	TESTN(1);
	char c = "H";
	int n1, n2;
	printf("H");
	n1 = ft_isascii(c);
	n2 = isascii(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	char c = '\0';
	int n1, n2;
	printf("\'\\0\'");
	n1 = ft_isascii(c);
	n2 = isascii(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);
	char c = 128;
	int n1, n2;
	printf("128");
	n1 = ft_isascii(c);
	n2 = isascii(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
}