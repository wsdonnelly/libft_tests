/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtine <jlehtine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:59 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 14:08:09 by jlehtine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memccpy()
{
	TESTF("ft_memccpy");

	TESTN(1);

	char s1[20] = "Hello World!";
	char s2[] = "Foo Bar String";
	char s3[20] = "Hello World!";

	printf("%zu", sizeof(s2));
	printf("\nOriginal libc function returns %s\n", memccpy(s1, s2, 'a', sizeof(s2)));
	printf("To be tested  function returns %s\n", ft_memccpy(s3, s2, 'a', sizeof(s2)));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	printf("%zu\n", sizeof(s1));
	bzero(s1, sizeof(s1));
	bzero(s3, sizeof(s3));
	TESTN(2);

	printf("\nOriginal libc function returns %p\n", memccpy(s1, s2, 'X', sizeof(s2)));
	printf("To be tested  function returns %p\n", ft_memccpy(s3, s2, 'X', sizeof(s2)));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
