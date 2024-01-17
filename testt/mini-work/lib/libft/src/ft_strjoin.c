/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:16:06 by mchampag          #+#    #+#             */
/*   Updated: 2024/01/17 15:47:02 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*dst;
	char	*str;
	char	*temp;

	if (!str1 && !str2)
		return (NULL);
	if (!str1 && str2)
		return (ft_strdup(str2));
	if (str1 && !str2)
		return (ft_strdup(str1));
	dst = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!dst)
		return (NULL);
	str = dst;
	temp = (char *)str1;
	while (*temp)
		*dst++ = *temp++;
	if (str1)
		free((char *)str1);
	while (*str2)
		*dst++ = *str2++;
	*dst = 0;
	return (str);
}
