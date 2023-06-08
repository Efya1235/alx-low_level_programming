#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int modify_bit_value(unsigned long int *n, unsigned int index);
unsigned int count_flipped_bits(unsigned long int n, unsigned long int m);
int determine_endianness(void);

#endif
