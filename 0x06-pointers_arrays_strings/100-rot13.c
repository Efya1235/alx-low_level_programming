#include "main.h"
/**
 * rot13 - encodes strings
 * @s: input string
 * Return: the dest pointer
 */

char *rot13(char *s)
{
	int g, h;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (g = 0; s[g] != '\0'; g++

