/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 06:02:54 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/28 06:30:51 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		pow = nb * ft_recursive_power(nb, power - 1);
	return (pow);
}
