/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigateau <nigateau@student.42.lausanne>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:21:34 by nigateau          #+#    #+#             */
/*   Updated: 2024/06/18 15:13:49 by nigateau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../../../includes/minishell.h"

t_queue    *init_queue(void)
{
    t_queue	*queue;

    queue = malloc(sizeof(t_queue));
    if (!queue)
        return (NULL);
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
    return (queue);
}
void    push_queue(t_queue *queue, t_envp *token)
{
    if (!queue || !token)
        return ;
    if (!queue->head)
    {
        queue->head = token;
        queue->tail = token;
    }
    else
    {
        queue->tail->next = token;
        queue->tail = token;
    }
    queue->size++;
}

void    push_queue_envp(t_queue *queue, t_envp *token)
{
    //if (!queue || !token)
    //    return ;
    if (!queue->head)
    {
        queue->head = token;
        queue->tail = token;
    }
    else
    {
        queue->tail->next = token;
        queue->tail = token;
    }
    queue->size++;
}

t_envp    *pop_queue(t_queue *queue)
{
    t_envp	*token;

    if (!queue || !queue->head)
        return (NULL);
    token = queue->head;
    queue->head = queue->head->next;
    queue->size--;
    return (token);
}

void    enqueue(t_queue *queue, char *key, char *value)
{
    t_envp	*token;

    token = malloc(sizeof(t_envp));
    if (!token)
        return ;
    token->key = key;
    token->value = value;
    token->next = NULL;
    push_queue_envp(queue, token);
}

t_bool queue_is_empty(t_queue *queue)
{
    if (queue == NULL)
        return (1);
    if (queue->size == 0)
        return (1);
    return (0);
}

// void    free_queue(t_queue *queue)
// {
//     t_token	*token;
//     t_token	*tmp;

//     if (!queue)
//         return ;
//     token = queue->head;
//     while (token)
//     {
//         tmp = token->next;
//         free(token->value);
//         free(token->type);
//         free(token);
//         token = tmp;
//     }
//     free(queue);
// }

