section .text
	global _ft_memset

; Premier argument : rdi -> void *b
; Deuxième argument : rsi -> int c
; Troisième argument : rdx -> size_t len

_ft_memset:
	push rbp
	mov rbp, rsp


	mov al, sil
	rep stosb

	pop rbp
	ret
