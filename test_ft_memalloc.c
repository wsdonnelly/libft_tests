/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:03:35 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/09 09:54:25 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memalloc()
{
	TESTF("ft_memalloc");

	TESTN(1);
	int i = 0;
	char *str;
	printf("6 bytes");
	str = ft_memalloc(6);
	printf("\nTo be tested function returns:\t");
	while (i < 6)
		printf("%c ", str[i++]);
	printf("\n");
	free (str);
}
