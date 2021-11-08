/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:16:04 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:59:29 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_memdel()
{
	TESTF("ft_memdel");

	TESTN(1);

	char *str = "Terve Maailma";
	void *vs;
	vs = (void*)str;
	printf("\n before\t%s\n", str);
	ft_memdel(&vs);
	printf("after\t%s\n", str);
}
