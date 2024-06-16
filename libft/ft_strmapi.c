/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <ojanos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:02:53 by ojanos            #+#    #+#             */
/*   Updated: 2024/06/05 13:09:38 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s)+1));
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

/*int main()
{
    const char *original_str = "Hello, World!";
    char *mapped_str = ft_strmapi(original_str, example_func);

    if (mapped_str != NULL)
    {
        printf("Original string: \"%s\"\n", original_str);
        printf("Mapped string: \"%s\"\n", mapped_str);
        free(mapped_str);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
