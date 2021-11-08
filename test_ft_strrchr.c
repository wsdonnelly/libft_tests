/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:06:55 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 15:15:51 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strrchr()
{
	TESTF("ft_strrchr");

	char *s1;
	char *s2;

	TESTN(1);
	printf("\nabcd -> c\n");
	s1 = strrchr("abcd", 'c');
	s2 = ft_strrchr("abcd", 'c');
	printf("original returns\t%s\n", s1);
	printf("ft_strrchr returns\t%s\n", s2);
	if (s1 == s2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	printf("\nabcd -> \'\\0\'\n");
	s1 = strrchr("abcd", '\0');
	s2 = ft_strrchr("abcd", '\0');
	printf("original returns\t%s\n", s1);
	printf("ft_strrchr returns\t%s\n", s2);
	if (s1 == s2)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	printf("\nabcd -> x\n");
	s1 = strrchr("abcd", 'x');
	s2 = ft_strrchr("abcd", 'x');
	printf("original returns\t%s\n", s1);
	printf("ft_strrchr returns\t%s\n", s2);
	if (s1 == s2)
		TESTOK(3);
	else
		TESTFAILED(3); 
}
