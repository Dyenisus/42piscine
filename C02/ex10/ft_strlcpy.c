/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:22:25 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/01 18:39:36 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (size - 1 > counter && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter <= size)
	{
		dest[counter] = '\0';
		counter++;
	}
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	return (counter);
}
