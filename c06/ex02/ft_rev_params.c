/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:02:59 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/30 15:03:06 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = argc - 1;
	if (argc > 1)
	{
		while (j > 0)
		{
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j--;
		}
	}
	return (0);
}
