/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:57:16 by ehoundey          #+#    #+#             */
/*   Updated: 2022/06/20 18:03:55 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(char **old, char **new)
{
	char	*tmp;

	tmp = *old;
	*old = *new;
	*new = tmp;
}

char	**ft_sort_str_arr(char *unsorted[])
{
	int		unsorted_len;
	int		i;
	int		j;

	if (unsorted == NULL)
		return (NULL);
	unsorted_len = ft_str_arr_len(unsorted);
	i = 0;
	while (i < unsorted_len)
	{
		j = 0;
		while (j < (unsorted_len - 1 - i))
		{
			if (ft_strcmp(unsorted[j], unsorted[j + 1]) > 0)
				swap(&unsorted[j], &unsorted[j + 1]);
			j++;
		}
		i++;
	}
	return (unsorted);
}
