/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:35:13 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/17 12:03:25 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar()
{
	TESTF("ft_putchar");

	TESTN(1);
	printf("\n<empty> -> \n");
	ft_putchar('\0');
	printf("\n");

	TESTN(2);
	printf("x -> ");
	ft_putchar('x');
	printf("\n");
}
