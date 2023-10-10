/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:22:07 by mes-salh          #+#    #+#             */
/*   Updated: 2023/08/21 15:24:14 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	firstone;
	int	lastone;
	int	rev;

	firstone = 0;
	lastone = size - 1;
	while (firstone < lastone)
	{
		rev = tab[firstone];
		tab[firstone] = tab[lastone];
		tab[lastone] = rev;
		firstone++;
		lastone--;
	}
}
