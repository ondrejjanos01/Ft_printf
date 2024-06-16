/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:32:20 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 12:38:05 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	b;
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}

/*int	main(void)
{
	int *arr;
	size_t nmemb = 5;
	size_t size = sizeof(int);
	size_t size i;


	arr = (int *)calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	printf("Allocated and zeroed array elements:\n");
	i = 0;
	while (i < nmemb)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	free(arr);
	return 0;
}*/
