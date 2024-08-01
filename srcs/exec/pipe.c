/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 00:26:14 by racinedelar       #+#    #+#             */
/*   Updated: 2024/08/01 00:29:00 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void init_first_pipe(t_shell *shell) {
	if (pipe(shell->pipe.in) == -1) {
		perror("first pipe");
		exit(EXIT_FAILURE);
	}
}

void init_mid_pipe(t_shell *shell) {
	if (pipe(shell->pipe.out) == -1) {
		perror("mid pipe");
		exit(EXIT_FAILURE);
	}
}

void close_pipes(t_pipe *pipe) {
	close(pipe->in[0]);
	close(pipe->in[1]);
	close(pipe->out[0]);
	close(pipe->out[1]);
}