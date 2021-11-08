/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:24:14 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/08 15:24:33 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strstr()
{
		TESTF("ft_strstr");

	TESTN(1);
	char *ptr1 = strstr("Foo Bar Baz", "Bar");
	char *ptr2 = ft_strstr("Foo Bar Baz", "Bar");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ft_strcmp(ptr1, ptr2) == 0)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	ptr1 = strstr("Foo Bar Baz", "");
	ptr2 = ft_strstr("Foo Bar Baz", "");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ft_strcmp(ptr1, ptr2) == 0)
		TESTOK(2);
	else
		TESTFAILED(2);

	TESTN(3);
	ptr1 = strstr("Foo Bar Baz", "Bao");
	ptr2 = ft_strstr("Foo Bar Baz", "Bao");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ptr1 == ptr2)
		TESTOK(3);
	else
		TESTFAILED(3);
}
