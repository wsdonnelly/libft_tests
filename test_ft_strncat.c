/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:29:30 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/08 14:54:59 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strncat()
{
	TESTF("ft_strncat");

	TESTN(1);

	char s1[100] = "Foo Bar";
	char *s2 = "Bar Foo";
	char s3[100] = "Foo Bar";

	printf("\nOriginal libc function returns %s\n", strncat(s1, s2, 3));
	printf("To be tested  function returns %s\n", ft_strncat(s3, s2, 3));
	if (strcmp(s1, s3) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);
}
