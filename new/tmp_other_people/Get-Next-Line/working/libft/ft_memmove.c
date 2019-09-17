/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:19:26 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/26 16:06:49 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void static		*ft_memcpy_bwd(void *dst, const void *src, size_t len)
{
	char		*c1;
	char		*c2;

	c1 = (char *)dst;
	c2 = (char *)src;
	if (len == 0 || dst == src)
		return (dst);
	while (len--)
	{
		c1[len] = c2[len];
	}
	return (dst);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_memcpy_bwd(dst, src, len));
	return (dst);
}
