#include <stdint.h>

#define KILOBYTE    1024
void main(void)
{
    uint32_t* dummyAddr = (uint32_t *)(1024 * 1024 * 100);
    *dummyAddr = sizeof(long);

    return;
}