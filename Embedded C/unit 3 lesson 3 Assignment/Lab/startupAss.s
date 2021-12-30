/*Startup.s Cortex m3 
Youssef Mohamed
*/

.section .vector /* assembler command for creating named sections inside .o file */



.word 0x20001000 /*Addr of stack_top*/
.word _reset /*_reset sybmbol is an address*/
.word vector_handler /*NMI handler */
.word vector_handler /*Hard fault handler */
.word vector_handler /*Memory Management  handler */
.word vector_handler /*Bus handler */
.word vector_handler /*Reserved handler */

.section .text
_reset:
	bl main
	b . 

.thumb_func /* cpu for dealing with 16 or 32 bit instruction sets */

vector_handler:
	b _reset
