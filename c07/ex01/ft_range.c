/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:02:18 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/31 12:09:38 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int) * (max - min - 1));
	if (array == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int	min = 10;
	int max = 10;
	int i = 0;
	int *rang = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n",rang[i]);
		i++;
	}
	free(rang);
}
*/
