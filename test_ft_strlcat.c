/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:48:05 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 16:39:04 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strlcat()
{
	char *src = " world";
	char *src2 = " !";
	char dest[14] = "hello";

	printf("src is %s\n", src);
	printf("dest is %s\n", dest);
	ft_strlcat(dest, src, 15);
	
	printf("dest is now %s\n", dest);
	ft_strlcat(dest, src2, 15);
	printf("src is now %s\n", src);
	printf("dest is now %s\n", dest);
}
//is size the sizeof(dst)? or the number of bytes from src to cpy?