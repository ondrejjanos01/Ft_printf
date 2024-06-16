/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:46:30 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/24 12:59:07 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>
void print_index_char(unsigned int index, char *ch)
{
    printf("Index %u: %c\n", index, *ch);
}

int main(void)
{
    char str[] = "Hello";
    ft_striteri(str, &print_index_char);
    return 0;
}*/
