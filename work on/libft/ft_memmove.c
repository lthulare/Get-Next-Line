/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:19:26 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/09 17:27:16 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void static		*ft_memcpy_bwd(void *s1, const void *s2, size_t n)
{
	char		*c1;
	char		*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	if (n == 0 || s1 == s2)
		return (s1);
	while (n--)
	{
		c1[n] = c2[n];
	}
	return (s1);
}

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	if (s1 > s2)
		return (ft_memcpy_bwd(s1, s2, n));
	return (s1);
}
