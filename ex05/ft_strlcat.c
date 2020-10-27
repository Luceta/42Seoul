/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <irisonestar@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:58:04 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/21 09:39:02 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	numleng;

	i = 0;
	j = 0;
	numleng = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (size <= j)
		i = i + size;
	if (size > j)
		i = i + j;
	while ((src[numleng] != '\0') && j + 1 < size)
	{
		dest[j] = src[numleng];
		numleng++;
		j++;
	}
	dest[j] = '\0';
	return (i);
}
