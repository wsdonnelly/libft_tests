/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:37:47 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/12 11:33:01 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strnstr()
{
	TESTF("ft_strnstr");

	TESTN(1);
	char *ptr1 = strnstr("Foo Bar Baz", "Bar", 4);
	char *ptr2 = ft_strnstr("Foo Bar Baz", "Bar", 4);
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ptr1 == ptr2)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	ptr1 = strnstr("Foo Bar Baz", "Bar", 7);
	ptr2 = ft_strnstr("Foo Bar Baz", "Bar", 7);
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (strcmp(ptr1, ptr2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);
	/*
	TESTN(3);
	ptr1 = strnstr("Foo Bar Baz", "", 3);
	ptr2 = ft_strnstr("Foo Bar Baz", "", 3);
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (strcmp(ptr1, ptr2) == 0)
		TESTOK(3);
	else
		TESTFAILED(3);
	*/
}