/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:27 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 12:04:17 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putstr_fd()
{
	TESTF("ft_putstr_fd");

	TESTN(1);
	printf("\nterve maailma\n");
	ft_putstr_fd("terve maailma", 1);
	printf("\n<empty>\n");
	ft_putstr_fd("", 1);
	printf("\n123456789\n");
	ft_putstr_fd("123456789", 1);
}
