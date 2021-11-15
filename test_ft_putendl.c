/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:30:14 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/15 12:38:47 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putendl()
{
	TESTF("ft_putendl");

	TESTN(1);
	char *str = "terve maailma";
	printf("before\t%s\n", str);
	ft_putendl(str);
	printf("after\t%s\n", str);

	TESTN(2);
	printf("empty string\n");
	char *str1 = "";
	printf("before\t%s\n", str1);
	ft_putendl(str1);
	printf("after\t%s\n", str1);
}
