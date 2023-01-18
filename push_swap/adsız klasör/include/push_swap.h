/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:29:05 by oakyuz            #+#    #+#             */
/*   Updated: 2023/01/18 05:09:20 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include "Libft/libft.h"

typedef struct stack_list
{
	int					*content;
	int					*index;
	struct stack_list	*next;
} t_stack;

//OPERATIONS
//SWAP (0) <-> (1)
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
//ROTATE (0) -> (-1)
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	r_n(t_stack **a, t_stack **b, int repeat, char mod);
//REVERSEROTATE (-1) -> (0)
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	rr_n(t_stack **a, t_stack **b, int repeat, char mod);
//PUSH	pa = B(0) --> A(0)
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	p_n(t_stack **a, t_stack **b, int repeat, char mod);

//INPUTFUNCTIONS
t_stack	*addnode(t_stack *a, int sayi);
int		control(t_stack *a, int sayi, int mod);
int		arginputcontrol(char *input, int *arg);

//GENERAL
t_stack	*minisort(t_stack *a);
void	printstack(t_stack *a, t_stack *b);

//SORTING UTILITIES
int		stacklen(t_stack *a);
int		get_minindex(t_stack *a);
int		*get_stackindexes(t_stack *a);
int		haspush(t_stack *a, int *pivot);
int		issorted(t_stack *a, t_stack *b);
int		smart_swap(t_stack **a, t_stack **b, int max);
void	stage_sorter(t_stack **a, t_stack **b, int min, int max);

//SORTING ALGORITHMS
void	stagesort(t_stack **a, t_stack **b);
void	shortsort(t_stack **a, t_stack **b);
void	sortradix(t_stack **a, t_stack **b);

#endif
