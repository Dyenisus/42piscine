/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:01:36 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/26 19:44:01 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] < 32)
			return (0);
		counter++;
	}
	return (1);
}
