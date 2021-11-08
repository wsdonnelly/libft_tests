/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:46:48 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:03:27 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_itoa()
{
	TESTF("ft_itoa");

	TESTN(1);
	char *str;
	printf("123456789");
	str = ft_itoa(123456789);
	printf("To be tested function returns %s\n", str);
	free (str);
}
