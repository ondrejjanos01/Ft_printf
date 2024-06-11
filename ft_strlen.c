/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:26:44 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/14 09:22:19 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*int main()
{
    const char *test_str1 = "Hello, World!";
    const char *test_str2 = "";
    const char *test_str3 = NULL;

    size_t length1 = ft_strlen(test_str1);
    size_t length2 = ft_strlen(test_str2);
    size_t length3 = ft_strlen(test_str3);

    printf("The length of the string \"%s\" is %zu.\n", test_str1, length1);
    printf("The length of the empty string is %zu.\n", length2);
    printf("The length of the NULL string is %zu.\n", length3);

    return 0;
}*/
