#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;  // To store the number of characters printed

    while (*format != '\0') {
        if (*format == '%') {
            format++;  // Move to the character after '%'

            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's': {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0') {
                        count += putchar(*str);
                        str++;
                    }
                    break;
                }
                case '%':
                    count += putchar('%');
                    break;
                default:
                    // Unsupported specifier, ignore
                    break;
            }
        } else {
            count += putchar(*format);
        }

        format++;  // Move to the next character in the format string
    }

    va_end(args);

    return count;
}

int main() {
    _printf("I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life\n");
    _printf("This is a char: %c\n", 'A');
    _printf("This is a string: %s\n", "Hello, World!");
    _printf("This is a percent sign: %%\n");

    return 0;
}
