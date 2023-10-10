/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymassiou <yassermassioui4@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:11:41 by ymassiou          #+#    #+#             */
/*   Updated: 2023/08/20 13:24:11 by ymassiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print(char a, char b, int len)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < len - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (len > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	print('o', '-', x);
	while (i < y - 2)
	{
		print('|', ' ', x);
		i++;
	}
	if (y > 1)
		print('o', '-', x);
}
