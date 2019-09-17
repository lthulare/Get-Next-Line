/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:28:03 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/26 16:09:34 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (c == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (c < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-c));
	}
	else if (c >= 10)
		str = ft_strjoin(ft_itoa(c / 10), ft_itoa(c % 10));
	else if (c < 10 && c >= 0)
	{
		str[0] = c + '0';
		str[1] = '\0';
	}
	return (str);
}
