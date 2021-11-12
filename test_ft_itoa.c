/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 12:17:51 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_itoa()
{
	TESTF("ft_itoa");

	TESTN(1);
	char *str;
	printf("123456789");
	str = ft_itoa(123456789);
	printf("\nTo be tested function returns %s\n", str);
	free (str);

	TESTN(2);
	printf("INT_MIN");
	char *str1 = ft_itoa(INT_MIN);
	printf("\nTo be tested function returns %s\n", str1);
	free (str1);

	TESTN(3);
	printf("INT_MAX");
	char *str2 = ft_itoa(INT_MAX);
	printf("\nTo be tested function returns %s\n", str2);
	free (str2);
	
}
