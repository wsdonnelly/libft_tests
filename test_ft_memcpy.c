/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtine <jlehtine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:14:56 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 13:23:58 by jlehtine         ###   ########.fr       */
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

	printf("\nOriginal libc function returns %s\n", memcpy(s1, s2, 3));
	printf("To be tested  function returns %s\n", ft_memcpy(s3, s2, 3));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);

	printf("\nOriginal libc function returns %s\n", memcpy(s1 + 2, s1, 3));
	printf("To be tested  function returns %s\n", ft_memcpy(s3 + 2, s3, 3));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
