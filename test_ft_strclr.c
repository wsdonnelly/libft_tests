/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:22:43 by wdonnell          #+#    #+#             */
/*   Updated: 2021/11/08 12:31:00 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_ft_strclr()
{
	TESTF("ft_strclr");

	TESTN(1);
	int i = 0;
	char s1[] = "Terve";
	printf("\nOriginal\t%s\n", s1);
	ft_strclr(s1);
	printf("after\t%s\n", s1);

	while (i < sizeof(s1))
	{
		printf("%c ", s1[i]);
		if (s1[i] != '\0')
		{
			TESTFAILED(1);
			break ;
		}
	}
	TESTOK(1);
}