# WeThinkCode_--ft_printf--
Recreating the traditional printf() function

ft_pintf is a project from the WeThinkCode curriculum. The purpose of the project is to recreate the traditional printf
with this function written in C.

### FEATURES
###### Ability to print multiple types of data. (eg. intergers, characters, pointers, decimals, ...)
###### Ability to add padding to printed text.
###### Ability to set a max width to printed text.
###### Ability to set a min width to printed text.

### SUPPORTED TYPES
###### %c (single characters)
###### %d (decimal base 10)
###### %i (interger base 10)
###### %o (octal base 8)
###### %p (pointer value)
###### %s (string of characters)
###### %u (unsigned decimal base 10)
###### %x (hexadecimal base 16)
###### %C (single wide characters)
###### %D (long decimal base 10)
###### %S (string containing wide characters)
###### %U (long unsigned decimal base 10)
###### %X (uppercase hexadecimal base 16)

### SUPPORTED FLAGS
###### %% (prints %)
###### %h  (unsigned short)
###### %hh (unsigned char)
###### %l  (long)
###### %ll (long long)
###### %j  (int_max)
###### %z  (size_t)
###### %#  (use altenate form)
###### %0  (adds 0 as justification)
###### %-  (left justify)
###### %+  (add positive to numbers)
###### %space (add space before print)
###### %(number) (adds field width)
###### %. (adds precision)

### UNSUPPORTED
###### %a
###### %e
###### %f
###### %g
###### %n
###### %b (binary)
###### %r (string of non printable characters)
###### %k (Date in any ISO format)
###### %A
###### %E
###### %F
###### %G
###### %L
###### %*
###### %$
###### '

### KNOWN BUGS
###### %. (precision has bus when using it with a %s string)
