/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:11:46 by mchampag          #+#    #+#             */
/*   Updated: 2024/01/17 15:40:22 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" // pour pipex

void	print_array(char *message, int *ar_int, size_t size, char *string)
{
	if (message)
		printf("%s\n", message);
	if (size)
	{
		while (size--)
		{
			printf(" %d\n", *ar_int);
			ar_int++;
		}	
	}
	else
	{
		while (*string)
		{
			printf(" %c\n", *string);
			string++;
		}
	}
}
