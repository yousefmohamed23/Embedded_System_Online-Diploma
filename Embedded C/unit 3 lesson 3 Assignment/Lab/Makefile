#@copywrite : Youssef Maaty
#Generic for any toolchain or compiler
CC=arm-none-eabi-
#Most common  list of flags to pass to the compilation command
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 
#for "inlcudes files"
INCS= -I .
#for static library
LIBS= 
#take all files .c and insert them in SRC
SRC=$(wildcard *.c)
#take anyfile .c in SRC and convert it to .o 
OBJ=$(SRC:.c=.o)
#take all files .s and insert them in AS
AS=$(wildcard *.s)
#take anyfile .s in AS and convert it to .o 
ASOBJ=$(AS:.s=.o)
#Project name
PROJECT_NAME =learn_in_depth_cortex_m3

all: $(PROJECT_NAME).bin
	@echo "<<<< Building process is done >>>>>>"
	
#startup.o: startup.s
#$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS)  -c  $< -o $@

$(PROJECT_NAME).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -g -T Linkerscript.ld $(LIBS) $(ASOBJ) $(OBJ) -o $@ -Map=Map_file.map

$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin *.map
clean:
	rm *.elf *.bin *.map