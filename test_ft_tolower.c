/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:33:22 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:43:23 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_tolower()
{
	TESTF("ft_tolower");

	char c = 'H';
	int r1, r2;

	TESTN(1);
	printf("\nH\n");
	r1 = tolower(c);
	r2 = ft_tolower(c);
	if (r1 == r2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	printf("\n<empty>\n");
	c = 'h';
	r1 = tolower(c);
	r2 = ft_tolower(c);
	if (r1 == r2)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	printf("\n128\n");
	c = 1;
	r1 = tolower(c);
	r2 = ft_tolower(c);
	if (r1 == r2)
		TESTOK(2);
	else
		TESTFAILED(2);
}
