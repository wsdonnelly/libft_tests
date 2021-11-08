/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:29:47 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 15:32:35 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strtrim()
{
	TESTF("ft_strtrim");

	char *new;

	TESTN(1);
	printf("\\n    \\n\\t,,,,,,hello_world!,,,,,,,\n");

	new = ft_strtrim("    \n\t,,,,,,hello_world!,,,,,,,");
	printf("ft_strsub\t%s\n", new);
	free (new);
}
