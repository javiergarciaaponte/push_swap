/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiegar <javiegar@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:43:50 by javiegar          #+#    #+#             */
/*   Updated: 2022/08/26 18:50:51 by javiegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../lib/lib.h"

int		main(int arg, char **argc);
void	sort_stack(t_stack **root_a, t_stack **root_b);
void	sort_three(t_stack **root_a);
void	sort_five(t_stack **root_a, t_stack **root_b, int lo, int size);
void	big_sort(t_stack **root_a, t_stack **root_b, int size);
int		shortest_way(t_stack *root, int value);

#endif