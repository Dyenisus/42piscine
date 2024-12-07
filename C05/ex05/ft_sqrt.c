/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 06:27:36 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/02 23:26:59 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (index * index <= nb)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
