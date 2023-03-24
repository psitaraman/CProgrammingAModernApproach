#include <stdio.h> //includes info on standard C input/output libraries

// main program with no inputs and return type int
void pun() {
	// print desired message with new line at the end
	printf("To C, or not to C: that is the question.\n");
}

// *** Note: `n` notation, where n can be anything, is used to highlight key terms
/* The following steps are done when running a C program:

	1. Preprocessing - program is given to a `preprocessor`
		which computes instructions begining with `#`. 
		Instructions beginning with `#` are called `directives`
		This stage is called `preprocessing` because it modifies code 
		based on the `directives` before the `compilation` step can proceed.

	2. Compiling - The modified program is then fed to a `compiler` which 
		`compiles` the human readable code into machine code instructions 
		called `object code`.
		
	3. Linking - The compiled `object code` is then combined with additional files
		such as libraries, other `object code`, media resources etc. using a `linker`. 
		The `linker` is responsible for `linking` all files and resources needed to 
		create a working executable program. 
		In C programs usually a `MAKE` file is used to facilitate and automate the
		execution of the `linking` of various files in order to create the executable. 

	For compilation and linking with Linux systems, use `gcc`
	For compilation and linking with UNIX systems, use `cc`
	For compilation and linking with Mac OSX, use `cc` or `gcc`

	Compile and Link Command:
	% cc pun.c     
	-> generates output file with default name `a.out`

	% cc -o pun pun.c
	-> generates output file with name `pun`
	
	Run output file
	% ./a.out
	% ./pun
	-> To C, or not to C: that is the question.

Simple C programs have the form:

Directives

int main(void) {
	
	declarations

	statments

}

Directives - editing commands used to indicate places for program modification 
				 prior to the onset of the compilation phase.
				 Example: #include <stdio.h>
				 		  This directive states that the information in 
				 		  `<stdio.h>` (a standard I/O library) should be 
				 		  included prior to program compilation.
				 		  There is no ; or special marker at the end of 
				 		  directives. This is unlike most other C statements 
				 		  where ; is required to indicate statment termination.

Functions - subroutines used to encapsulate logical statments. This 
			encapsulation allows for reproduceability and maintainability of 
			code. C programs are little more than a collection of functions.
			The `main()` function is mandatory in C since it is the predefined 
			entry point into the program.
			Functions also may take in inputs/arguments and provide outputs. 
			If no input/output wish to be provided/given then the respecitve 
			input/output function type should be marked as `void`.
			Example: void main(void) { return; }


Arithmetic on `float` numbers are slower than arithmetic on `int` numbers.
`float` can store much larger numbers than `int`.
The value of a `float` number is often an approximation. This is common
with irrational number like 0.99999... which will be approximated to 
0.99999..87

Variable declaration:
int height;
float profit;

It is best to append the letter `f` (for float) to a constant that 
contains a decimal point.
float profit = 2150.48f;

*/


