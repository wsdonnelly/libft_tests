/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtine <jlehtine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:31:21 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 15:56:14 by jlehtine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memmove()
{
	TESTF("ft_memmove");

	TESTN(1);

	char s1[20] = "Hello World!";
	char s3[20] = "Hello World!";

	printf("\nOriginal libc function returns %s\n", memmove(s1, s1 + 4, 5));
	printf("To be tested  function returns %s\n", ft_memmove(s3, s3 + 4, 5));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);

	printf("\nOriginal libc function returns %s\n", memmove(s1 + 3, s1, 5));
	printf("To be tested  function returns %s\n", ft_memmove(s3 + 3, s3, 5));
	if (strcmp(s1, s3) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);

	printf("\nOriginal libc function returns %s\n", memmove(s1 + 4, s1, 8));
	printf("To be tested  function returns %s\n", ft_memmove(s3 + 4, s3, 8));
	if (strcmp(s1, s3) == 0)
		TESTOK(3);
	else
		TESTFAILED(3);
}
