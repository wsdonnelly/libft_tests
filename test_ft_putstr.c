/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:24 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 12:09:49 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putstr()
{
	TESTF("ft_putstr");

	TESTN(1);
	printf("\nterve maailma\n");
	ft_putstr("terve maailma");
	TESTN(2);
	printf("\n<empty>\n");
	ft_putstr("");
	TESTN(3);
	printf("\n123456789\n");
	ft_putstr("123456789");
}
