/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:12:00 by mchampag          #+#    #+#             */
/*   Updated: 2024/01/17 15:52:53 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;
	size_t	len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	i = -1;
	while (src[++i] != 0 && len--)
		dst[i] = src[i];
	dst[i] = 0;
	return (dst);
}
