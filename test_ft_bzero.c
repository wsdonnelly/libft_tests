/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:31:40 by jlehtine          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/12 10:12:44 by willdonnell      ###   ########.fr       */
=======
/*   Updated: 2021/11/09 11:01:40 by wdonnell         ###   ########.fr       */
>>>>>>> 5657514a568a892a3edf82d18ad4f9900fd9374a
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_bzero()
{
	TESTF("ft_bzero");

	TESTN(1);
	printf("Foo Bar");
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
	
	TESTN(3);
	printf("<empty string>");
	char s3[] = "";
	char s4[] = "";
	bzero(s1, sizeof(s1));
	ft_bzero(s2, sizeof(s2));
	printf("\nOriginal libc function returns %s\n", s3);
	printf("To be tested function returns %s\n", s4);
	if (strcmp(s3, s4) == 0)
		TESTOK(3);
	else
		TESTFAILED(3);

	TESTN(4);
	printf("int arr[] = {1, 2, 3, 4, 5};\n");
	int n1[] = {1, 2, 3, 4, 5};
	ft_bzero(n1, sizeof(n1));
	printf("To be tested function returns:\t");
	i = 0;
	while (i < sizeof(n1) / sizeof(int))
	{
		printf("%d ", n1[i]);
		if (n1[i] != 0)
		{
			TESTFAILED(4);
			return ;
		}
		i++;
	}
	TESTOK(4);
}