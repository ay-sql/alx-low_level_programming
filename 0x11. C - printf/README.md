**Project Overview: Replicating printf Function**

In our first group project at Holberton School, we are tasked with replicating the functionality of the `printf` function in C, naming our implementation `_printf`. This function is a part of the standard library `<cstdio>` and requires the inclusion of the header file `<stdio.h>`.

### Functionality

The `_printf` function writes a C string to the standard output (`stdout`). If the format string includes format specifiers (indicated by `%`), the function formats and inserts additional arguments in the resulting string.

### Format Specifiers

The function handles the following conversion specifiers:

- `%c`: Character
- `%s`: String of characters
- `%%`: Percentage sign
- `%d` and `%i`: Signed decimal integer
- `%b`: Unsigned binary
- `%u`: Unsigned decimal integer
- `%o`: Unsigned octal
- `%x`: Unsigned hexadecimal integer (lowercase)
- `%X`: Unsigned hexadecimal integer (uppercase)
- `%r`: Reversed string
- `%R`: Rot13 string

### Return Value

On success, the function returns the total number of characters printed (excluding the null byte used to end output to strings). In case of a writing error, a negative number is returned.

### Tasks

- **Task 1:** Implement basic functionality for `%c`, `%s`, and `%%`.
- **Task 2:** Extend functionality to handle `%d` and `%i`.

### Functions Used

- `_putchar`: Writes a character to `stdout`.
- `print_char`: Prints a character.
- `print_string`: Prints a string.
- `print_int`: Prints an integer.
- `print_dec`: Prints a decimal.

### Compilation

Compile all `.c` files with `gcc 4.8.4` on Ubuntu 14.04 LTS using the flags `-Wall -Werror -Wextra -pedantic`.

### Usage Example

```c
#include "holberton.h"

int main(void)
{
    int num;
    char *string;

    num = 98;
    string = "Hello, Holberton!";
    _printf("%s is %i.\n", string, num);

    return (0);
}
gcc -Wall -Werror -Wextra -pedantic *.c -o print_program
./print_program
