/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cmd_echo_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 01:08:08 by inyang            #+#    #+#             */
/*   Updated: 2021/08/19 01:09:44 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	is_there_n_option(t_all *b, int i)
{
	if (b->arg[i + 1] && px_strcmp(b->arg[i + 1], "-n"))
		b->echo_n_cnt = 1;
}
