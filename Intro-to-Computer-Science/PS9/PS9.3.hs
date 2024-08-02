{-
CH-232-A
a9_p3.[hs]
Amine Chahi
m.chahi@jacobs-university.de
-}
{-
The 32-bit RISC-V base integer instruction set (rv32i) does not support multiplication and division
operations. To deal with this, a compiler may call a function when a multiplication is needed. For
example, gcc expects that a function mulsi3(unsigned int a, unsigned int b) is provided to
multiply two integers. A multiplication can be carried out by repeated additions and shifts:

unsigned int __mulsi3 (unsigned int a, unsigned int b)
{
   unsigned int r = 0;
   
   while (a) {
       if (a & 1) {
          r += b;
       }
       a >>= 1;
       b <<= 1;
   }

return r;
}

a) Translate the above C code into equivalent RISC-V rv32i assembler code. Comment the as-
sembler code to explain how the calculation proceeds. Note that the arguments are passed via

the registers a0 (x10) and a1 (x11) and that the result is returned in a0 (x10).
b) Does the function need function call prolog and epilog? Explain why or why not.
You are invited to use emulsiV to develop and test your assembler code.
-}

--Solution: 

--a) The following assembler code for mulsi3() was derived from compiling the C code into rv32i
--assembler using optimization (-O2) and then commenting it.

  __mulsi3:
	mv a5,a0		; a5 = a0 ; copy argument a into a5
	li a0,0 		; a0 = 0 ; initialize the r to 0
	beq a5,zero,.L3 	; pc = .L3 if a5 == 0

  .L1:
	andi a4,a5,1 		; a4 = a5 & 1 ; extract the left most bit
	srli a5,a5,1 		; a5 = a5 >> 1 ; shift a5 right by 1 position
	beq a4,zero,.L2 	; pc = .L2 if a4 == 0
	add a0,a0,a1 		; a0 = a0 + a1 ; add argument b to r
  
  .L2:
	slli a1,a1,1 		; a1 = a1 << 1 ; shift a1 left by 1 position
	bne a5,zero,.L1 	; pc = .L1 if a5 != 0

  .L3:
	ret 			; return

--Alternate handcrafted version that avoids needless jumps.

  __mulsi3:
	mv a2, a0 ; a2 = a0	; copy argument a into a2
	li a0, 0 ; a0 = 0	; initialize the r to 0
  .L1:
	andi a3,a1, 1		; a3 = a1 & 1 ; extract the left most bit
	beqz a3,.L2		; pc = .L2 if a3 == 0
	add a0,a0,a2		; a0 = a0 + a2 ; add argument a to r
  .L2:
	srli a1,a1,1            ; a1 = a1 >> 1 ; shift a1 right by 1 position
	slli a2,a2,1		; a2 = a2 << 1 ; shift a2 left by 1 position
	bnez a1,.L1 		; pc = .L1 if a1 != 0
	ret 			; return

--b) Since the function doesn't exec any calls, it isn't required to allocate a stack frame.
--The return address stays in the return register ra (x1) and the local variable used to hold the
--product could be kept in a register 