#include <stdint.h>
#include "esp_board.h"
#include "register_access.h"

__attribute__((constructor))
void board_init(void)
{
    extern uint32_t __uart0_clkdiv_reg;
    extern uint32_t __uart0_clkdiv_val;

    WRITE_REGISTER(__uart0_clkdiv_reg, __uart0_clkdiv_val);
}

void board_uart_write_char(char c)
{
    extern uint32_t __uart0_status;
    extern uint32_t __uart0_tx_addr;

    /* wait until txfifo_cnt == 0 */
    while (((READ_REGISTER(__uart0_status)) >> 16) & 0xff) {
        ;
    }
    if (c == '\n') {
        WRITE_REGISTER(__uart0_tx_addr, '\r');
    }
    WRITE_REGISTER(__uart0_tx_addr, c);
}
