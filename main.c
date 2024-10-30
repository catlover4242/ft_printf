#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;

    // Test de base avec des chaînes et des entiers
    printf("===== Tests de base =====\n");
    ret1 = ft_printf("Hello, %s! You have %d new messages.\n", "World", 5);
    ret2 = printf("Hello, %s! You have %d new messages.\n", "World", 5);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test des caractères
    printf("===== Test des caractères =====\n");
    ret1 = ft_printf("Character: %c\n", 'A');
    ret2 = printf("Character: %c\n", 'A');
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test des nombres entiers
    printf("===== Test des entiers =====\n");
    ret1 = ft_printf("Integer: %d\n", -42);
    ret2 = printf("Integer: %d\n", -42);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test des nombres non signés
    printf("===== Test des entiers non signés =====\n");
    ret1 = ft_printf("Unsigned: %u\n", 42);
    ret2 = printf("Unsigned: %u\n", 42);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test des hexadécimaux
    printf("===== Test des hexadécimaux =====\n");
    ret1 = ft_printf("Hexadecimal: %x\n", 255);
    ret2 = printf("Hexadecimal: %x\n", 255);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test des pointeurs
    printf("===== Test des pointeurs =====\n");
    int a = 0;
    ret1 = ft_printf("Pointer: %p\n", (void*)&a);
    ret2 = printf("Pointer: %p\n", (void*)&a);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    // Test du caractère '%' 
    printf("===== Test du caractère %% =====\n");
    ret1 = ft_printf("Percent: %%\n");
    ret2 = printf("Percent: %%\n");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ret1, ret2);

    return 0;
}