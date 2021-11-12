/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:29:47 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 12:37:10 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strtrim()
{
	TESTF("ft_strtrim");

	

	TESTN(1);
	char *new;
	printf("\\n    \\n\\t,,,,,,hello_world!,,,,,,,\n");
	new = ft_strtrim("    \n\t,,,,,,hello_world!,,,,,,,");
	printf("ft_strtrim\t%s\n", new);
	free (new);

	TESTN(2);
	char *new2;
	printf("<empty>\n");
	new2 = ft_strtrim("");
	printf("ft_strtrim\t%s\n", new2);
	free (new2);
}
