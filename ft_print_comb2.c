/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:51:42 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/12 21:56:15 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar()
{
	char c;
	write(1,&c,1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while(i <98)
	{
		j = i+1;
		while( j < 100)
		{
			print_comb2(i,j);
			ft_putchar(',');
			ft_putchar('');
			++j;
		}
		++i;
	}
	print_comb2(i,j-1);
}
