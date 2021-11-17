/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:16 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 17:17:26 by willdonnell      ###   ########.fr       */
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

	printf("\nOriginal libc function returns %s\n", strcat(dest1, src1));
	printf("To be tested function returns %s\n", ft_strcat(dest2, src2));
	if (strcmp(dest1, dest2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	
	char *src3 = "";
	char dest3[50] = "";
	char *src4 = "";
	char dest4[50] = "";
	printf("all empty\n");
	printf("\nOriginal libc function returns %s\n", strcat(dest3, src3));
	printf("To be tested function returns %s\n", ft_strcat(dest4, src4));
	if (strcmp(dest3, dest4) == 0)
		TESTOK(3);
	else
		TESTFAILED(3);

}
