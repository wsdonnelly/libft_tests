/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:03:35 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 12:29:46 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memalloc()
{
	TESTF("ft_memalloc");

	size_t i;

	TESTN(1);
	char *str;
	printf("6 bytes");
	str = ft_memalloc(6);
	i = 0;
	while (i < 6)
		if (str[i++] != '\0')
			TESTFAILED(1);
	TESTOK(1);
	free (str);

	TESTN(2);
	char *str1;
	printf("0 bytes");
	str1 = ft_memalloc(0);
	if (str1)
		TESTFAILED(2);
	else 
		TESTOK(2);
	free (str1);
}
