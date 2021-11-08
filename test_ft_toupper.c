/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:05 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 15:42:15 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_toupper()
{
	TESTF("ft_toupper");

	char c = 'h';
	int r1, r2;

	TESTN(1);
	printf("\nh\n");
	r1 = toupper(c);
	r2 = ft_toupper(c);
	if (r1 == r2)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);
	printf("\n<empty>\n");
	c = '';
	r1 = toupper(c);
	r2 = ft_toupper(c);
	if (r1 == r2)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	printf("\n128\n");
	c = 128;
	r1 = toupper(c);
	r2 = ft_toupper(c);
	if (r1 == r2)
		TESTOK(2);
	else
		TESTFAILED(2);
}
