/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsiller <jsiller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:18:03 by jsiller           #+#    #+#             */
/*   Updated: 2021/10/03 19:58:49 by jsiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_nl(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] && buf[i] != 10)
		i++;
	if (buf[i] == 10)
		return (1);
	return (0);
}
