/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/15 12:23:02 by wdonnell         ###   ########.fr       */
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
	
	TESTN(4);
	printf("0");
	char *str3 = ft_itoa(0);
	printf("\nTo be tested function returns %s\n", str3);
	free (str3);
}
