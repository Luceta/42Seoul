/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstsr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <irisonestar@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:04:28 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/20 11:20:22 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
	int number;

	i = 0;
	number = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[number] != '\0')
		number++;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == number)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
