/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:44:32 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 10:46:14 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isprint()
{
	TESTF("ft_isprint");

	TESTN(1);
	char c = "9";
	int n1, n2;
	printf("9");
	n1 = ft_isprint(c);
	n2 = isprint(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	char c = 128;
	int n1, n2;
	printf("128");
	n1 = ft_isprint(c);
	n2 = isprint(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
}