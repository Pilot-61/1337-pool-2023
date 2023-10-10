/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:56:05 by mes-salh          #+#    #+#             */
/*   Updated: 2023/09/03 11:46:31 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*allocat_it(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*joinit;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(sep);
		i++;
	}
	joinit = malloc(length + 1);
	if (joinit == NULL)
		return (NULL);
	joinit[0] = '\0';
	return (joinit);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	char	*joinit;
	char	*emptystr;

	j = 0;
	if (size <= 0)
	{
		emptystr = malloc(1);
		emptystr[0] = '\0';
		return (emptystr);
	}
	joinit = allocat_it(size, strs, sep);
	while (j < size)
	{
		ft_strcat(joinit, strs[j]);
		if (j < size - 1)
			ft_strcat(joinit, sep);
		j++;
	}
	return (joinit);
}
/*
#include <stdio.h>
int main()
{
    char *strs[] = {"amine", "medd", "essalhi", "tayfone"};
    char sep[] = "$$$";
    char *result = ft_strjoin(3, strs, sep);
    printf("%s", result);
    free(result);
    return 0;
}
*/
