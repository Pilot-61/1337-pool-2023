/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:40:37 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/31 10:41:22 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *src, char*dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(src));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(src, ptr);
	return (ptr);
}
