/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:35:13 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 19:54:52 by parkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putchar()
{
	TESTF("ft_putchar");

	TESTN(1);
	ft_putstr("Original libc function outputs: ");
	putchar('a');
	ft_putstr("Function to  be tested outputs: ");
	ft_putchar('a');

	// printf("Original libc function returns: %d", putchar('a'));
	// printf("\nFunction to  be tested returrns: %d", ft_putchar('a'));
	



}
