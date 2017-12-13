/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:06:39 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/13 13:21:04 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*strdest;
	char	*strsrc;
	size_t	i;

	i = -1;
	strsrc = (char *)src;
	strdest = (char *)dest;
	if (strsrc < strdest)
			while ((int)(--len) >= 0)
			{
					*(strdest + len) = *(strsrc + len);
			}
	else
			while ( ++i < len )
			{
					*(strdest + i) = *(strsrc + i);
			}
	return (dest);
}
