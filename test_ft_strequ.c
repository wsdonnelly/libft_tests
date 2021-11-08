/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:02:52 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:13:40 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strequ()
{
	TESTF("ft_strnequ");

	TESTN(1);
	printf("\nhello -> hell0\n");
	char *s1 = "hello";
	char *s2 = "hell0";
	printf("ft_strcmp \t%d\n", ft_strequ(s1, s2));

	TESTN(2);
	printf("\nhello -> hell0\n");
	printf("ft_strcmp \t%d\n", ft_strequ(s1, s2));
	TESTN(3);
	printf("\nhello -> hell0\n");
	printf("ft_strcmp \t%d\n", ft_strequ(s1, s2));
}
