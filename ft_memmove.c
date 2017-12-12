/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:06:39 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 23:13:59 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*strc;
	char	*strd;
	size_t	i;

	i = 0;
	strc = (char *)src;
	strd = (char *)dest;
	if (strc < strd)
			while ((int)(--len) >= 0)
					strd[len] = strc[len];
	else
			while ( i <= len )
					strd[i] = strc[i];
	return (dest);
}
