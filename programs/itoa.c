#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void *memcalloc(size_t nmemb, size_t size) {
    if (size != 0 && nmemb > SIZE_MAX / size)
        return NULL;

    size_t total = nmemb * size;
    void *ptr = malloc(total);
    if (!ptr)
        return NULL;

    char *p = ptr;
    while (total--)
        *p++ = 0;

    return ptr;
}

void *memmcpy(void *dst, const void *src, size_t n) {
    unsigned char *d = dst;
    const unsigned char *s = src;

    while (n--)
        *d++ = *s++;

    return dst;
}

char *itoa(int n) {
    char arr[11];
    long nb = n;
    int i = 10;

    if (nb < 0)
        nb = -nb;

    if (nb == 0)
        arr[--i] = '0';

    while (nb) {
        arr[--i] = (nb % 10) + '0';
        nb /= 10;
    }

    if (n < 0)
        arr[--i] = '-';

    int len = 10 - i;
    char *out = memcalloc(len + 1, sizeof(char));
    if (!out)
        return NULL;

    memmcpy(out, arr + i, len);
    return out;
}

int main(void) {
    char *s = itoa(42);
    printf("%s\n", s);
    free(s);
}
