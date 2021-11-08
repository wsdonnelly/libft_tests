/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:24 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 12:03:22 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putstr()
{
	TESTF("ft_putstr");

	TESTN(1);
	printf("\nterve maailma\n");
	ft_putstr("terve maailma");
	printf("\n<empty>\n");
	ft_putstr("");
	printf("\n123456789\n");
	ft_putstr("123456789");
}
