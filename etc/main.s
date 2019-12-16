	.file	"main.c"
	.comm	NEW_GAME_RUCUR,1,1
	.globl	GAME_FOLDER_PATH
	.data
	.align 32
	.type	GAME_FOLDER_PATH, @object
	.size	GAME_FOLDER_PATH, 200
GAME_FOLDER_PATH:
	.string	"null"
	.zero	195
	.globl	LOCATION
	.bss
	.align 4
	.type	LOCATION, @object
	.size	LOCATION, 4
LOCATION:
	.zero	4
	.globl	PLAYER_NAME
	.data
	.align 32
	.type	PLAYER_NAME, @object
	.size	PLAYER_NAME, 50
PLAYER_NAME:
	.string	"null"
	.zero	45
	.globl	health
	.bss
	.align 4
	.type	health, @object
	.size	health, 4
health:
	.zero	4
	.globl	STARTSCR_COM
	.data
	.align 16
	.type	STARTSCR_COM, @object
	.size	STARTSCR_COM, 20
STARTSCR_COM:
	.string	"null"
	.zero	15
	.globl	DEV_CONSOLE
	.align 16
	.type	DEV_CONSOLE, @object
	.size	DEV_CONSOLE, 20
DEV_CONSOLE:
	.string	"null"
	.zero	15
	.globl	DEV_EXIT_CHAR
	.align 8
	.type	DEV_EXIT_CHAR, @object
	.size	DEV_EXIT_CHAR, 10
DEV_EXIT_CHAR:
	.string	"null"
	.zero	5
	.globl	TUTORIAL_COM
	.align 16
	.type	TUTORIAL_COM, @object
	.size	TUTORIAL_COM, 20
TUTORIAL_COM:
	.string	"null"
	.zero	15
	.globl	KEY_CON
	.type	KEY_CON, @object
	.size	KEY_CON, 1
KEY_CON:
	.byte	110
	.globl	YES_OR_NO
	.type	YES_OR_NO, @object
	.size	YES_OR_NO, 1
YES_OR_NO:
	.byte	110
	.globl	YES
	.type	YES, @object
	.size	YES, 1
YES:
	.byte	121
	.globl	NO
	.type	NO, @object
	.size	NO, 1
NO:
	.byte	110
	.section	.rodata
	.align 8
.LC0:
	.string	"  / ____ \\  | |__| |    \\  /    | |____  | |\\  |\n"
	.align 8
.LC1:
	.string	"   / /\\ \\   | |  | |   \\ \\/ /   |  __|   | . ` |\n"
	.align 8
.LC2:
	.string	"    /  \\    | |  | |  \\ \\  / /  | |__    |  \\| |\n"
	.align 8
.LC3:
	.string	"     /\\     |  __ \\  \\ \\    / / |  ____| | \\ | |\n"
	.align 8
.LC4:
	.string	"             _____   __      __  ______   _   _ \n"
.LC5:
	.string	"%s%s%s%s%s%s"
	.align 8
.LC6:
	.string	" /_/    \\_\\ |_____/      \\/     |______| |_| \\_|\n\n"
	.align 8
.LC7:
	.string	"under certain conditions; type `show c' for details.\n\n"
	.align 8
.LC8:
	.string	"This is free software, and you are welcome to redistribute it\n"
	.align 8
.LC9:
	.string	"This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
	.align 8
.LC10:
	.string	"Copyright (C) 2019  DrPepperMD aka rjb\n"
	.align 8
.LC11:
	.string	"ADVEN pre-alpha Version 0.0.1 "
.LC12:
	.string	"%s%s%s%s%s"
.LC13:
	.string	"[EXIT] to exit...\n\n"
.LC14:
	.string	"[LOAD] to load a save file\n"
.LC15:
	.string	"[NEW] to start a new game\n"
.LC16:
	.string	"%s%s%s"
	.align 8
.LC17:
	.string	"[DEBUG] try out experimental freatures!\n"
	.align 8
.LC18:
	.string	"[CONFIG] edit player config for game (FOR TESTING ONLY)\n"
.LC19:
	.string	"%20s"
.LC20:
	.string	"new"
	.align 8
.LC21:
	.string	"Please type in your name (can only be one word): "
.LC22:
	.string	"%s"
	.align 8
.LC23:
	.string	"Are you sure you want '%s' to be your name? [Y/n]\n>"
.LC24:
	.string	" %c"
	.align 8
.LC25:
	.string	"That is gonna be your name for now on"
	.align 8
.LC26:
	.string	"anyway would you like to take the tutorial? [Y/n]\n>"
	.align 8
.LC27:
	.string	"Welcome to the tutorial!\n\nPart 1: Basic movement:"
	.align 8
.LC28:
	.string	"To move in this game you will first need to know where you are and which direction you want go"
	.align 8
