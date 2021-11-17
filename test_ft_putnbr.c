/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:00:39 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 16:59:49 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putnbr()
{
	TESTF("ft_putnbr");

	TESTN(1);
	printf("\nINT MAX:  \n");
	ft_putnbr(INT_MAX);
	printf("\nINT MIN:  \n");
	ft_putnbr(INT_MIN);
	printf("\nOutput 0  \n");
	ft_putnbr(0);
	printf("\nOutput -42  \n");
	ft_putnbr(-42);
}
