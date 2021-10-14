/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipefd_to_stdout.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:29:03 by ylee              #+#    #+#             */
/*   Updated: 2021/06/13 17:56:44 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	pipefd_to_stdout(int *fd)
{
	dup2(fd[WRITE], STDOUT_FD);
	close(fd[WRITE]);
	close(fd[READ]);
}
