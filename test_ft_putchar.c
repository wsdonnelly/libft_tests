/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:35:13 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/08 11:29:04 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar()
{
	TESTF("ft_putchar");

	TESTN(1);
	printf("128\t");
	ft_putchar(128);
	printf("\n");

	TESTN(2);
	printf("125\t");
	ft_putchar(125);
	printf("\n");
}
