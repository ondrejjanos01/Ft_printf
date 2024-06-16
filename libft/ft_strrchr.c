/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <ojanos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:12:05 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/06 13:57:53 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = ft_strlen(s);
	if (uc == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int main()
{
    const char *str = "Hello, World!";
    int character = 'o';

    char *result = ft_strrchr(str, character);
    if (result != NULL)
		printf("Last '%c' in \"%s\" at %ld.\n", character, str, result - str);
    else
		printf("Character '%c' not found in \"%s\".\n", character, str);

    return 0;
}*/
