/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:42:28 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/12 12:25:05 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char test_chars[] = {'a', 'Z', '5', '#', ' ', 'k', 'P', '!', 'm', 'L'};
    size_t num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
    size_t i;

    i = 0;
    while (i < num_tests)
    {
        char c = test_chars[i];
        if (ft_isalpha(c))
            printf("Character '%c' is alphabetic.\n", c);
        else
            printf("Character '%c' is not alphabetic.\n", c);
            i++;
    }

    return 0;
}*/
