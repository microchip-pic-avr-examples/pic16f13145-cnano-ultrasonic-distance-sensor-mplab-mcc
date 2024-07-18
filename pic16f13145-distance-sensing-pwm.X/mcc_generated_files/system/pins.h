/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA4 aliases
#define LED70cm_TRIS                 TRISAbits.TRISA4
#define LED70cm_LAT                  LATAbits.LATA4
#define LED70cm_PORT                 PORTAbits.RA4
#define LED70cm_WPU                  WPUAbits.WPUA4
#define LED70cm_OD                   ODCONAbits.ODCA4
#define LED70cm_ANS                  ANSELAbits.ANSA4
#define LED70cm_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED70cm_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED70cm_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED70cm_GetValue()           PORTAbits.RA4
#define LED70cm_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED70cm_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED70cm_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED70cm_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED70cm_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED70cm_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED70cm_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED70cm_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RB4 aliases
#define ECHO_TRIS                 TRISBbits.TRISB4
#define ECHO_LAT                  LATBbits.LATB4
#define ECHO_PORT                 PORTBbits.RB4
#define ECHO_WPU                  WPUBbits.WPUB4
#define ECHO_OD                   ODCONBbits.ODCB4
#define ECHO_ANS                  ANSELBbits.ANSB4
#define ECHO_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ECHO_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ECHO_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ECHO_GetValue()           PORTBbits.RB4
#define ECHO_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ECHO_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ECHO_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define ECHO_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define ECHO_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define ECHO_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define ECHO_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define ECHO_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define LED40cm_TRIS                 TRISBbits.TRISB5
#define LED40cm_LAT                  LATBbits.LATB5
#define LED40cm_PORT                 PORTBbits.RB5
#define LED40cm_WPU                  WPUBbits.WPUB5
#define LED40cm_OD                   ODCONBbits.ODCB5
#define LED40cm_ANS                  ANSELBbits.ANSB5
#define LED40cm_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED40cm_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED40cm_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED40cm_GetValue()           PORTBbits.RB5
#define LED40cm_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED40cm_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED40cm_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED40cm_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED40cm_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED40cm_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED40cm_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED40cm_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define TRIG_TRIS                 TRISBbits.TRISB6
#define TRIG_LAT                  LATBbits.LATB6
#define TRIG_PORT                 PORTBbits.RB6
#define TRIG_WPU                  WPUBbits.WPUB6
#define TRIG_OD                   ODCONBbits.ODCB6
#define TRIG_ANS                  ANSELBbits.ANSB6
#define TRIG_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define TRIG_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define TRIG_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define TRIG_GetValue()           PORTBbits.RB6
#define TRIG_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define TRIG_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define TRIG_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define TRIG_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define TRIG_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define TRIG_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define TRIG_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define TRIG_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define LED30cm_TRIS                 TRISBbits.TRISB7
#define LED30cm_LAT                  LATBbits.LATB7
#define LED30cm_PORT                 PORTBbits.RB7
#define LED30cm_WPU                  WPUBbits.WPUB7
#define LED30cm_OD                   ODCONBbits.ODCB7
#define LED30cm_ANS                  ANSELBbits.ANSB7
#define LED30cm_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LED30cm_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LED30cm_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LED30cm_GetValue()           PORTBbits.RB7
#define LED30cm_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LED30cm_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LED30cm_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LED30cm_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LED30cm_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define LED30cm_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define LED30cm_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define LED30cm_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define LED50cm_TRIS                 TRISCbits.TRISC0
#define LED50cm_LAT                  LATCbits.LATC0
#define LED50cm_PORT                 PORTCbits.RC0
#define LED50cm_WPU                  WPUCbits.WPUC0
#define LED50cm_OD                   ODCONCbits.ODCC0
#define LED50cm_ANS                  ANSELCbits.ANSC0
#define LED50cm_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED50cm_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED50cm_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED50cm_GetValue()           PORTCbits.RC0
#define LED50cm_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED50cm_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED50cm_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED50cm_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED50cm_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED50cm_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED50cm_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED50cm_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define LED60cm_TRIS                 TRISCbits.TRISC1
#define LED60cm_LAT                  LATCbits.LATC1
#define LED60cm_PORT                 PORTCbits.RC1
#define LED60cm_WPU                  WPUCbits.WPUC1
#define LED60cm_OD                   ODCONCbits.ODCC1
#define LED60cm_ANS                  ANSELCbits.ANSC1
#define LED60cm_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED60cm_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED60cm_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED60cm_GetValue()           PORTCbits.RC1
#define LED60cm_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED60cm_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED60cm_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED60cm_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED60cm_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED60cm_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED60cm_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED60cm_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC6 aliases
#define LED10cm_TRIS                 TRISCbits.TRISC6
#define LED10cm_LAT                  LATCbits.LATC6
#define LED10cm_PORT                 PORTCbits.RC6
#define LED10cm_WPU                  WPUCbits.WPUC6
#define LED10cm_OD                   ODCONCbits.ODCC6
#define LED10cm_ANS                  ANSELCbits.ANSC6
#define LED10cm_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED10cm_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED10cm_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED10cm_GetValue()           PORTCbits.RC6
#define LED10cm_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED10cm_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED10cm_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED10cm_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED10cm_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED10cm_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED10cm_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LED10cm_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define LED20cm_TRIS                 TRISCbits.TRISC7
#define LED20cm_LAT                  LATCbits.LATC7
#define LED20cm_PORT                 PORTCbits.RC7
#define LED20cm_WPU                  WPUCbits.WPUC7
#define LED20cm_OD                   ODCONCbits.ODCC7
#define LED20cm_ANS                  ANSELCbits.ANSC7
#define LED20cm_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED20cm_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED20cm_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED20cm_GetValue()           PORTCbits.RC7
#define LED20cm_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED20cm_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED20cm_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED20cm_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED20cm_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED20cm_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED20cm_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED20cm_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/