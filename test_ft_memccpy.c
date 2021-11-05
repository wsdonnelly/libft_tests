/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:59 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 16:56:15 by parkharo         ###   ########.fr       */
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
	char *ptr1 = memccpy(s1, s2, 'a', sizeof(s2));
	char	*ptr2 = ft_memccpy(s3, s2, 'a', sizeof(s2));

	printf("Value of s1 now: %s\n", s1);
	printf("Value of s3 now: %s", s3);
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (strcmp(ptr1, ptr2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);

	bzero(s1, sizeof(s1));
	bzero(s3, sizeof(s3));
	TESTN(3);

	printf("\nOriginal libc function returns %p\n", memccpy(s1, s2, 'X', sizeof(s2)));
	printf("To be tested  function returns %p\n", ft_memccpy(s3, s2, 'X', sizeof(s2)));
	if (strcmp(s1, s3) == 0)
		TESTOK(3);
	else
		TESTFAILED(3);
}
