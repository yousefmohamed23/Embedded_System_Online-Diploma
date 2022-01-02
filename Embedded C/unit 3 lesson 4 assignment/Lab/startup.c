#include <stdint.h>
//#define Stack_Top 0x20001000
/*vector section -> we need to put vector sections at 0x08000000 
 "start of flash" for setting sp and the reset of vector table 
*/
void Reset_Handler();
void default_Handler()
{
	Reset_Handler();
}
// Create Unintilized global array which will allocated in bss section 
// after .bss section is allocated -> stack top will be adderresed 
//stacktop = Unintilized global array + size;

static unsigned long Stack_Top[256];
extern int main();

/*For copying data from flash to sram and allocate space for bss and stack*/
extern unsigned int _E_text_;
extern unsigned int _S_data_;
extern unsigned int _E_data_;
extern unsigned int _S_bss_;
extern unsigned int _E_bss_;

//extern unsigned int _stack_top;

void NMI_Handler()__attribute__((weak,alias ("default_Handler")));;
void Hardfault_Handler()__attribute__((weak,alias ("default_Handler")));;
void MemoryManagement_Handler()__attribute__((weak,alias ("default_Handler")));;

//array of const pointers to function takes () and return void


void (* const g_u_vectors[])() __attribute__((section(".vectors")))=
{
(void (*)()) ((unsigned long )Stack_Top + sizeof(Stack_Top)),
Reset_Handler,
NMI_Handler,
Hardfault_Handler,
MemoryManagement_Handler
};

/*
uint32_t vectors [] __attribute__((section(".vectors")))={
(uint32_t) &_stack_top,
(uint32_t) &Reset_Handler,
(uint32_t) &NMI_Handler,
(uint32_t) &Hardfault_Handler,
(uint32_t) &MemoryManagement_Handler
};
*/



void Reset_Handler()
{
	/*Copying data section*/
	/*Get size of Data section  size  = end - start*/
	unsigned int Data_Size = (uint8_t*) & _E_data_ - (uint8_t*) & _S_data_ ;
	
	unsigned char * data_dest = (unsigned char *) &_S_data_;
	unsigned char * data_src = (unsigned char *) &_E_text_;
	
	for(int i = 0 ; i<Data_Size ; i++)
	{
		*((unsigned char *)data_dest++)= *((unsigned char *)data_src++);
	}

	/*Reserve Bss section */
	unsigned int Bss_Size = (uint8_t*) & _E_bss_ - (uint8_t*) & _S_bss_ ;
	unsigned char * bss_dest = (unsigned char *) & _S_bss_;
	for(int i = 0 ; i<Bss_Size ; i++)
	{
		*((unsigned char * )bss_dest++) = (unsigned char ) 0;
	}
	//jump to main

	main();
}