/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:00 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 15:29:21 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strsub()
{
	TESTF("ft_strsub");

	char *sub;

	TESTN(1);
	printf("\nhello world -> 0 -> 8\n");

	sub = ft_strsub("hello world", 0, 8);
	printf("ft_strsub\t%s\n", sub);
	free (sub);	
}
