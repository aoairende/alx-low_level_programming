#include "main.h"

/**
 * binary_to_unit - Entry point
 *
 * Description: Write a function that converts a binary number to a
 * unsigned int.
 *
 * @b: points to a string of chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    if (b == NULL) {
        return 0;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0' || b[i] == '1') {
            result = result << 1;
            result += b[i] - '0';
        } else {
            return 0;
        }
    }
    return result;
}
