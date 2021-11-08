/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:23:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:47:00 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar_fd()
{
	TESTF("ft_putchar_fd");

	TESTN(1);
	printf("98 fd 1\t");
	ft_putchar_fd(98, 1);
	printf("\n");

	TESTN(2);
	printf("c fd 1\t");
	ft_putchar_fd('c', 1);
	printf("\n");
}
