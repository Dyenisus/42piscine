/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:50:49 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/21 15:56:13 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if ((str[counter] < 65 || str[counter] > 90) && str[counter] < 97)
			return (0);
		else if (str[counter] > 122)
			return (0);
		counter++;
	}
	return (1);
}
