/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:54 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/15 11:39:31 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strncmp()
{
TESTF("ft_strncmp");

	TESTN(1);
	printf("\nhello world -> Hello World -> 12\n");
	char *s1 = "hello world!";
	char *s2 = "Hello World";
	int	x = strncmp(s1, s2, 12);
	int y = ft_strncmp(s1, s2, 12);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(1);
	else
		TESTFAILED(1);

	TESTN(2);
	printf("\n<empty> -> <empty> -> 1\n");
	char *s3 = "";
	char *s4 = "";
	x = strncmp(s3, s4, 1);
	y = ft_strncmp(s3, s4, 1);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);
	printf("\n<empty> -> terve -> 10\n");
	char *s5 = "";
	char *s6 = "terve";
	x = strncmp(s5, s6, 10);
	y = ft_strncmp(s5, s6, 10);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(3);
	else
		TESTFAILED(3);
	
	TESTN(4);
	printf("\nterve -> terve -> 0\n");
	char *s7 = "terve";
	char *s8 = "terve";
	x = strncmp(s7, s8, 0);
	y = ft_strncmp(s7, s8, 10);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(4);
	else
		TESTFAILED(4);
}
