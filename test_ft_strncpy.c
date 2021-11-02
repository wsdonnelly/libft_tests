/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:39:20 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 17:58:53 by parkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strncpy()
{
	TESTF("ft_strncpy");

		TESTN(1);
		char chararray[6];
		char chararray2[6];
		(void)strncpy(chararray, "abc", sizeof(chararray));
		(void)ft_strncpy(chararray2, "abc", sizeof(chararray2));
		printf("\nOriginal libc function returns %s\n", chararray);
		printf("To be tested  function returns %s\n", chararray2);
		if (strcmp(chararray, chararray2) == 0)
			TESTOK(1);
	else
			TESTFAILED(1);

		bzero(chararray, sizeof(chararray));
		bzero(chararray2, sizeof(chararray2));

		TESTN(2);
		
		(void)strncpy(chararray, "abcdefgh", sizeof(chararray));
		(void)ft_strncpy(chararray2, "abcdefgh", sizeof(chararray2));
		printf("\nOriginal libc function returns %s\n", chararray);
		printf("To be tested  function returns %s\n", chararray2);
		if (strncmp(chararray, chararray2, 6) == 0)
			TESTOK(2);
	else
			TESTFAILED(2);
}