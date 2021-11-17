/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:35:13 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 16:40:36 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar()
{
	TESTF("ft_putchar");

	TESTN(1);
	printf("\n<empty> -> \n");
	ft_putchar('\0');
	//printf("\n");

	TESTN(2);
	printf("\nx -> \n");
	ft_putchar('x');
	printf("\n");
}
