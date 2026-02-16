/**
 *  @file clbBitstream.s
 *
 *  @brief CLB bitstream data for the PIC16F13145 device family
 *
 **/
/*
© [2026] Microchip Technology Inc. and its subsidiaries.

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

/*
    The bitstream data can be accesed from C source code by referencing the 'start_clb_config' symbol as such:

    extern uint16_t start_clb_config;
    uint16_t clbStartAddress = (uint16_t) &start_clb_config;

    IMPORTANT: You must always use the address of these symbols and not the value of the symbols themselves.
               If values instead of addresses are used, the linker will silently generate incorrect code.

    uint16_t clbStartAddress = start_clb_config; // This is incorrect!

    NOTE: This module requires C preprocessing.
          This can be enabled via the command line option: -xassembler-with-cpp
*/


#include <xc.inc>

#if !( defined(_16F13113) || defined(_16F13114) || defined(_16F13115) || \
       defined(_16F13123) || defined(_16F13124) || defined(_16F13125) || \
       defined(_16F13143) || defined(_16F13144) || defined(_16F13145) )

    #error This assembly file is intended to be used only with the PIC16F13145 device family!

#endif

GLOBAL  _start_clb_config
GLOBAL  _end_clb_config

PSECT  clb_config,global,class=STRCODE,delta=2,noexec,optim=

_start_clb_config:
    DW  0x081C
    DW  0x0855
    DW  0x3DF2
    DW  0x0242
    DW  0x3BFE
    DW  0x281F
    DW  0x03E1
    DW  0x3E1F
    DW  0x03FF
    DW  0x3C01
    DW  0x1FFA
    DW  0x135F
    DW  0x2BEA
    DW  0x3E45
    DW  0x085D
    DW  0x3FD5
    DW  0x08DC
    DW  0x0854
    DW  0x3DFF
    DW  0x3E1F
    DW  0x3C80
    DW  0x3EA1
    DW  0x17EB
    DW  0x3CBF
    DW  0x32B4
    DW  0x0585
    DW  0x35FA
    DW  0x155F
    DW  0x2BEA
    DW  0x3F9F
    DW  0x30D9
    DW  0x3D9F
    DW  0x03E1
    DW  0x3C1F
    DW  0x21FC
    DW  0x3F80
    DW  0x33EC
    DW  0x3FFF
    DW  0x3FE1
    DW  0x3C02
    DW  0x150B
    DW  0x3CBF
    DW  0x0BF5
    DW  0x0CBF
    DW  0x17E5
    DW  0x3FFF
    DW  0x3FE1
    DW  0x3C05
    DW  0x14AB
    DW  0x3CBF
    DW  0x0BF0
    DW  0x3E1F
    DW  0x03F0
    DW  0x3F0A
    DW  0x36B0
    DW  0x13BF
    DW  0x33F8
    DW  0x099F
    DW  0x19F0
    DW  0x3E1F
    DW  0x03F0
    DW  0x3E1F
    DW  0x3FE0
    DW  0x09FF
    DW  0x03E1
    DW  0x3C1F
    DW  0x21F5
    DW  0x00BF
    DW  0x17E5
    DW  0x3E1F
    DW  0x329E
    DW  0x1782
    DW  0x03E1
    DW  0x3DFF
    DW  0x1E60
    DW  0x3E1F
    DW  0x03F0
    DW  0x3E14
    DW  0x2BFE
    DW  0x1745
    DW  0x0FE6
    DW  0x047F
    DW  0x07F0
    DW  0x3E1F
    DW  0x3FEF
    DW  0x0301
    DW  0x303C
    DW  0x051F
    DW  0x23F1
    DW  0x3D1F
    DW  0x11F8
    DW  0x3F1F
    DW  0x23E8
    DW  0x3F1F
    DW  0x23F1
    DW  0x3D1F
    DW  0x01E0
    DW  0x1C0C
    DW  0x00F5
    DW  0x21E1
    DW  0x0564
    DW  0x1E00
_end_clb_config:
