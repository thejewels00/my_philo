/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <jchennak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:49:32 by jchennak          #+#    #+#             */
/*   Updated: 2022/08/14 17:21:50 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h> // remove it :D

typedef struct s_args
{
	int	nbr_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	life_cercle;
}	t_args;

typedef struct s_work
{
	pthread_mutex_t	*mt;
	pthread_t		*tr;
	int				*position;
}	t_work;

int		ft_atoi(char *str);
int		philosophers(t_args *data);
int		input(char **av, t_args *inp, int argc);


#endif