.LC29:
	.string	"to find out where you are type 'location'"
.LC30:
	.string	"location"
.LC31:
	.string	"something..."
.LC32:
	.string	"Command not found..."
.LC33:
	.string	"Ok then...\nYour choice..."
.LC34:
	.string	"load"
.LC35:
	.string	"exit"
.LC36:
	.string	"show_w"
	.align 8
.LC37:
	.string	"\nfor more details of the lack of a warranty,"
	.align 8
.LC38:
	.string	"goto section 15 of https://www.gnu.org/licenses/gpl-3.0.html \n"
.LC39:
	.string	"show_c"
	.align 8
.LC40:
	.string	"\nfor more details of redistributing this,"
	.align 8
.LC41:
	.string	"goto section 5 of https://www.gnu.org/licenses/gpl-3.0.html \n"
.LC42:
	.string	"credits"
.LC43:
	.string	"\nLead writer:\nDrPepperMD\n\n"
	.align 8
.LC44:
	.string	"\nLead Programmer:\nDrPepperMD\n\n"
	.align 8
.LC45:
	.string	"\nLead Game Designer:\nDrPepperMD\n\n"
.LC46:
	.string	"\nDirector:\nDrPepperMD\n\n"
.LC47:
	.string	"%s%s%s%s"
.LC48:
	.string	"debug"
.LC49:
	.string	"sdsd"
.LC50:
	.string	"dev_console"
	.align 8
.LC51:
	.string	"\nThis function is under development :(\n"
	.align 8
.LC52:
	.string	"\n\n\nADVEN DEV CONSOLE [EXPERIMENTAL]\n%s\n%s\n"
.LC53:
	.string	"help"
	.align 8
.LC54:
	.string	"[STARTSCR] To show everything defined under startscr\n\n"
.LC55:
	.string	"List of possible commands:\n"
.LC56:
	.string	"%s%s"
.LC57:
	.string	"startscr"
	.align 8
.LC58:
	.string	"\nThis may look buggy but these are the raw macros:\n"
.LC59:
	.string	"%s\n%s\n%s\n"
.LC60:
	.string	"%s\n%s\n%s\n%s\n"
.LC61:
	.string	"%s\n%s\n%s\n%s\n%s\n%s\n"
	.align 8
.LC62:
	.string	"\nExit dev console or game?\n[DEV]\t[game]\n\n>"
.LC63:
	.string	"dev"
.LC64:
	.string	"game"
.LC65:
	.string	"Bye!"
.LC66:
	.string	"game_version"
.LC67:
	.string	"Codename: 8-Ball version 0.2"
.LC68:
	.string	"\n%s\n%s\n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	subq	$8, %rsp
	pushq	$.LC6
	movl	$.LC0, %r9d
	movl	$.LC1, %r8d
	movl	$.LC2, %ecx
	movl	$.LC3, %edx
	movl	$.LC4, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	movl	$.LC7, %r9d
	movl	$.LC8, %r8d
	movl	$.LC9, %ecx
	movl	$.LC10, %edx
	movl	$.LC11, %esi
	movl	$.LC12, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC13, %ecx
	movl	$.LC14, %edx
	movl	$.LC15, %esi
	movl	$.LC16, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC17, %edi
	call	puts
	movl	$.LC18, %edi
	call	puts
.L2:
	movl	$62, %edi
	call	putchar
	movl	$STARTSCR_COM, %esi
	movl	$.LC19, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC20, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L3
	movl	$.LC21, %edi
	movl	$0, %eax
	call	printf
	movl	$PLAYER_NAME, %esi
	movl	$.LC22, %edi
	movl	$0, %eax
	call	__isoc99_scanf
.L4:
	movl	$PLAYER_NAME, %esi
	movl	$.LC23, %edi
	movl	$0, %eax
	call	printf
	movb	$0, -1(%rbp)
	movl	$YES_OR_NO, %esi
	movl	$.LC24, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	YES(%rip), %eax
	cmpb	%al, %dl
	jne	.L5
	movb	$1, -1(%rbp)
	movl	$.LC25, %edi
	call	puts
	jmp	.L6
.L35:
	nop
.L6:
	movl	$.LC26, %edi
	movl	$0, %eax
	call	printf
	movl	$YES_OR_NO, %esi
	movl	$.LC24, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	YES(%rip), %eax
	cmpb	%al, %dl
	jne	.L7
	movl	$.LC27, %edi
	call	puts
	movl	$.LC28, %edi
	call	puts
	movl	$.LC29, %edi
	call	puts
.L8:
	movl	$62, %edi
	call	putchar
	movl	$TUTORIAL_COM, %esi
	movl	$.LC22, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC30, %esi
	movl	$TUTORIAL_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L9
	movl	$.LC31, %edi
	call	puts
	jmp	.L14
