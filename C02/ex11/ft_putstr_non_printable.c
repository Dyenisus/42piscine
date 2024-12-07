/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:28:47 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/01 18:40:34 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_str_is_printable(char c)
{
	if (c < 32)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (ft_str_is_printable(str[counter]) == 1)
			ft_putchar(str[counter]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[counter] / 16]);
			ft_putchar("0123456789abcdef"[str[counter] % 16]);
		}
		counter++;
	}
}
