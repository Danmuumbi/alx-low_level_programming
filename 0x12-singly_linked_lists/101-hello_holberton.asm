section .data
    hello db "Hello, Holberton",10,0 ; The string to print, followed by a new line character and null terminator

section .text
    global _start

    extern printf

_start:
    push rbp          ; Save the base pointer
    mov rdi, hello    ; Load the address of the hello string into rdi
    call printf       ; Call the printf function
    pop rbp           ; Restore the base pointer

    ; Exit the program
    mov rax, 60       ; syscall number for exit
    xor rdi, rdi      ; Status code 0
    syscall
