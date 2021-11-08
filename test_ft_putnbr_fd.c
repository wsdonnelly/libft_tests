/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:03 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:58:22 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putnbr()
{
	TESTF("ft_putnbr");

	TESTN(1);
	printf("\nINT MAX:  \n");
	ft_putnbr(INT_MAX, 1);
	printf("\nINT MIN:  \n");
	ft_putnbr(INT_MIN, 1);
	printf("\nOutput 0  \n");
	ft_putnbr(0, 1);
	printf("\nOutput -42  \n");
	ft_putnbr(-42);
}