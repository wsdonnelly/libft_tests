/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:10 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 11:30:55 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strnew()
{
	int i = 0;

	TESTF("ft_strnew");

	TESTN(1);
	char *str = ft_strnew(4);
	while (i < 4)
		if (str[i++] != '\0')
			TESTFAILED(1);
	TESTOK(1);
	free (str);
}
