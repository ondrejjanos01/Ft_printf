/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:27:07 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/06 17:52:07 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char test_chars[] = {'a', 'Z', '5', '#', ' ', '9', 'k', 'P', '0', '?'};
    size_t num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
    size_t  i;

    i = 0;
    while (i < num_tests)
    {
        char c = test_chars[i];
        if (ft_isdigit(c))
            printf("Character '%c' is a digit.\n", c);
        else
            printf("Character '%c' is not a digit.\n", c);
        i++;
    }


    return 0;
}*/
