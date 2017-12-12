/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:01:55 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 20:06:15 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
			return (NULL);
	new_str = ft_strnew(len);
	if (!new_str)
			return (NULL);
	i = 0;
	while (i < len)
			*(new_str + i++) = *(s + start++);
	return (new_str);
}
