/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'MainCPU' in SOPC Builder design 'appli_Multi_PWM_sys'
 * SOPC Builder design path: ../../appli_Multi_PWM_sys.sopcinfo
 *
 * Generated: Wed Dec 15 15:27:19 CET 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Button configuration
 *
 */

#define ALT_MODULE_CLASS_Button altera_avalon_pio
#define BUTTON_BASE 0x8001070
#define BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_CAPTURE 1
#define BUTTON_DATA_WIDTH 3
#define BUTTON_DO_TEST_BENCH_WIRING 0
#define BUTTON_DRIVEN_SIM_VALUE 0
#define BUTTON_EDGE_TYPE "FALLING"
#define BUTTON_FREQ 100000000
#define BUTTON_HAS_IN 1
#define BUTTON_HAS_OUT 0
#define BUTTON_HAS_TRI 0
#define BUTTON_IRQ 1
#define BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_IRQ_TYPE "EDGE"
#define BUTTON_NAME "/dev/Button"
#define BUTTON_RESET_VALUE 0
#define BUTTON_SPAN 16
#define BUTTON_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x08000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "MainCPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x08000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTPLL


/*
 * HighResTimer configuration
 *
 */

#define ALT_MODULE_CLASS_HighResTimer altera_avalon_timer
#define HIGHRESTIMER_ALWAYS_RUN 0
#define HIGHRESTIMER_BASE 0x8001000
#define HIGHRESTIMER_COUNTER_SIZE 32
#define HIGHRESTIMER_FIXED_PERIOD 0
#define HIGHRESTIMER_FREQ 100000000
#define HIGHRESTIMER_IRQ 7
#define HIGHRESTIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HIGHRESTIMER_LOAD_VALUE 99
#define HIGHRESTIMER_MULT 1.0E-6
#define HIGHRESTIMER_NAME "/dev/HighResTimer"
#define HIGHRESTIMER_PERIOD 1
#define HIGHRESTIMER_PERIOD_UNITS "us"
#define HIGHRESTIMER_RESET_OUTPUT 0
#define HIGHRESTIMER_SNAPSHOT 1
#define HIGHRESTIMER_SPAN 32
#define HIGHRESTIMER_TICKS_PER_SEC 1000000
#define HIGHRESTIMER_TIMEOUT_PULSE_OUTPUT 0
#define HIGHRESTIMER_TYPE "altera_avalon_timer"


/*
 * JtagUART configuration
 *
 */

#define ALT_MODULE_CLASS_JtagUART altera_avalon_jtag_uart
#define JTAGUART_BASE 0x80010b0
#define JTAGUART_IRQ 5
#define JTAGUART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAGUART_NAME "/dev/JtagUART"
#define JTAGUART_READ_DEPTH 64
#define JTAGUART_READ_THRESHOLD 8
#define JTAGUART_SPAN 8
#define JTAGUART_TYPE "altera_avalon_jtag_uart"
#define JTAGUART_WRITE_DEPTH 64
#define JTAGUART_WRITE_THRESHOLD 8


/*
 * PLL configuration
 *
 */

#define ALT_MODULE_CLASS_PLL altpll
#define PLL_BASE 0x8001090
#define PLL_IRQ -1
#define PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PLL_NAME "/dev/PLL"
#define PLL_SPAN 16
#define PLL_TYPE "altpll"


/*
 * PWM_Latch configuration
 *
 */

#define ALT_MODULE_CLASS_PWM_Latch altera_avalon_pio
#define PWM_LATCH_BASE 0x8001050
#define PWM_LATCH_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_LATCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_LATCH_CAPTURE 0
#define PWM_LATCH_DATA_WIDTH 24
#define PWM_LATCH_DO_TEST_BENCH_WIRING 0
#define PWM_LATCH_DRIVEN_SIM_VALUE 0
#define PWM_LATCH_EDGE_TYPE "NONE"
#define PWM_LATCH_FREQ 100000000
#define PWM_LATCH_HAS_IN 0
#define PWM_LATCH_HAS_OUT 1
#define PWM_LATCH_HAS_TRI 0
#define PWM_LATCH_IRQ -1
#define PWM_LATCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_LATCH_IRQ_TYPE "NONE"
#define PWM_LATCH_NAME "/dev/PWM_Latch"
#define PWM_LATCH_RESET_VALUE 0
#define PWM_LATCH_SPAN 16
#define PWM_LATCH_TYPE "altera_avalon_pio"


