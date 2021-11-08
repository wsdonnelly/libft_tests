/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:36 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 10:37:21 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isalnum()
{
	TESTF("ft_isalnum");

	TESTN(1);
	char c = 'H';
	int n1, n2;
	printf("H");
	n1 = ft_isalnum(c);
	n2 = isalnum(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	char c = '\0';
	int n1, n2;
	printf("<\'\\0\'>");
	n1 = ft_isalnum(c);
	n2 = isalnum(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
}