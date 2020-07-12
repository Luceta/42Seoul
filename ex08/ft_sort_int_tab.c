/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:25:13 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/12 23:08:52 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
{
	int i;
	int j;
	int store;

	i = 0;
	while( i < size)
	{
		++i;
		j=0;
		
		while( j < size)
		{
			++j;
			
			if( tab [j-1] >= tab[j])
		{
			store  = tab[j-1];
			tab[j-1] = tab[j];
			tab[j] = tmp;
		}
		}
	}
}

