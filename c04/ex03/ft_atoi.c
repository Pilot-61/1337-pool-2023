/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:30:08 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/28 22:18:41 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	is_even;
	int	num;
	int	i;

	is_even = 0;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_even++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10; 
		num += str[i] - 48;
		i++;
	}
	if (is_even % 2 == 0)
		return (num);
	else
		return (-num);
}
