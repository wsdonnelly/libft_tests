/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:57:16 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/08 11:12:15 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memchr()
{
	TESTF("ft_memchr");

	TESTN(1);

	char s1[20] = "Hello World!";
	char *libc;
	char *ft;
	printf("\nOriginal libc function returns %s\n", (libc = (char*)memchr(s1, 'a', sizeof(s1))));
	printf("To be tested  function returns %s\n", (ft = (char*)ft_memchr(s1, 'a', sizeof(s1))));
	if (ft == libc)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);

	printf("\nOriginal libc function returns %s\n", (libc = (char*)memchr(s1, 'o', sizeof(s1))));
	printf("To be tested  function returns %s\n", (ft = (char*)ft_memchr(s1, 'o', sizeof(s1))));
	if (ft == libc)
		TESTOK(2);
	else
		TESTFAILED(2);
}
