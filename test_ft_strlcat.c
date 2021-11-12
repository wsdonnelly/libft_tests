/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willdonnelly <willdonnelly@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:48:05 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/12 12:00:20 by willdonnell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strlcat()
{
	TESTF("ft_strlcat");
	TESTN(1);
	char *src = " world";
	//char *src2 = " !";
	char dest[14] = "hello";

	printf("src is %s\n", src);
	printf("dest is %s\n", dest);
	ft_strlcat(dest, src, 15);
	
	printf("dest after ft_strlcat %s\n", dest);
	//ft_strlcat(dest, src2, 15);
	//printf("src is now %s\n", src);
	//printf("dest is now %s\n", dest);
}
//is size the sizeof(dst)? or the number of bytes from src to cpy?
