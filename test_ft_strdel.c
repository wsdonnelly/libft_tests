/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:57:07 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:16 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strdel()
{
	TESTF("ft_strdel");

	TESTN(1);

	char *str = "Terve Maailma";
	printf("\n before\t%s\n", str);
	ft_strdel(&str);
	printf("after\t%s\n", str);
}
