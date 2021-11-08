/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:03 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:45:48 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putnbr_fd()
{
	TESTF("ft_putnbr_fd");

	TESTN(1);
	printf("\nINT MAX:  \n");
	ft_putnbr_fd(INT_MAX, 1);
	printf("\nINT MIN:  \n");
	ft_putnbr_fd(INT_MIN, 1);
	printf("\nOutput 0  \n");
	ft_putnbr_fd(0, 1);
	printf("\nOutput -42 \n");
	ft_putnbr_fd(-42, 1);
}