/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 16:31:34 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_itoa()
{
	TESTF("ft_itoa");

	TESTN(1);
	char *str;
	printf("123456789");
	str = ft_itoa(123456789);
	printf("\nTo be tested function returns %s\n", str);
	if (strcmp(str, "123456789") == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	free (str);

	TESTN(2);
	printf("INT_MIN");
	char *str1 = ft_itoa(INT_MIN);
	printf("\nTo be tested function returns %s\n", str1);
	if (strcmp(str1, "-2147483648") == 0)
		TESTOK(2);
	else
		TESTFAILED(2);
	free (str1);

	TESTN(3);
	printf("INT_MAX");
	char *str2 = ft_itoa(INT_MAX);
	printf("\nTo be tested function returns %s\n", str2);
	if (strcmp(str2, "2147483647") == 0)
		TESTOK(3);
	else
		TESTFAILED(3);
	free (str2);
	
	TESTN(4);
	printf("0");
	char *str3 = ft_itoa(0);
	printf("\nTo be tested function returns %s\n", str3);
	if (strcmp(str3, "0") == 0)
		TESTOK(4);
	else
		TESTFAILED(4);
	free (str3);
}
