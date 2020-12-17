/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcciupek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:24:41 by mcciupek          #+#    #+#             */
/*   Updated: 2020/12/11 12:00:19 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

INT_MIN = -2147483648;
INT_MAX = 2147483647;

#include "printf/includes/libftprintf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	ft_printf("--------------- TEST PRINTF -----------------\n");

	i = ft_printf("c : %4.2c. OK et %0.*s.\n", (char)0, -10, "ç");
	j = printf("c : %4.2c. OK et %0.*s.\n", (char)0, -10, "ç");
	ft_printf("RET VALUES : %i - ", i);
	printf("%i\n\n", j);
	
	i = ft_printf("s : %5.0s.\n", "hello");
	j = printf("s : %5.0s.\n", "hello");
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
    
	i = ft_printf("p : %5p.\n", 0);
	j = printf("p : %5p.\n", 0);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
	
	i = ft_printf("d : %d.\n", INT_MIN);
	j = printf("d : %d.\n", INT_MIN);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
	
	i = ft_printf("int : %i.\n", INT_MAX + 1);
	j = printf("int : %i.\n", INT_MAX + 1);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
	
	i = ft_printf("|%015p|\n", &"Coco Toto");
	j = printf("|%015p|\n", &"Coco Toto");
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
	
	i = ft_printf("eK4RP%s htfR%08.*uNab\n", "d1Pvct53bJ004wnhh8SStCnVlITR", -4, 0);
	j = printf("eK4RP%s htfR%08.*uNab\n", "d1Pvct53bJ004wnhh8SStCnVlITR", -4, 0);
	ft_printf("RET VALUES : %i - ", i);
   	printf("%i\n\n", j);
    
	i = ft_printf("%s%.5xfriI%015.*x2zv%-.*ipqqw%-14.1i\n", "dBi0Q1xDqbKzG4SeqPw2uXwJ", 708663212, -9, 2147483647, 6, -2147483647, 2147483647);
	j = printf("%s%.5xfriI%015.*x2zv%-.*ipqqw%-14.1i\n", "dBi0Q1xDqbKzG4SeqPw2uXwJ", 708663212, -9, 2147483647, 6, -2147483647, 2147483647);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
    
	i = ft_printf("%8u%-s%03iwies%15dhDr%015.*X40AaL\n", -2147483647, NULL, -2092744514, 0, -2, -1327864512);
	j = printf("%8u%-s%03iwies%15dhDr%015.*X40AaL\n", -2147483647, NULL, -2092744514, 0, -2, -1327864512);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);
	
	i = ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	j = printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	ft_printf("RET VALUES : %i - ", i);
    	printf("%i\n\n", j);

	ft_printf("------------------ FIN ------------------\n");
}
