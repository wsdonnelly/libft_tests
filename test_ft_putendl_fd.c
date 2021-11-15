/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:30:50 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/15 12:38:25 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putendl_fd()
{
	TESTF("ft_putendl_fd");

	TESTN(1);
	printf("normal string\n");
	char *str = "terve maailma";
	printf("before\t%s\n", str);
	ft_putendl_fd(str, 1);
	printf("after\t%s\n", str);

	TESTN(2);
	printf("empty string\n");
	char *str1 = "";
	printf("before\t%s\n", str1);
	ft_putendl_fd(str1, 1);
	printf("after\t%s\n", str1);

	TESTN(3);
	printf("normal string, 42 as fd\n");
	char *str2 = "Terve";
	printf("before\t%s\n", str2);
	ft_putendl_fd(str2, 42);
	printf("after\t%s\n", str2);
}
