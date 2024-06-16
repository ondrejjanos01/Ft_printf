/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:13:30 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/24 09:20:56 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_empty_string(void)
{
	char	*str;

	str = (char *)malloc(1);
	if (str)
		str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*str;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (allocate_empty_string());
	if (len > str_len - start)
		len = str_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(s, start, len);
    if (substring != NULL)
    {
        printf("Substring: \"%s\"\n", substring);
        free(substring);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
