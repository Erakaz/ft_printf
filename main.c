#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
    printf("Printf avec un int et un hexa : %d %x\n", 5, 255);
    ft_printf("ft_printf avec un int et un hexa : %d %x\n", 5, 255);
    return (0);
}