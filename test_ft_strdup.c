/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtine <jlehtine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:16:44 by jlehtine          #+#    #+#             */
/*   Updated: 2021/11/03 16:26:57 by jlehtine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strdup()
{
	TESTF("ft_strdup");

	TESTN(1);

	char s1[20] = "Hello World!";
	char *libc;
	char *ft;

	libc = strdup(s1);
	ft = ft_strdup(s1);
	printf("\nOriginal libc function returns %s\n", libc);
	printf("To be tested  function returns %s\n", ft);
	if (strcmp(libc, ft) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	printf("Testing addresses...\n");
	if (libc != s1 && ft != s1)
		TESTOK(2);
	else
		TESTFAILED(2);
}
