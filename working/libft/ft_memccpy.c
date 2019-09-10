/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:11:57 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/06 15:26:06 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*des;
	char	*source;

	count = 0;
	des = (char *)dst;
	source = (char *)src;
	while (count < n)
	{
		des[count] = source[count];
		if ((unsigned char)source[count] == (unsigned char)c)
			return ((char *)dst + count + 1);
		count++;
	}
	return (NULL);
}
