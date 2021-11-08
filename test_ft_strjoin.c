/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:45:06 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:41 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strjoin()
{
	TESTF("ft_strjoin");
	TESTN(1);
	const char *s1 = "hello";
	const char *s2 = " world! ja terve maailma";
	char *new;
	printf("s1\t%s\n", s1);
	printf("s2\t%s\n", s2);
	new = ft_strjoin(s1, s2);
	printf("new\t%s\n", new);
	free (new);
}
