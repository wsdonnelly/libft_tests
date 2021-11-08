/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:30:50 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 11:34:45 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_putendl_fd()
{
	TESTF("ft_putendl_fd");

	TESTN(1);
	char *str = "terve maailma";
	printf("before\t%s\n", str);
	ft_putendl_fd(str, 1);
	printf("after\t%s\n", str);
}
