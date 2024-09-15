/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:18:53 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:51:14 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct t_stack
{
	int				data;
	int				index;
	struct t_stack	*next;
}	t_stack;

// create stack
void	create_stack(int args, char **argv, t_stack **stack_a);
void	append_stack(t_stack **stack_a, int value);

// utils
void	free_stack(t_stack **stack);
int		biggest_index(t_stack **stack_a);
int		count_nodes(t_stack **stack_a);
int		max_index_bits(t_stack **stack_a);
void	bring_top(t_stack **stack_a, int index);

//checker
int		sort_checker(t_stack **stack_a);
void	sort_three(t_stack **stack_a);
int		check_args(int args, char **argv);

//sort
void	sort_three(t_stack **stack_a);
void	sort_med(t_stack **stack_a, t_stack **stack_b);
void	index_sort(t_stack **stack_a);
void	radix(t_stack **stack_a, t_stack **stack_b);
int		find_smallest(t_stack **stack_a);

//moves
void	sa(t_stack **stack_a, char *str);
void	pa(t_stack **stack_a, t_stack **stack_b, char *str);
void	ra(t_stack **stack_a, char *str);
void	rra(t_stack **stack_a, char *str);

#endif
