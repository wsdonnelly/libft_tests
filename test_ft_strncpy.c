/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:39:20 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/15 13:11:14 by wdonnell         ###   ########.fr       */
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



	TESTN(2);
	char arr[6];
	char arr2[6];
	printf("<empty src>");
	(void)strncpy(arr, "", sizeof(arr));
	(void)ft_strncpy(arr2, "", sizeof(arr2));
	printf("\nOriginal libc function returns %s\n", arr);
	printf("To be tested  function returns %s\n", arr2);
	if (strncmp(arr, arr2, 6) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);
}
