/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:30:14 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:33:29 by wdonnell         ###   ########.fr       */
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
}
