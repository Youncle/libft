/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:50:10 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 19:56:28 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (!s)
			return (NULL);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
			return (NULL);
	i = -1;
	while (*(s + ++i))
			*(new_str + i) = f(i, *(s + i));
	return (new_str);
}
