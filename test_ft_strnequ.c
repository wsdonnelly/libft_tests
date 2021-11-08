/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnequ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:12:28 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:12:34 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strnequ()
{
	TESTF("ft_strnequ");

	TESTN(1);
	printf("\nhello -> hell0 -> 3 \n");
	char *s1 = "hello";
	char *s2 = "hell0";
	printf("ft_strcmp \t%d\n", ft_strnequ(s1, s2, 3));

	TESTN(2);
	printf("\nhello -> hell0 -> 4 \n");
	printf("ft_strcmp \t%d\n", ft_strnequ(s1, s2, 4));
	TESTN(3);
	printf("\nhello -> hell0 -> 0 \n");
	printf("ft_strcmp \t%d\n", ft_strnequ(s1, s2, 0));
}
