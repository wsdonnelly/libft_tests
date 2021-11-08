/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:13:52 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 12:36:32 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strchr()
{
	TESTF("ft_strchr");

	TESTN(1);
	char *s1;
	char *s2;
	printf("\nabcd -> \'c\'")
	s1 = strcat("abcd", 'c');
	s2 = ft_strcat("abcd", 'c');
	printf("\nOriginal libc function returns %s\n", s1);
	printf("To be tested  function returns %s\n", s2);
	if (strcmp(s1, s2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	char *s1;
	char *s2;
	printf("abcd -> \'\\0\'")
	s1 = strcat("\nabcd", '\0');
	s2 = ft_strcat("abcd", '0');
	printf("\nOriginal libc function returns %s\n", s1);
	printf("To be tested  function returns %s\n", s2);
	if (strcmp(s1, s2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	char *s1;
	char *s2;
	printf("\nabcd -> \'x\'")
	s1 = strcat("abcd", 'x');
	s2 = ft_strcat("abcd", 'x');
	printf("\nOriginal libc function returns %s\n", s1);
	printf("To be tested  function returns %s\n", s2);
	if (strcmp(s1, s2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);
}