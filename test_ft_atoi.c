/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:42 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/05 15:52:44 by wdonnell         ###   ########.fr       */
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
			TESTOK(7);
	else
			TESTFAILED(7);

	TESTN(10);
	printf("");
	i = atoi("");
	ii = ft_atoi("");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(7);
	else
			TESTFAILED(7);
	
	TESTN(11);
	printf("4+2");
	i = atoi("4+2");
	ii = ft_atoi("4+2");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(7);
	else
			TESTFAILED(7);

	TESTN(12);
	printf("12345678909");
	i = atoi("12345678909");
	ii = ft_atoi("12345678909");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(7);
	else
			TESTFAILED(7);
	
	TESTN(13);
	printf("fourty two");
	i = atoi("fourty two");
	ii = ft_atoi("fourty two");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(7);
	else
			TESTFAILED(7);
}