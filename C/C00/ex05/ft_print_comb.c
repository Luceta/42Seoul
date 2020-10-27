/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:29:55 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/12 23:30:11 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int a, int b, int c)
{
	char aNum;
	char bNum;
	char cNum;

	aNum = a + '0';
	bNum = b + '0';
	cNum = c + '0';

	write(1,&aNum,1);
	write(1,&bNum,1);
	write(1,&cNum,1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while ( a<= 6)
	{
		b = a + 1;
		while ( b <= 8)
		{
			c = b + 1;
			while ( c<= 9)
			{
				ft_comb(a,b,c);
				write(1,","2);
				++c;		
			}
			++b;
		}
		++a;
	}
	ft_comb(a,b-1,c-1);
}
