/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:16 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 17:59:12 by parkharo         ###   ########.fr       */
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
}
