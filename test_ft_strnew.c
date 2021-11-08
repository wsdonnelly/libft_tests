/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:10 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 15:04:23 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strnew()
{
	int i = 0;

	char *str = ft_strnew(4);
	while (i < 4)
		printf("%c ", str[i]);
	free (str);
}
