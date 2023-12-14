#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
  * printf - prints user gigam playing integers and jackpot msg
  * @format: characters of the msg
  * Return: user play integers and jackpot msg
  */
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
