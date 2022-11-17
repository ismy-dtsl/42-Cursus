/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sysprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:05:56 by ababdelo          #+#    #+#             */
/*   Updated: 2022/11/16 14:47:44 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Work/ft_printf.h"

void printfsys(int *ptr, int nbr)
{

	printf("%d\n", printf("\n**************************SYSTEM**************************\n"));
	printf("len: %d", printf("\n"));
	printf("\n");
	printf("len: %d", printf("Address of ptr is: %p\n", &ptr));
	printf("\n");
	printf("len: %d", printf("Address that ptr point to is: %p\n", ptr));
	printf("\n");
	printf("len: %d", printf("Data of what ptr point to is: %d\n", *ptr));
	printf("\n");
	printf("len: %d", printf("Address of nbr is: %p\n", &nbr));
	printf("\n");
	printf("len: %d", printf("Data of nbr is: %d\n", nbr));
	printf("\n");
	printf("len: %d", printf("\n0123456789\n"));
	printf("\n");
}

void printt(void)
{
	int nbr;
	int *ptr;

	nbr = 1337;
	ptr = &nbr;
	printfsys(ptr, nbr);
}

int main(void)
{
	char *ptr;
	char str[] = "...";

	ptr = str;
	ptr[0] = 'a';
	printf("Print a Character: ");
	printf("%d", printf("|%c|\n---> Done\n", '#'));
	printf("Print a String: ");
	printf("|%s|\n---> Done\n", NULL);
	printf("Print a Decimal Integer (Base 10): ");
	printf("|%d|\n---> Done\n", 1337);
	printf("Print a Zero Decimal Integer (Base 10): ");
	printf("|%i|\n---> Done\n", 0);
	printf("Print a Negative Decimal Integer (Base 10): ");
	printf("|%i|\n---> Done\n", -42);
	printf("Print an Unsigned Decimal Integer (Base 10): ");
	printf("|%u|\n---> Done\n", (unsigned int)(4294967295));
	printf("Print an Unsigned HexaDecimal Integer (Lowercase): ");
	printf("|%x|\n---> Done\n", 13);
	printf("Print an Unsigned HexaDecimal Integer (Uppercase): ");
	printf("|%X|\n---> Done\n", 13);
	printf("Print a Pointer Address: ");
	printf("|%p|\n---> Done\n", ptr);
	printf("Print a Percentage-Sign: ");
	printf("|%%|\n---> Done\n");

	printt();
}