/*
 * PWM_OnOff configuration
 *
 */

#define ALT_MODULE_CLASS_PWM_OnOff altera_avalon_pio
#define PWM_ONOFF_BASE 0x8001040
#define PWM_ONOFF_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_ONOFF_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_ONOFF_CAPTURE 0
#define PWM_ONOFF_DATA_WIDTH 24
#define PWM_ONOFF_DO_TEST_BENCH_WIRING 0
#define PWM_ONOFF_DRIVEN_SIM_VALUE 0
#define PWM_ONOFF_EDGE_TYPE "NONE"
#define PWM_ONOFF_FREQ 100000000
#define PWM_ONOFF_HAS_IN 0
#define PWM_ONOFF_HAS_OUT 1
#define PWM_ONOFF_HAS_TRI 0
#define PWM_ONOFF_IRQ -1
#define PWM_ONOFF_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_ONOFF_IRQ_TYPE "NONE"
#define PWM_ONOFF_NAME "/dev/PWM_OnOff"
#define PWM_ONOFF_RESET_VALUE 0
#define PWM_ONOFF_SPAN 16
#define PWM_ONOFF_TYPE "altera_avalon_pio"


/*
 * PWM_Ton configuration
 *
 */

#define ALT_MODULE_CLASS_PWM_Ton altera_avalon_pio
#define PWM_TON_BASE 0x8001060
#define PWM_TON_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_TON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_TON_CAPTURE 0
#define PWM_TON_DATA_WIDTH 10
#define PWM_TON_DO_TEST_BENCH_WIRING 0
#define PWM_TON_DRIVEN_SIM_VALUE 0
#define PWM_TON_EDGE_TYPE "NONE"
#define PWM_TON_FREQ 100000000
#define PWM_TON_HAS_IN 0
#define PWM_TON_HAS_OUT 1
#define PWM_TON_HAS_TRI 0
#define PWM_TON_IRQ -1
#define PWM_TON_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_TON_IRQ_TYPE "NONE"
#define PWM_TON_NAME "/dev/PWM_Ton"
#define PWM_TON_RESET_VALUE 0
#define PWM_TON_SPAN 16
#define PWM_TON_TYPE "altera_avalon_pio"


/*
 * Switch configuration
 *
 */

#define ALT_MODULE_CLASS_Switch altera_avalon_pio
#define SWITCH_BASE 0x8001080
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 4
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 100000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/Switch"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JtagUART"
#define ALT_STDERR_BASE 0x80010b0
#define ALT_STDERR_DEV JtagUART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JtagUART"
#define ALT_STDIN_BASE 0x80010b0
#define ALT_STDIN_DEV JtagUART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JtagUART"
#define ALT_STDOUT_BASE 0x80010b0
#define ALT_STDOUT_DEV JtagUART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "appli_Multi_PWM_sys"


/*
 * SystemTimer configuration
 *
 */

#define ALT_MODULE_CLASS_SystemTimer altera_avalon_timer
#define SYSTEMTIMER_ALWAYS_RUN 0
#define SYSTEMTIMER_BASE 0x8001020
#define SYSTEMTIMER_COUNTER_SIZE 32
#define SYSTEMTIMER_FIXED_PERIOD 0
#define SYSTEMTIMER_FREQ 100000000
#define SYSTEMTIMER_IRQ 6
#define SYSTEMTIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYSTEMTIMER_LOAD_VALUE 99999
#define SYSTEMTIMER_MULT 0.001
#define SYSTEMTIMER_NAME "/dev/SystemTimer"
#define SYSTEMTIMER_PERIOD 1
#define SYSTEMTIMER_PERIOD_UNITS "ms"
#define SYSTEMTIMER_RESET_OUTPUT 0
#define SYSTEMTIMER_SNAPSHOT 1
#define SYSTEMTIMER_SPAN 32
#define SYSTEMTIMER_TICKS_PER_SEC 1000
#define SYSTEMTIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYSTEMTIMER_TYPE "altera_avalon_timer"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYSTEMTIMER
#define ALT_TIMESTAMP_CLK HIGHRESTIMER


