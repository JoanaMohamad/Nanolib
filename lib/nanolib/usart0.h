// N'oubliez pas de rajouter une include guard !
// Définir BAUD à 9600 si non défini
// N'oubliez pas de rajouter une include guard !
#ifndef USART0_H
#define USART0_H

#include <stdio.h>
#include <avr/io.h>
#include <util/setbaud.h>

#ifndef BAUD
#define BAUD 9600
#endif

int putchar_block_USART0(char c, FILE *stream);
FILE *init_block_USART0(void);

#endif // USART0_H
