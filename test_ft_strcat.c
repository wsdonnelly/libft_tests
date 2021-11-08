/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:16 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/08 12:11:05 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strcat()
{
	TESTF("ft_strcat");

	TESTN(1);

	char s1[100] = "Foo Bar";
	char *s2 = "Bar Foo";
	char s3[100] = "Foo Bar";

	printf("\nOriginal libc function returns %s\n", strcat(s1, s2));
	printf("To be tested  function returns %s\n", ft_strcat(s3, s2));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
	
	TESTN(2);

	char *src1 = " world";
	char dest1[50] = "hello !";
	char *src2 = " world";
	char dest2[50] = "hello !";

	printf("\nOriginal libc function returns %s\n", strcat(src1, dest1));
	printf("To be tested function returns %s\n", ft_strcat(src2, dest2));
	if (strcmp(dest1, dest2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
