/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:35 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/18 11:25:57 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strcpy()
{
	TESTF("ft_strcpy");

	TESTN(1);
	char arr[100];
	char arr2[100];
	strcpy(arr, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nOriginal libc function returns: %s\n", arr);
	ft_strcpy(arr2, "+~{{~}}~{~{@@_!~}~{~_!{~}");
	printf("\nFunction to  be tested returns: %s\n", arr2);
	if (strcmp(arr, arr2) == 0)
			TESTOK(1);
	else
			TESTFAILED(1);

	TESTN(2);
	strcpy(arr, "Bambooza Foolal");
	printf("\nOriginal libc function returns: %s\n", arr);
	ft_strcpy(arr2, "Bambooza Foolal");
	printf("\nFunction to  be tested returns: %s\n", arr2);
	if (strcmp(arr, arr2) == 0)
			TESTOK(2);
	else
			TESTFAILED(2);


	
	
	TESTN(3);
	printf("\nEmpty string\n");
	strcpy(arr, "");
	printf("\nOriginal libc function returns: %s\n", arr);
	ft_strcpy(arr2, "");
	printf("\nFunction to  be tested returns: %s\n", arr2);
	if (strcmp(arr, arr2) == 0)
			TESTOK(3);
	else
			TESTFAILED(3);
	

}
