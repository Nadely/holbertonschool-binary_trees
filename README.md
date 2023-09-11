# Monty ByteCodes files interpreter Project

Welcome to our Monty ByteCodes files interpreter Project! This is a Monty ByteCodes files interpreter written in C.

## Description
Monty ByteCodes files interpreter executes commands read from a monty file. Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.
It is developed in C language.

## Prototype : int main(int argc, char *argv[])

## Table of Contents
- [Installation](#installation)
- [List of built-in commands](#list-of-built_in-commands)
- [Usage](#usage)
- [Functions used](#functions-used)
- [Features](#features)
- [Examples](#examples)
- [Exit Status](#exit-status)
- [Flowchart](#flowchart)
- [Contributions](#contributions)
- [License](#license)
- [Authors](#authors)

## Installation
1. Clone this repository: `git clone git@github.com:NathalieMet/holbertonschool-monty.git`
2. Compile the source code: `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`
3. Run the shell: `./monty`

This repository contains all the code required for a custom function called Monty ByteCodes files interpreter. This project was carried out as part of Holberton School's learning program.

## List of built_in commands
Here is a list of our built-in commands
1. add : The opcode add adds the top two elements of the stack.
2. create_node : creates a node
3. free_stack : Frees the stack
4. nop : The opcode nop doesn’t do anything.
5. pall : The opcode pall prints all the values on the stack, starting from the top of the stack.
6. pint : The opcode pint prints the value at the top of the stack, followed by a new line.
7. pop : The opcode pop removes the top element of the stack.
8. push : The opcode push pushes an element to the stack.
9. swap : The opcode swap swaps the top two elements of the stack.

## Usage
This shell reads a monty file line by line, then execute it if a command is found, or print an error message.

## Functions used
``` c
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

add.c
create_node.c
free_stack.c
main.c
nop.c
pall.c
pint.c
pop.c
push.c
swap.c

```
## Features
- Basic command execution

## Examples
1. Push an element to the stack: `push 1`
2. Remove the top element from the stack: `pop`
3. prints all the values on the stack, starting from the top of the stack.: `pall`

## Exit Status
- **EXIT_FAILURE**: General error
- **EXIT_SUCCESS**: Execution success

## Flowchart
![flowchart](https://github.com/NathalieMet/holbertonschool-monty/blob/main/stacks%20queues.drawio.png)

## Contributions
Contributions are welcome! Feel free to submit pull requests or report issues.

## License
This project is not currently licensed and is intended for educational purposes only. As a student project, it does not come with any licensing terms. Please be aware of the legal implications of using and distributing code without a proper license.

## Authors
Solomon William -> https://github.com/Scotty-Scott-1
Nathalie Metreau -> https://github.com/NathalieMet
