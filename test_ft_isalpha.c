/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:30:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 10:35:56 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_isalpha()
{
	TESTF("ft_isalpha");

	TESTN(1);
	char c = "H";
	int n1, n2;
	printf("H");
	n1 = ft_isalpha(c);
	n2 = isalpha(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	char c = "4";
	int n1, n2;
	printf("4");
	n1 = ft_isalpha(c);
	n2 = isalpha(c);
	printf("\nOriginal libc function returns %d\n", n2;);
	printf("To be tested function returns %s\n", n1);
	if (n1 == n2)
		TESTOK(2);
	else
		TESTFAILED(2);
}