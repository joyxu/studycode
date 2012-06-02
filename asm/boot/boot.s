    .text 
.globl _start
    .code16
_start:
set_screen_mode:
    #80x25
    movw $0x0003, %ax
    int  $0x10
    #1024x768x256
    #movw $0x4f02, %ax
    #movw $0x0107, %bx
    #int $0x10
clear_screen:
    movb $0x06, %ah
    movb $0, %al
    movw $0, %bx
    int  $0x10
    
    call set_alarm

    jmp main_loop

set_alarm:
    movl $0, %eax

    # int 0x1c, this is invoked by int 0x08
    movw $0, 114(%eax)
    movw $alarm_cb, 112(%eax)

    # using rtc alarm. but it doesn't work.
    # int 0x4a
    #movw $0, 298(%eax)
    #movw $alarm_cb, 296(%eax)
    movb $0x06, %ah
    movw $0, %cx
    movb $3, %dh
    int  $0x1a
    ret

alarm_cb:
    call print_output
    iret
    
main_loop:
    hlt
    jmp main_loop

print_output:
    # print string from output
    #movw $output, %ax
    #movw %ax, %bp
    #movw $12, %cx
    #movw $0x1301, %ax
    #movw $0x000c, %bx
    #movw $0, %dx
    #int $0x10

    # just print one char
    movb $0x0e, %ah
    movb $96, %al
    movw $0, %bx
    int $0x10
    ret

output:
    .ascii "Hello world!"
    .=_start + 0x1fe
    .word 0xaa55