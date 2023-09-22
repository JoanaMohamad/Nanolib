#include "usart0.h"

int putchar_block_USART0(char c, FILE *stream) {
    while (!(UCSR0A & (1 << UDRE0)))
        ;
    UDR0 = c;
    return 0;
}

FILE *init_block_USART0(void) {
    UBRR0H = UBRRH_VALUE;
    UBRR0L = UBRRL_VALUE;

    // Format de trame : 8 bits de données, pas de parité, 1 bit d'arrêt
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);

    // Activer la transmission
    UCSR0B = (1 << TXEN0);

    // Ouvrir le flux avec la fonction de transmission putchar_block_USART0
    return fdevopen(putchar_block_USART0, NULL);
}
