
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <Uart_Send_String>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261656c 	rsbvc	r6, r1, #452984832	; 0x1b000000
   4:	6e69206e 	cdpvs	0, 6, cr2, cr9, cr14, {3}
   8:	70656420 	rsbvc	r6, r5, r0, lsr #8
   c:	3a206874 	bcc	81a1e4 <main+0x81a1e4>
  10:	756f5920 	strbvc	r5, [pc, #-2336]!	; fffff6f8 <main+0xfffff6f8>
  14:	66657373 	undefined instruction 0x66657373
  18:	00000020 	andeq	r0, r0, r0, lsr #32
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; 0xffffff48
  18:	0b3a0e03 	bleq	e8382c <main+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	00000640 	andeq	r0, r0, r0, asr #12
  28:	49010103 	stmdbmi	r1, {r0, r1, r8}
  2c:	00130113 	andseq	r0, r3, r3, lsl r1
  30:	00210400 	eoreq	r0, r1, r0, lsl #8
  34:	0b2f1349 	bleq	bc4d60 <main+0xbc4d60>
  38:	24050000 	strcs	r0, [r5]
  3c:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  40:	0600000b 	streq	r0, [r0], -fp
  44:	0b0b0024 	bleq	2c00dc <main+0x2c00dc>
  48:	0e030b3e 	vmoveq.16	d3[0], r0
  4c:	34070000 	strcc	r0, [r7]
  50:	3a0e0300 	bcc	380c58 <main+0x380c58>
  54:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  58:	3c0c3f13 	stccc	15, cr3, [ip], {19}
  5c:	0800000c 	stmdaeq	r0, {r2, r3}
  60:	0e030034 	mcreq	0, 0, r0, cr3, cr4, {1}
  64:	0b3b0b3a 	bleq	ec2d54 <main+0xec2d54>
  68:	0c3f1349 	ldceq	3, cr1, [pc], #-292	; 0xfffffedc
  6c:	00000a02 	andeq	r0, r0, r2, lsl #20
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000070 	andeq	r0, r0, r0, ror r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	tsteq	r4, r0
   c:	00000053 	andeq	r0, r0, r3, asr r0
  10:	00006d01 	andeq	r6, r0, r1, lsl #26
	...
  1c:	00001800 	andeq	r1, r0, r0, lsl #16
  20:	00000000 	andeq	r0, r0, r0
  24:	73010200 	movwvc	r0, #4608	; 0x1200
  28:	01000000 	tsteq	r0, r0
  2c:	00000103 	andeq	r0, r0, r3, lsl #2
  30:	00180000 	andseq	r0, r8, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	4d030000 	stcmi	0, cr0, [r3]
  3c:	4a000000 	bmi	44 <.debug_info+0x44>
  40:	04000000 	streq	r0, [r0]
  44:	0000004a 	andeq	r0, r0, sl, asr #32
  48:	04050063 	streq	r0, [r5], #-99	; 0x63
  4c:	08010607 	stmdaeq	r1, {r0, r1, r2, r9, sl}
  50:	0000005f 	andeq	r0, r0, pc, asr r0
  54:	00004507 	andeq	r4, r0, r7, lsl #10
  58:	3a020100 	bcc	80460 <main+0x80460>
  5c:	01000000 	tsteq	r0, r0
  60:	00450801 	subeq	r0, r5, r1, lsl #16
  64:	02010000 	andeq	r0, r1, #0
  68:	0000003a 	andeq	r0, r0, sl, lsr r0
  6c:	00030501 	andeq	r0, r3, r1, lsl #10
  70:	00000000 	andeq	r0, r0, r0

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000031 	andeq	r0, r0, r1, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	tsteq	r2, r0
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	tsteq	r0, r0
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0]
  28:	00000002 	andeq	r0, r0, r2
  2c:	4b4b1500 	blmi	12c5434 <main+0x12c5434>
  30:	01000402 	tsteq	r0, r2, lsl #8
  34:	Address 0x00000034 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_pubnames:

00000000 <.debug_pubnames>:
   0:	00000029 	andeq	r0, r0, r9, lsr #32
   4:	00000002 	andeq	r0, r0, r2
   8:	00740000 	rsbseq	r0, r4, r0
   c:	00250000 	eoreq	r0, r5, r0
  10:	616d0000 	cmnvs	sp, r0
  14:	61006e69 	tstvs	r0, r9, ror #28
  18:	73000000 	movwvc	r0, #0
  1c:	6e697274 	mcrvs	2, 3, r7, cr9, cr4, {3}
  20:	75625f67 	strbvc	r5, [r2, #-3943]!	; 0xf67
  24:	72656666 	rsbvc	r6, r5, #106954752	; 0x6600000
  28:	00000000 	andeq	r0, r0, r0
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	455c3a46 	ldrbmi	r3, [ip, #-2630]	; 0xa46
   4:	6465626d 	strbtvs	r6, [r5], #-621	; 0x26d
   8:	20646564 	rsbcs	r6, r4, r4, ror #10
   c:	74737953 	ldrbtvc	r7, [r3], #-2387	; 0x953
  10:	4f206d65 	svcmi	0x00206d65
  14:	6e696c6e 	cdpvs	12, 6, cr6, cr9, cr14, {3}
  18:	69642065 	stmdbvs	r4!, {r0, r2, r5, r6, sp}^
  1c:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; 0xfffffe40
  20:	654b2061 	strbvs	r2, [fp, #-97]	; 0x61
  24:	656c6f72 	strbvs	r6, [ip, #-3954]!	; 0xf72
  28:	6e755c73 	mrcvs	12, 3, r5, cr5, cr3, {3}
  2c:	33207469 	teqcc	r0, #1761607680	; 0x69000000
  30:	626d4520 	rsbvs	r4, sp, #134217728	; 0x8000000
  34:	65646465 	strbvs	r6, [r4, #-1125]!	; 0x465
  38:	5c432064 	mcrrpl	0, 6, r2, r3, cr4
  3c:	7373656c 	cmnvc	r3, #452984832	; 0x1b000000
  40:	32206e6f 	eorcc	r6, r0, #1776	; 0x6f0
  44:	72747300 	rsbsvc	r7, r4, #0
  48:	5f676e69 	svcpl	0x00676e69
  4c:	66667562 	strbtvs	r7, [r6], -r2, ror #10
  50:	47007265 	strmi	r7, [r0, -r5, ror #4]
  54:	4320554e 	teqmi	r0, #327155712	; 0x13800000
  58:	352e3420 	strcc	r3, [lr, #-1056]!	; 0x420
  5c:	7500302e 	strvc	r3, [r0, #-46]	; 0x2e
  60:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
  64:	2064656e 	rsbcs	r6, r4, lr, ror #10
  68:	72616863 	rsbvc	r6, r1, #6488064	; 0x630000
  6c:	70706100 	rsbsvc	r6, r0, r0, lsl #2
  70:	6d00632e 	stcvs	3, cr6, [r0, #-184]	; 0xffffff48
  74:	006e6961 	rsbeq	r6, lr, r1, ror #18

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 	undefined instruction 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e352e34 	mrccs	14, 1, r2, cr5, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 	undefined instruction 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	42080e42 	andmi	r0, r8, #1056	; 0x420
  24:	028b018e 	addeq	r0, fp, #-2147483613	; 0x80000023
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
