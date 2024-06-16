/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:47:27 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/30 10:52:29 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * minus);
}

/*#include <stdio.h>
int	main(void)
{
	char *test1 = "123";
	char *test2 = "   -42";
	char *test3 = "4193 with words";
	char *test4 = "words and 987";
	char *test5 = "-91283472332";
	char *test6 = "    +42";
	char *test7 = "   000123";
	char *test8 = "++123";
	char *test9 = "--123";
	char *test10 = "+-123";
	char *test11 = "-+123";

	printf("Test 1: '%s' -> %d\n", test1, ft_atoi(test1));
	printf("Test 2: '%s' -> %d\n", test2, ft_atoi(test2));
	printf("Test 3: '%s' -> %d\n", test3, ft_atoi(test3));
	printf("Test 4: '%s' -> %d\n", test4, ft_atoi(test4));
	printf("Test 5: '%s' -> %d\n", test5, ft_atoi(test5));
	printf("Test 6: '%s' -> %d\n", test6, ft_atoi(test6));
	printf("Test 7: '%s' -> %d\n", test7, ft_atoi(test7));
	printf("Test 8: '%s' -> %d\n", test8, ft_atoi(test8));  
	printf("Test 9: '%s' -> %d\n", test9, ft_atoi(test9));  
	printf("Test 10: '%s' -> %d\n", test10, ft_atoi(test10)); 
	printf("Test 11: '%s' -> %d\n", test11, ft_atoi(test11));  

	return 0;
}*/
