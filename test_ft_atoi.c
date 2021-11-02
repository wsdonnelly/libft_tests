/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:42 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 21:26:34 by parkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_atoi()
{
	TESTF("ft_atoi");

	TESTN(1);
	int i = atoi("-42");
	int ii = ft_atoi("-42");
	printf("\nOriginal libc function returns %d\n", i);
	printf("\nFunction to  be tested returns %d\n", ii);
	if (i == ii)
			TESTOK(1);
	else
			TESTFAILED(1);
}