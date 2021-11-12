/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:22:43 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 10:47:28 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strclr()
{
	TESTF("ft_strclr");

	TESTN(1);
	size_t i = 0;
	char s1[] = "Terve";
	printf("\nOriginal\t%s\n", s1);
	ft_strclr(s1);
	printf("after\t%s\n", s1);

	while (i < sizeof(s1))
	{
		printf("%c ", s1[i]);
		if (s1[i] != '\0')
		{
			TESTFAILED(1);
			break ;
		}
		i++;
	}
	TESTOK(1);
}