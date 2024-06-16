/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:07:42 by racinedelar       #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2024/06/16 17:06:36 by racinedelar      ###   ########.fr       */
=======
/*   Updated: 2024/06/16 16:30:36 by racinedelar      ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */


#ifndef MINISHELL_H
# define MINISHELL_H

# include "struct.h"
# include "lexer.h"
# include "Libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <dirent.h>
# include <sys/wait.h>
# include <limits.h>
# include <errno.h>
# include <signal.h>
# include <termios.h>

////////COLORS////////
#define C_GREEN = "\033[0m\033[32m"
#define C_RED = "\033[0m\033[31m"
#define C_WHITE = "\033[0m\033[37m"
#define C_YELLOW = "\033[0m\033[33m"
#define C_CYAN = "\033[0m\033[36m"
#define C_RESET = "\033[0m"

/////////////PROTOTYPES////////////////
void    ft_env_to_lst(char **envp, t_envs_lst **envs);


# endif