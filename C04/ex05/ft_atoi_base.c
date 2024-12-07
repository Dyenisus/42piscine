/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:57:46 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/03 05:49:57 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_length(char *base)
{
	int	counter;

	counter = 0;
	while (base[counter] != '\0')
		counter++;
	return (counter);
}

int	is_based(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i])
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == 32 || (base[i] <= 13 && base[i] >= 9))
			return (0);
		i++;
	}
	return (i > 1);
}

int	index_to_nbr(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j] != '\0')					
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (is_based(base) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (index_to_nbr(str, base, i) >= 0)
	{
		result = result * base_length(base) + index_to_nbr(str, base, i);
		i++;
	}
	return (result * sign);
}
