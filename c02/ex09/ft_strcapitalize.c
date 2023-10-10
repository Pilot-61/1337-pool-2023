/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:29:00 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/26 16:16:02 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c)
{
	if ((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z') 
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (alpha(str[i]))
		{
			if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (j == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
