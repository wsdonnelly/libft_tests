/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtine <jlehtine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:31:40 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 12:57:57 by jlehtine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_bzero()
{
	TESTF("ft_bzero");

	TESTN(1);

	char s1[] = "Foo Bar";
	char s2[] = "Foo Bar";
	bzero(s1, sizeof(s1));
	ft_bzero(s2, sizeof(s2));
	printf("\nOriginal libc function returns %s\n", s1);
	printf("To be tested function returns %s\n", s2);
	if (strcmp(s1, s2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);

	size_t i = 0;
	printf("To be tested function returns:\t");
	while (i < sizeof(s2))
	{
		printf("%d ", s2[i]);
		if (s2[i] != 0)
		{
			TESTFAILED(2);
			return ;
		}
		i++;
	}
	TESTOK(2);
}

