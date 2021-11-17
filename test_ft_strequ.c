/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:02:52 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 11:53:17 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	test_ft_strequ()
{
	TESTF("ft_strnequ");

	TESTN(1);
	printf("\nhello -> hello\n");
	char *s1 = "hello";
	char *s2 = "hell0";
	printf("ft_strequ\t%d\n", ft_strequ(s1, s2));

	TESTN(2);
	char *s3 = "";
	char *s4 = "hell0";
	printf("\n<empty> -> hell0\n");
	printf("ft_strequ\t%d\n", ft_strequ(s3, s4));

	TESTN(3);
	char *s5 = "hello";
	char *s6 = "";
	printf("\nhello -> <empty>\n");
	printf("ft_strequ \t%d\n", ft_strequ(s5, s6));

	TESTN(4);
	char *s7 = "";
	char *s8 = "";
	printf("\n<empty> -> <empty>\n");
	printf("ft_strequ \t%d\n", ft_strequ(s7, s8));
}
