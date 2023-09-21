section .data
format db "Hello, Holberton", 0
printf_format db "%s", 0

section .text
extern printf

global main

main:
sub rsp, 8                ; Align stack

mov rdi, printf_format    ; Load format string
mov rsi, format           ; Load string to print
xor eax, eax              ; Clear eax register
call printf               ; Call printf function

add rsp, 8                ; Restore stack

mov eax, 0x60             ; Exit syscall number
xor edi, edi              ; Exit status 0
syscall                   ; Call exit syscall

 ;own - Ntokozo Mahwayi
