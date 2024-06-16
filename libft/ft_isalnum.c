/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:37 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 10:08:50 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int main(void)
{
    char test_chars[] = {'a', 'Z', '5', '#', ' ', '9', 'k', 'P', '0', '?'};
    size_t num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
    size_t  i;

    i = 0;
    while ( i < num_tests)
    {
        char c = test_chars[i];
        if (ft_isalnum(c))
            printf("Character '%c' is alphanumeric.\n", c);
        else
            printf("Character '%c' is not alphanumeric.\n", c);
        i++;
    }

    return 0;
}*/
