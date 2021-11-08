/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:14:56 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/08 11:15:20 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memcpy()
{
	TESTF("ft_memcpy");

	TESTN(1);

	char s1[] = "Foo Bar";
	char *s2 = "Bar";
	char s3[] = "Foo Bar";

	printf("\nOriginal libc function returns %s\n", (char*)memcpy(s1, s2, 3));
	printf("To be tested  function returns %s\n", (char*)ft_memcpy(s3, s2, 3));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);

	printf("\nOriginal libc function returns %s\n", (char*)memcpy(s1 + 2, s1, 3));
	printf("To be tested  function returns %s\n", (char*)ft_memcpy(s3 + 2, s3, 3));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
