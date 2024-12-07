/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:14:47 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/28 01:13:23 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	counter_temp;
	unsigned int	i;

	i = 0;
	counter = 0;
	counter_temp = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[counter_temp] != '\0')
		counter_temp++;
	if (size <= counter)
		return (size + counter_temp);
	while (src[i] != '\0' && (counter + i) < size - 1)
	{
		dest[counter + i] = src[i];
		i++;
	}
	dest[counter + i] = '\0';
	return (counter + counter_temp);
}


#include <stdio.h>

int main()
{
	char arr[11] = "Serra";
	char arr1[] = "ra";
	
	printf("%d",ft_strlcat(arr, arr1, 1));
}
