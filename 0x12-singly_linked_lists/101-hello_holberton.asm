section .data
    hello db "Hello, Holberton", 10, 0 ; 10 is ASCII for newline, 0 is null terminator

section .text
    extern printf

    global main

main:
    push rbp
    mov rdi, hello ; Set the first argument (format string)
    call printf    ; Call the printf function
    pop rbp

    mov eax, 0     ; Return 0 from main
    ret
