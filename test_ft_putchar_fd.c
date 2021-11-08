/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:23:39 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:29:07 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar_fd()
{
	TESTF("ft_putchar_fd");

	TESTN(1);
	printf("128 fd 1\t");
	ft_putchar_fd(128, 1);
	printf("\n");

	TESTN(2);
	printf("125 fd 1\t");
	ft_putchar_fd(125, 1);
	printf("\n");
}
