/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:55:42 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/21 15:57:55 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if ((str[counter] < 97 || str[counter] > 122))
			return (0);
		counter++;
	}
	return (1);
}