/*
 * lcd_16207_0 configuration
 *
 */

#define ALT_MODULE_CLASS_lcd_16207_0 altera_avalon_lcd_16207
#define LCD_16207_0_BASE 0x80010a0
#define LCD_16207_0_IRQ -1
#define LCD_16207_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_16207_0_NAME "/dev/lcd_16207_0"
#define LCD_16207_0_SPAN 16
#define LCD_16207_0_TYPE "altera_avalon_lcd_16207"


/*
 * new_sdram_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_new_sdram_controller_0 altera_avalon_new_sdram_controller
#define NEW_SDRAM_CONTROLLER_0_BASE 0x0
#define NEW_SDRAM_CONTROLLER_0_CAS_LATENCY 3
#define NEW_SDRAM_CONTROLLER_0_CONTENTS_INFO
#define NEW_SDRAM_CONTROLLER_0_INIT_NOP_DELAY 0.0
#define NEW_SDRAM_CONTROLLER_0_INIT_REFRESH_COMMANDS 2
#define NEW_SDRAM_CONTROLLER_0_IRQ -1
#define NEW_SDRAM_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define NEW_SDRAM_CONTROLLER_0_IS_INITIALIZED 1
#define NEW_SDRAM_CONTROLLER_0_NAME "/dev/new_sdram_controller_0"
#define NEW_SDRAM_CONTROLLER_0_POWERUP_DELAY 200.0
#define NEW_SDRAM_CONTROLLER_0_REFRESH_PERIOD 7.8125
#define NEW_SDRAM_CONTROLLER_0_REGISTER_DATA_IN 1
#define NEW_SDRAM_CONTROLLER_0_SDRAM_ADDR_WIDTH 0x19
#define NEW_SDRAM_CONTROLLER_0_SDRAM_BANK_WIDTH 2
#define NEW_SDRAM_CONTROLLER_0_SDRAM_COL_WIDTH 10
#define NEW_SDRAM_CONTROLLER_0_SDRAM_DATA_WIDTH 32
#define NEW_SDRAM_CONTROLLER_0_SDRAM_NUM_BANKS 4
#define NEW_SDRAM_CONTROLLER_0_SDRAM_NUM_CHIPSELECTS 1
#define NEW_SDRAM_CONTROLLER_0_SDRAM_ROW_WIDTH 13
#define NEW_SDRAM_CONTROLLER_0_SHARED_DATA 0
#define NEW_SDRAM_CONTROLLER_0_SIM_MODEL_BASE 0
#define NEW_SDRAM_CONTROLLER_0_SPAN 134217728
#define NEW_SDRAM_CONTROLLER_0_STARVATION_INDICATOR 0
#define NEW_SDRAM_CONTROLLER_0_TRISTATE_BRIDGE_SLAVE ""
#define NEW_SDRAM_CONTROLLER_0_TYPE "altera_avalon_new_sdram_controller"
#define NEW_SDRAM_CONTROLLER_0_T_AC 5.5
#define NEW_SDRAM_CONTROLLER_0_T_MRD 3
#define NEW_SDRAM_CONTROLLER_0_T_RCD 20.0
#define NEW_SDRAM_CONTROLLER_0_T_RFC 70.0
#define NEW_SDRAM_CONTROLLER_0_T_RP 20.0
#define NEW_SDRAM_CONTROLLER_0_T_WR 14.0

#endif /* __SYSTEM_H_ */
