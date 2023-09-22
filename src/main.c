#include <avr/io.h>
#include <util/delay.h>
#include "usart0.h"

int main() {
    // Initialiser USART0
    init_block_USART0();

    for (;;) {
      printf("hello world !\n");
        _delay_ms(1000);
    }

    return 0;
}