.L9:
	movl	$.LC32, %edi
	call	puts
	jmp	.L8
.L7:
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	NO(%rip), %eax
	cmpb	%al, %dl
	jne	.L34
	movl	$.LC33, %edi
	call	puts
	jmp	.L14
.L5:
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	NO(%rip), %eax
	cmpb	%al, %dl
	jne	.L12
	jmp	.L4
.L34:
	nop
.L12:
	movl	$.LC32, %edi
	call	puts
	movzbl	-1(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L35
	jmp	.L4
.L3:
	movl	$.LC34, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	je	.L36
	movl	$.LC35, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L16
	movl	$0, %eax
	jmp	.L17
.L16:
	movl	$.LC36, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L18
	movl	$.LC37, %edi
	call	puts
	movl	$.LC38, %edi
	call	puts
	jmp	.L2
.L18:
	movl	$.LC39, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L19
	movl	$.LC40, %edi
	call	puts
	movl	$.LC41, %edi
	call	puts
	jmp	.L2
.L19:
	movl	$.LC42, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L20
	movl	$.LC43, %r8d
	movl	$.LC44, %ecx
	movl	$.LC45, %edx
	movl	$.LC46, %esi
	movl	$.LC47, %edi
	movl	$0, %eax
	call	printf
	jmp	.L2
.L20:
	movl	$.LC48, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L21
	movl	$.LC49, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L21:
	movl	$.LC50, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	je	.L37
	movl	$.LC32, %edi
	call	puts
	jmp	.L2
.L36:
	nop
.L14:
	movl	$.LC51, %edi
	call	puts
	jmp	.L2
.L37:
	nop
.L23:
	movl	$.LC10, %edx
	movl	$.LC11, %esi
	movl	$.LC52, %edi
	movl	$0, %eax
	call	printf
.L24:
	movl	$62, %edi
	call	putchar
	movl	$DEV_CONSOLE, %esi
	movl	$.LC19, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC53, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L25
	movl	$.LC54, %edx
	movl	$.LC55, %esi
	movl	$.LC56, %edi
	movl	$0, %eax
	call	printf
	jmp	.L24
.L25:
	movl	$.LC57, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L26
	movl	$.LC58, %edi
	call	puts
	movl	$.LC13, %ecx
	movl	$.LC14, %edx
	movl	$.LC15, %esi
	movl	$.LC59, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC13, %ecx
	movl	$.LC14, %edx
	movl	$.LC15, %esi
	movl	$.LC16, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC17, %edi
	call	puts
	movl	$.LC43, %r8d
	movl	$.LC44, %ecx
	movl	$.LC45, %edx
	movl	$.LC46, %esi
	movl	$.LC60, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC43, %r8d
	movl	$.LC44, %ecx
	movl	$.LC45, %edx
	movl	$.LC46, %esi
	movl	$.LC47, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC43, %r8d
	movl	$.LC44, %ecx
	movl	$.LC45, %edx
	movl	$.LC46, %esi
	movl	$.LC47, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC18, %edi
	call	puts
	subq	$8, %rsp
	pushq	$.LC6
	movl	$.LC0, %r9d
	movl	$.LC1, %r8d
	movl	$.LC2, %ecx
	movl	$.LC3, %edx
	movl	$.LC4, %esi
	movl	$.LC61, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	subq	$8, %rsp
	pushq	$.LC6
	movl	$.LC0, %r9d
	movl	$.LC1, %r8d
	movl	$.LC2, %ecx
	movl	$.LC3, %edx
	movl	$.LC4, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	movl	$.LC7, %r8d
	movl	$.LC8, %ecx
	movl	$.LC9, %edx
	movl	$.LC10, %esi
	movl	$.LC60, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC7, %r9d
	movl	$.LC8, %r8d
	movl	$.LC9, %ecx
	movl	$.LC10, %edx
	movl	$.LC11, %esi
	movl	$.LC12, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	jmp	.L17
.L26:
	movl	$.LC35, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L28
.L29:
	movl	$.LC62, %edi
	movl	$0, %eax
	call	printf
	movl	$DEV_EXIT_CHAR, %esi
	movl	$.LC22, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC63, %esi
	movl	$DEV_EXIT_CHAR, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L30
	jmp	.L2
.L30:
	movl	$.LC64, %esi
	movl	$DEV_EXIT_CHAR, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L31
	movl	$.LC65, %edi
	call	puts
	movl	$0, %eax
	jmp	.L17
.L31:
	movl	$.LC32, %edi
	call	puts
	jmp	.L29
.L28:
	movl	$.LC66, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L32
	movl	$.LC67, %edx
	movl	$.LC11, %esi
	movl	$.LC68, %edi
	movl	$0, %eax
	call	printf
	jmp	.L24
.L32:
	movl	$.LC32, %edi
	call	puts
	jmp	.L24
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
