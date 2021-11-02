/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:35 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 21:03:25 by parkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strcpy()
{
	TESTF("ft_strcpy");

	TESTN(1);
	char chararray[100];
	char chararray2[100];
	strcpy(chararray, "Bambooza Foolal");
	printf("\nOriginal libc function returns %s\n", chararray);
	ft_strcpy(chararray2, "Bambooza Foolal");
	printf("\nFunction to  be tested returns %s\n", chararray2);
	if (strcmp(chararray, chararray2) == 0)
			TESTOK(1);
	else
			TESTFAILED(1);

	bzero(chararray, sizeof(chararray));
	bzero(chararray2, sizeof(chararray2));

	TESTN(2);
	strcpy(chararray, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nOriginal libc function returns %s\n", chararray);
	ft_strcpy(chararray2, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nFunction to  be tested returns %s\n", chararray2);
	if (strcmp(chararray, chararray2) == 0)
			TESTOK(2);
	else
			TESTFAILED(2);

	bzero(chararray, sizeof(chararray));
	bzero(chararray2, sizeof(chararray2));

	TESTN(3);
	printf("\nEmpty string\n");
	strcpy(chararray, "");
	printf("\nOriginal libc function returns %s\n", chararray);
	ft_strcpy(chararray2, "");
	printf("\nFunction to  be tested returns %s\n", chararray2);
	if (strcmp(chararray, chararray2) == 0)
			TESTOK(3);
	else
			TESTFAILED(3);
}