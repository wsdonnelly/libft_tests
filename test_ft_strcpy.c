/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:35 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 11:56:54 by wdonnell         ###   ########.fr       */
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

	/*
	TESTN(2);
	char arr[100];
	char arr2[100];
	strcpy(arr, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nOriginal libc function returns %s\n", arr);
	ft_strcpy(arr2, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nFunction to  be tested returns %s\n", arr2);
	if (strcmp(arr, arr2) == 0)
			TESTOK(2);
	else
			TESTFAILED(2);

	*/
	TESTN(3);
	char arr3[100];
	char arr4[100];
	printf("\nEmpty string\n");
	strcpy(arr3, "");
	printf("\nOriginal libc function returns %s\n", arr3);
	ft_strcpy(arr4, "");
	printf("\nFunction to  be tested returns %s\n", arr4);
	if (strcmp(arr3, arr4) == 0)
			TESTOK(3);
	else
			TESTFAILED(3);
	/*
	TESTN(4);
	char toosmall[5];
	///char toosmall2[5];
	printf("\ndest too small\n");
	strcpy(toosmall, "hello world");
	printf("\nOriginal libc function returns %s\n", toosmall);
	//ft_strcpy(toosmall2, "hello world");
	//printf("\nFunction to  be tested returns %s\n", toosmall2);
	//if (strcmp(toosmall, toosmall2) == 0)
		//	TESTOK(4);
	//else
			//TESTFAILED(4);
	*/
	
}
