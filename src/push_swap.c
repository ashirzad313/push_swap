/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:30:11 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:51:34 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int args, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!check_args(args, argv))
		return (0);
	create_stack(args, argv, &stack_a);
	index_sort(&stack_a);
	if (count_nodes(&stack_a) <= 3)
		sort_three(&stack_a);
	else if (count_nodes(&stack_a) <= 50)
		sort_med(&stack_a, &stack_b);
	else
		radix(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
