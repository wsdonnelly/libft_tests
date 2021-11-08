/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:06:32 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/08 11:14:06 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memcmp()
{
	TESTF("ft_memcmp");

	TESTN(1);

	char s1[20] = "Hello World!";
	char s2[20] = "Hello World!";

	int	libc;
	int ft;

	printf("\nOriginal libc function returns %d\n", (libc = memcmp(s1, s2, 13)));
	printf("To be tested  function returns %d\n", (ft = ft_memcmp(s1, s2, 13)));
	if (libc == ft)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);

	s1[7] = 'X';
	printf("\nOriginal libc function returns %d\n", (libc = memcmp(s1, s2, 13)));
	printf("To be tested  function returns %d\n", (ft = ft_memcmp(s1, s2, 13)));
	if (libc == ft)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);

	s1[7] = 'W';
	s2[7] = 'K';
	printf("\nOriginal libc function returns %d\n", (libc = memcmp(s1, s2, 13)));
	printf("To be tested  function returns %d\n", (ft = ft_memcmp(s1, s2, 13)));
	if (libc == ft)
		TESTOK(3);
	else
		TESTFAILED(3);
}
