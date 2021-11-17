/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:29:47 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/17 14:30:57 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_ft_strtrim()
{
	TESTF("ft_strtrim");

	

	TESTN(1);
	char *new;
	printf("\\n    \\n\\t   hello   world!\\n");
	new = ft_strtrim("\n    \n\t   hello   world!\n");
	printf("\nft_strtrim\t%s\n", new);
	free (new);

	TESTN(2);
	char *new2;
	printf("<empty>\n");
	new2 = ft_strtrim("");
	printf("\nft_strtrim\t%s\n", new2);
	free (new2);
	
	TESTN(3);
	char *new3;
	printf("NULL\n");
	new3 = ft_strtrim((void*)0);
	printf("\nft_strtrim\t%s\n", new3);
	free (new3);

	TESTN(4);
	char *new4;
	printf("5 spaces\n");
	new4 = ft_strtrim("     ");
	printf("\nft_strtrim\t%s\n", new4);
	free (new4);
}
