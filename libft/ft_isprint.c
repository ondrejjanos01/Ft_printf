/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:34:51 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/07 10:57:58 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    char test_chars[] = {'a', 'Z', '5', '#', ' ', '\n', '\t', '~', '!', 127};
    size_t num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
    size_t  i;

    i = 0;
    while (i < num_tests)
    {
        char c = test_chars[i];
        if (ft_isprint(c))
            printf("Character '%c' (ASCII %d) is printable.\n", c, c);
        else
            printf("Character '%c' (ASCII %d) is not printable.\n", c, c);
        i++;
    }

    return 0;
}*/
