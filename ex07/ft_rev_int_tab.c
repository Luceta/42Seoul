/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:53:49 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/12 23:39:32 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
