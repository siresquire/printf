# printf Team Project Contributors;
- Aminu Twumasi | @siresquire
- Luc Telesphore | @T-LES

# 0x11. C - printf

# Requirements
# General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

# GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

# 0. Write a function that produces output according to a format.
- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  - `c`
  - `s`
  - `%`
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

# 1. Handle the following conversion specifiers:
   - `d`
   - `i`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

# 2. Handle the following custom conversion specifiers:
- `b`: the unsigned int argument is converted to binary

# 3. Handle the following conversion specifiers:
- `u`
- `o`
- `x`
- `X`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

# 4. Use a local buffer of 1024 chars in order to call `write` as little as possible.

# 5. Handle the following custom conversion specifier:
- `S` : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

# 6. Handle the following conversion specifier: `p`.
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

# 7. Handle the following flag characters for non-custom conversion specifiers:
- `+`
- space
- `#`

# 8. Handle the following length modifiers for non-custom conversion specifiers:
- `l`
- `h`
- Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

# 9. Handle the field width for non-custom conversion specifiers.

# 10. Handle the precision for non-custom conversion specifiers.

# 11. Handle the `0` flag character for non-custom conversion specifiers.

# 12. Handle the `-` flag character for non-custom conversion specifiers.

# 13. Handle the following custom conversion specifier:
- `r` : prints the reversed string

# 14. Handle the following custom conversion specifier:
- `R`: prints the rot13'ed string

# 15. All the above options work well together.
















































