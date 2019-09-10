/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:48:07 by lthulare          #+#    #+#             */
/*   Updated: 2019/07/05 19:29:12 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || str1 == str2)
		return (str1);
	c1 = (char *)str1;
	c2 = (char *)str2;
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return (str1);
}
