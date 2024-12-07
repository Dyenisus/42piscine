/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:06:06 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/26 18:25:37 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	counter_temp;

	counter = 0;
	counter_temp = counter;
	while (dest[counter] != '\0')
		counter++;
	while (nb > counter_temp && src[counter_temp] != '\0')
	{
		dest[counter + counter_temp] = src[counter_temp];
		counter_temp++;
	}
	dest[counter + counter_temp] = '\0';
	return (dest);
}
