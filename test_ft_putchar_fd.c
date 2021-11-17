/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:23:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 16:42:00 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar_fd()
{
	TESTF("ft_putchar_fd");

	TESTN(1);
	printf("\n98 fd 1\n");
	ft_putchar_fd(98, 1);
	printf("\n");

	TESTN(2);
	printf("\nc fd 1\n");
	ft_putchar_fd('c', 1);
	printf("\n");
}
