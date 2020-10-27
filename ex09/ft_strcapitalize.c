/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanbkim <irisonestar@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:42:51 by hanbkim           #+#    #+#             */
/*   Updated: 2020/07/21 17:35:05 by hanbkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		first_letter(char *str, int index)
{
	int	i;

	i = index - 1;
	if (index == 0)
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	if (str[i] >= 65 && str[i] <= 90)
		return (0);
	if (str[i] >= 97 && str[i] <= 122)
		return (0);
	return (1);
}

void	ft_ch_lowercase(char *str, int index)
{
	if (str[index] >= 65 && str[index] <= 90)
		str[index] += (32);
}

void	ft_ch_uppercase(char *str, int index)
{
	if (str[index] >= 97 && str[index] <= 122)
		str[index] -= (32);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (first_letter(str, index))
			ft_ch_uppercase(str, index);
		else
			ft_ch_lowercase(str, index);
		index++;
	}
	return (str);
}
