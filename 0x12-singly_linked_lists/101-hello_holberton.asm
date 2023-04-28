section .data
    hello db 'Hello, Holberton', 0
    nl db 10, 0
section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp
    push rdi
    push rsi
    lea rdi, [hello]
    mov rsi, 0
    call printf
    lea rdi, [nl]
    mov rsi, 0
    call printf
    pop rsi
    pop rdi
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

