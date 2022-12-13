The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty bytecodes. It relies on a unique stack, with specific instructions to manipulate it. The goal of the project is to create an interpreter for monty bytecodes files.

The monty program

	* Usage: monty file
		- where file is the path to the file containing monty byte code.
	* If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line and exit with the status EXIT_FAILURE
	* If, for any reason, it is not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
		- where <file> is the name of the file.
	* If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, folloed by a new line, and exit with status EXIT_FAILURE.
		- where is the line number where the instruction appears.
		- Line numbers always start at 1
	* The monty program runs the bytecodes line by line and stop if either:
		- it executed properly every line of the file
		- it finds an error in the file
		- an error occured
	* If you can't malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
