/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:22:44 by lthulare          #+#    #+#             */
/*   Updated: 2019/06/08 14:46:00 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr_str;
	size_t	i;

	i = 0;
	ptr_str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr_str == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr_str[i] = s1[i];
		i++;
	}
	ptr_str[i] = '\0';
	return (ptr_str);
}
