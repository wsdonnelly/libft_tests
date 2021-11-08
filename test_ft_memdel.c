/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:16:04 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:00:55 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memdel()
{
	TESTF("ft_memdel");

	TESTN(1);

	char str[] = "Terve Maailma";
	printf("\n before\t%s\n", str);
	ft_memdel(&str);
	printf("after\t%s\n", str);
}
