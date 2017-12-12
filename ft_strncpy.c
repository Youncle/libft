/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:55:39 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 23:15:37 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ( i <= len)
		if (src[i])
			dest[i] = src[i];
		else
			while (i <= len)
			{
				dest[i] = '\0';
				i++;
			}
	return (dest);
}
