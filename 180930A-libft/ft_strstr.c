/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <yforeau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 01:54:08 by yforeau           #+#    #+#             */
/*   Updated: 2018/10/09 01:54:10 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int			l;
	const char	*needle;

	l = ft_strlen(to_find);
	while (*str && *to_find)
	{
		needle = to_find;
		while (*str && *needle && *str == *needle)
		{
			str++;
			needle++;
		}
		if (*needle == 0)
			return ((char *)str - l);
		str -= needle - to_find;
		if (*str++ == 0)
			return (0);
	}
	return (l ? 0 : (char *)str);
}
