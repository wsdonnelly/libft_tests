/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkharo <parkharo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:24:14 by parkharo          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:34 by parkharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *hayst, char *ndl);
int		ft_strcmp(char *s1, char *s2);

int	main()
{

	printf("\n##############################\n");

	
	printf("\nTesting ft_strstr function...\n");

	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nTest # 1\n");
	char *ptr1 = strstr("Foo Bar Baz", "Bar");
	char *ptr2 = ft_strstr("Foo Bar Baz", "Bar");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ft_strcmp(ptr1, ptr2) == 0)
		printf("\nTEST 1 OK!\n");
	else
	{
		printf("\nTEST 1 FAILED!\n");
		return (1);
	}

	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nTest # 2\n");
	ptr1 = strstr("Foo Bar Baz", "");
	ptr2 = ft_strstr("Foo Bar Baz", "");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ft_strcmp(ptr1, ptr2) == 0)
		printf("\nTEST 2 OK!\n");
	else
	{
		printf("\nTEST 2 FAILED!\n");
		return (1);
	}

	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nTest # 3\n");
	ptr1 = strstr("Foo Bar Baz", "Bao");
	ptr2 = ft_strstr("Foo Bar Baz", "Bao");
	printf("\nOriginal libc function returns %s\n", ptr1);
	printf("To be tested  function returns %s\n", ptr2);
	if (ptr1 == ptr2)
		printf("\nTEST 3 OK!\n");
	else
	{
		printf("\nTEST 3 FAILED!\n");
		return (1);
	}

		printf("\n##############################\n");
return (0);
}

