/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:01 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:54:08 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

char	test(unsigned int n, char c)
{

	c = ((c + n) % 26) + 'a';
	return (c);
}

void test_ft_strmapi()
{
	const char str[] = "Hello World!";
	char *new;

	printf("orig str\t%s\n", str);
	new = ft_strmapi(str, &test);
	printf("mapped str\t%s\n", new);
	free (new);
	return (0);
}