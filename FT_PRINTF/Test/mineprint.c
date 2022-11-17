/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mineprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:02:55 by ababdelo          #+#    #+#             */
/*   Updated: 2022/11/16 14:47:34 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Work/ft_printf.h"

void printfmine(int *ptr, int nbr)
{
	ft_printf("%d\n", ft_printf("\n***************************MINE***************************\n"));
	ft_printf("len: %d", ft_printf("\n"));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("Address of ptr is: %p\n", &ptr));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("Address that ptr point to is: %p\n", ptr));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("Data of what ptr point to is: %d\n", *ptr));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("Address of nbr is: %p\n", &nbr));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("Data of nbr is: %d\n", nbr));
	ft_printf("\n");
	ft_printf("len: %d", ft_printf("\n0123456789\n"));
	ft_printf("\n");
}

void printt(void)
{
	int nbr;
	int *ptr;

	nbr = 1337;
	ptr = &nbr;
	printfmine(ptr, nbr);
}

int main(void)
{
	char *ptr;
	char str[] = "...";

	ptr = str;
	ptr[0] = 'a';
	ft_printf("Print a Character: ");
	ft_printf("%d", ft_printf("|%c|\n---> Done\n", '#'));
	ft_printf("Print a String: ");
	ft_printf("|%s|\n---> Done\n", NULL);
	ft_printf("Print a Decimal Integer (Base 10): ");
	ft_printf("|%d|\n---> Done\n", 1337);
	ft_printf("Print a Zero Decimal Integer (Base 10): ");
	ft_printf("|%i|\n---> Done\n", 0);
	ft_printf("Print a Negative Decimal Integer (Base 10): ");
	ft_printf("|%i|\n---> Done\n", -42);
	ft_printf("Print an Unsigned Decimal Integer (Base 10): ");
	ft_printf("|%u|\n---> Done\n", 4294967295);
	ft_printf("Print an Unsigned HexaDecimal Integer (Lowercase): ");
	ft_printf("|%x|\n---> Done\n", 13);
	ft_printf("Print an Unsigned HexaDecimal Integer (Uppercase): ");
	ft_printf("|%X|\n---> Done\n", 13);
	ft_printf("Print a Pointer Address: ");
	ft_printf("|%p|\n---> Done\n", ptr);
	ft_printf("Print a Percentage-Sign: ");
	ft_printf("|%%|\n---> Done\n");

	printt();
}
