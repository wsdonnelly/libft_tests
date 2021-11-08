/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:54 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 14:59:15 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	*s1 = "";
	*s2 = "";
	int	x = strncmp(s1, s2, 1);
	int y = ft_strncmp(s1, s2, 1);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(2);
	else
		TESTFAILED(2);
	
	TESTN(3);
	printf("\n<empty> -> terve -> 10\n");
	*s1 = "";
	*s2 = "terve";
	int	x = strncmp(s1, s2, 10);
	int y = ft_strncmp(s1, s2, 10);
	printf("REAL strncmp \t%d\n", x);
	printf("ft_strncmp \t%d\n", y);

	if (x == y)
		TESTOK(3);
	else
		TESTFAILED(3);
}
