/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:48:05 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 10:19:27 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strlcat()
{
	TESTF("ft_strlcat");
	TESTN(1);
	
	char *src = " world";
	char dest[14] = "hello";

	printf("src is %s\n", src);
	printf("dest is %s\n", dest);
	ft_strlcat(dest, src, 15);
	
	printf("dest after ft_strlcat %s\n", dest);
/*
	TESTN(2);
	printf("dest is empty and size is 15\n");
	char *src1 = " world";
	char *empty_dest= "";

	printf("src is %s\n", src1);
	printf("dest is %s\n", empty_dest);
	ft_strlcat(empty_dest, src1, 15);
	
	printf("dest after ft_strlcat %s\n", empty_dest);

	TESTN(3);
	printf("size is 0\n");
	char *src2 = " world";
	char dest2[20]= "hello";

	printf("src is %s\n", src2);
	printf("dest is %s\n", dest2);
	ft_strlcat(dest2, src1, 0);
	
	printf("dest after ft_strlcat %s\n", dest2);

	TESTN(4);
	printf("src is empty\n");
	char *src3 = "";
	char dest3[20]= "hello";

	printf("src is %s\n", src3);
	printf("dest is %s\n", dest3);
	ft_strlcat(dest3, src3, 15);
	
	printf("dest after ft_strlcat %s\n", dest3);

	TESTN(5);
	printf("src and dest are empty and size is 42\n");
	char *src4 = "";
	char *dest4 = "";

	printf("src is %s\n", src4);
	printf("dest is %s\n", dest4);
	ft_strlcat(dest4, src4, 42);
	
	printf("dest after ft_strlcat %s\n", dest4);
*/
}
//is size the sizeof(dst)? or the number of bytes from src to cpy?
