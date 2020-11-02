#include stateChange_included
#define stateChange_included
#define SWITCHES (SW1 | SW2 | SW3 | SW4)
#define SW1 BIT0
#define SW2 BIT1
#define SW3 BIT2
#define SW4 BIT3

void init_switch();

void interrupt_handler();

extern char switch_down;
extern char switch_state;
extern char state;

#endif
