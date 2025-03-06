#ifndef GammaAnm_SDKConfig
#define GammaAnm_SDKConfig

//PMX0
#define RXD5        0
#define TXD6        1
#define SSB1        2
#define C0AC0       3
#define C0BF3       4
#define C1AF5       5
#define C1BF4       6
#define WCE         7
//PMX1
#define C2AF6       0
#define C2BF7       1
#define C3AC        2
//PMX2
#define C6EN        0
#define E6EN        1
#define XIEN        2
#define STSC0       5
#define STSC1       6


void SDKConfig()
{
    //Set PD5 as RXD, PD6 as TXD
    PMX0 |= (1<<WCE);               //allow changing settings (during 6 cycles)
    PMX0 |= (1<<TXD6) | (1<<RXD5);
    //Set PE4 as OC1B, PE5 as OC1A
    PMX0 |= (1<<WCE);               //allow changing settings (during 6 cycles)
    PMX0 |= (1<<C1BF4) | (1<<C1AF5);
    //Enable external clock
    PMX2 |= (1<<WCE);               //allow changing settings (during 6 cycles)
    PMX2 |= (1<<XIEN);
}


#endif
