format: db 'Hello, Holberton\n', 0

    global main
    extern printf

main:

    mov edi, format
    xor rax, rax
    call printf
    mov eax, 0
    xor edi, edi
    syscall
