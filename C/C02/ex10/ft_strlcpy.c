/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <irisonestar@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:45:35 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/21 19:34:46 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;

	n = 0;
	if (size != 0)
	{
		while (n < size - 1 && src[n] != '\0')
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	while (src[n] != '\0')
		n++;
	return (n);
}
