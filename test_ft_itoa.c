/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/09 09:52:14 by willdonnell      ###   ########.fr       */
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
}
