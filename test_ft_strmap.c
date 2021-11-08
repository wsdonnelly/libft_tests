/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:50:46 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:52:40 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

char	test(char c)
{
	c = (c + 1) % 26;
	return (c);
}

void test_ft_strmap()
{
	const char str[] = "Hello World!";
	char *new;

	printf("orig str\t%s\n", str);
	new = ft_strmap(str, &test);
	printf("mapped str\t%s\n", new);
	free (new);
	return (0);	
}