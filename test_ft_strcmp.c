/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:31:19 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 12:36:13 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strcmp(void)
{
	TESTF("ft_strcmp");

	TESTN(1);
	printf("\nhello world -> Hello World\n");
	char *s1 = "hello world!";
	char *s2 = "Hello World";
	int	x = strcmp(s1, s2);
	int y = ft_strcmp(s1, s2);
	printf("REAL strcmp \t%d\n", x);
	printf("ft_strcmp \t%d\n", y);

	if (x == y)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	printf("\n<empty> -> <empty>\n");
	*s1 = "";
	*s2 = "";
	int	x = strcmp(s1, s2);
	int y = ft_strcmp(s1, s2);
	printf("REAL strcmp \t%d\n", x);
	printf("ft_strcmp \t%d\n", y);

	if (x == y)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);
	printf("\n<empty> -> terve\n");
	*s1 = "";
	*s2 = "terve";
	int	x = strcmp(s1, s2);
	int y = ft_strcmp(s1, s2);
	printf("REAL strcmp \t%d\n", x);
	printf("ft_strcmp \t%d\n", y);

	if (x == y)
		TESTOK(3);
	else
		TESTFAILED(3);
}
