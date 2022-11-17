### I.The Function:

ft_printf writes the C string pointed by format to the standard output (stdout). If format includes format specifiers (subsequences beginning with %), the additional arguments following format are formatted and inserted in the resulting string replacing their respective specifiers.

prototype: **int	ft_printf(const char *format, ... )**;

| Specifier | Description |
| ------------ | ------------ |
|**c**| character|
|**s**|	NULL - terminated string|
|**p**|	pointer memory address|
|**d**| signed decimal base|
|**i**|	signed decimal base|
|**u**|	unsigned decimal base|
|**x**|	unsigned hex base (lowercase)|
|**X**|	unsigned hex base (uppercase)|
|**%**|	'%' char literal|

| Flag | Description |
| ------------ | ------------|
|**-**|	left-justify within he given field width; right justification is the default|
|**0**|	left-pads the number with zeroes (0) instead of spaces when padding is specified|
