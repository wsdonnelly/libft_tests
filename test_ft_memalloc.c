/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:03:35 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:07:29 by wdonnell         ###   ########.fr       */
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
	while (i < 6)
		printf("To be tested function returns %c ", str[i++]);
	printf("\n");
	free (str);
}
