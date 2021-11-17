/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:42 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 10:10:02 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_atoi()
{
	TESTF("ft_atoi");

	TESTN(1);
	printf("-42");
	int i = atoi("-42");
	int ii = ft_atoi("-42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(1);
	else
			TESTFAILED(1);

	TESTN(2);
	printf("     -42");
	i = atoi("     -42");
	ii = ft_atoi("     -42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(2);
	else
			TESTFAILED(2);

	TESTN(3);
	printf(" \\t\\n\\v\\f\\r-42");
	i = atoi(" \t\n\v\f\r-42");
	ii = ft_atoi(" \t\n\v\f\r-42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(3);
	else
			TESTFAILED(3);

	TESTN(4);
	printf(" ++42");
	i = atoi(" ++42");
	ii = ft_atoi(" ++42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(4);
	else
			TESTFAILED(4);

	TESTN(5);
	printf(" +-42");
	i = atoi(" +-42");
	ii = ft_atoi(" +-42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(5);
	else
			TESTFAILED(5);

	TESTN(6);
	printf("0");
	i = atoi("0");
	ii = ft_atoi("0");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(6);
	else
			TESTFAILED(6);

	TESTN(7);
	printf("   +1");
	i = atoi("   +1");
	ii = ft_atoi("   +1");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(7);
	else
			TESTFAILED(7);

	TESTN(8);
	printf("Empty string");
	i = atoi("");
	ii = ft_atoi("");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(8);
	else
			TESTFAILED(8);
			
	TESTN(9);
	printf("--42");
	i = atoi("--42");
	ii = ft_atoi("--42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(9);
	else
			TESTFAILED(9);

	TESTN(10);
	printf("<empty>");
	i = atoi("");
	ii = ft_atoi("");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(10);
	else
			TESTFAILED(10);
	
	TESTN(11);
	printf("4+2");
	i = atoi("4+2");
	ii = ft_atoi("4+2");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(11);
	else
			TESTFAILED(11);

	TESTN(12);
	printf("12345678909");
	i = atoi("12345678909");
	ii = ft_atoi("12345678909");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(12);
	else
			TESTFAILED(12);
	
	TESTN(13);
	printf("fourty two");
	i = atoi("fourty two");
	ii = ft_atoi("fourty two");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(13);
	else
			TESTFAILED(13);

	TESTN(14);
	printf("+   42");
	i = atoi("+   42");
	ii = ft_atoi("+   42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(14);
	else
			TESTFAILED(14);
	
	TESTN(15);
	printf("-   42");
	i = atoi("-   42");
	ii = ft_atoi("-   42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(15);
	else
			TESTFAILED(15);
	
	TESTN(16);
	printf("INT_MIN");
	i = atoi("-2147483648");
	ii = ft_atoi("-2147483648");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(16);
	else
			TESTFAILED(16);
	
	TESTN(17);
	printf("INT_MAX");
	i = atoi("2147483647");
	ii = ft_atoi("2147483647");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(17);
	else
			TESTFAILED(17);
	
	TESTN(18);
	printf("way too big 9999999999999999999999999");
	i = atoi("9999999999999999999999999");
	ii = ft_atoi("9999999999999999999999999");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(18);
	else
			TESTFAILED(18);

	TESTN(19);
	printf("way too small -9999999999999999999999999");
	i = atoi("-9999999999999999999999999");
	ii = ft_atoi("-9999999999999999999999999");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(19);
	else
			TESTFAILED(19);
}