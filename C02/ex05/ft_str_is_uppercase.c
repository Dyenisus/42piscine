/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:58:56 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/21 16:00:12 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if ((str[counter] < 65 || str[counter] > 90))
			return (0);
		counter++;
	}
	return (1);
}
