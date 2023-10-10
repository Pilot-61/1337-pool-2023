/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:21:23 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/31 18:24:56 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 2;
	if (nb == 1)
		return (1);
	if (nb == 0 || nb < 0)
		return (0);
	while (sq * sq <= nb)
	{
		if (sq * sq == nb)
			return (sq);
		else if (sq == 46340)
			return (0);
		sq++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
 p("%d", ft_sqrt(5));
  return 0;
}
*/
