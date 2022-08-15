// text section 
.text
    // 32bit instruction set
    .code 32
    // global variable(extern)
    .global vector_start
    .global vector_end

    vector_start:
        MOV     R0, R1
    vector_end:
        .space  1024, 0 // set 1024byte to zero at this point

.end

/* 
arm-none-eabi-as -march=armv7-a -mcpu=cortex-a8 -o Entry.o ./Entry.S 
arm-none-eabi-objcopy -O binary Entry.o Entry.bin
hexdump Entry.bin


*/