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
	.string	"You're located in Tutorial part 1\navalible directions: North"
	.text
	.globl	getloc
	.type	getloc, @function
getloc:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$19, -4(%rbp)
	jg	.L2
	cmpl	$9, -4(%rbp)
	jg	.L2
	cmpl	$2, -4(%rbp)
	jne	.L2
	movl	$.LC0, %edi
	call	puts
.L2:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	getloc, .-getloc
	.section	.rodata
.LC1:
	.string	"w"
.LC2:
	.string	"../usr/saves/save.txt"
	.text
	.globl	createsave
	.type	createsave, @function
createsave:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$.LC1, %esi
	movl	$.LC2, %edi
	call	fopen
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	createsave, .-createsave
	.globl	initfile
	.type	initfile, @function
initfile:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	initfile, .-initfile
	.globl	savename
	.type	savename, @function
savename:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$.LC1, %esi
	movl	$.LC2, %edi
	call	fopen
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$PLAYER_NAME, %edi
	call	fputs
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	savename, .-savename
	.section	.rodata
	.align 8
.LC3:
	.string	"  / ____ \\  | |__| |    \\  /    | |____  | |\\  |\n"
	.align 8
.LC4:
	.string	"   / /\\ \\   | |  | |   \\ \\/ /   |  __|   | . ` |\n"
	.align 8
.LC5:
	.string	"    /  \\    | |  | |  \\ \\  / /  | |__    |  \\| |\n"
	.align 8
.LC6:
	.string	"     /\\     |  __ \\  \\ \\    / / |  ____| | \\ | |\n"
	.align 8
.LC7:
	.string	"             _____   __      __  ______   _   _ \n"
.LC8:
	.string	"%s%s%s%s%s%s"
	.align 8
.LC9:
	.string	" /_/    \\_\\ |_____/      \\/     |______| |_| \\_|\n\n"
	.align 8
.LC10:
	.string	"under certain conditions; type `show c' for details.\n\n"
	.align 8
.LC11:
	.string	"This is free software, and you are welcome to redistribute it\n"
	.align 8
.LC12:
	.string	"This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n"
	.align 8
.LC13:
	.string	"Copyright (C) 2019  DrPepperMD aka rjb\n"
	.align 8
.LC14:
	.string	"ADVEN pre-alpha Version 0.0.1 "
.LC15:
	.string	"%s%s%s%s%s"
.LC16:
	.string	"[EXIT] to exit...\n\n"
.LC17:
	.string	"[LOAD] to load a save file\n"
.LC18:
	.string	"[NEW] to start a new game\n"
.LC19:
	.string	"%s%s%s"
	.align 8
.LC20:
	.string	"[DEBUG] try out experimental freatures!\n"
	.align 8
.LC21:
	.string	"[CONFIG] edit player config for game (FOR TESTING ONLY)\n"
.LC22:
	.string	"%20s"
.LC23:
	.string	"new"
	.align 8
.LC24:
	.string	"Do you have an already existing file called 'save.txt' located in Adven/usr/saves? [Y/n]"
.LC25:
	.string	" %c"
	.align 8
.LC26:
	.string	"Then could delete that and reboot the game?"
.LC27:
	.string	"Carry on then!"
	.align 8
.LC28:
	.string	"Please type in your name (can only be one word): "
.LC29:
	.string	"%s"
	.align 8
.LC30:
	.string	"Are you sure you want '%s' to be your name? [Y/n]\n>"
	.align 8
.LC31:
	.string	"That is gonna be your name for now on"
	.align 8
.LC32:
	.string	"anyway would you like to take the tutorial? [Y/n]\n>"
	.align 8
.LC33:
	.string	"Welcome to the tutorial!\n\nPart 1: Basic movement:"
	.align 8
.LC34:
	.string	"To move in this game you will first need to know where you are and which direction you want go"
	.align 8
.LC35:
	.string	"to find out where you are type 'location'"
.LC36:
	.string	"location"
.LC37:
	.string	"something..."
.LC38:
	.string	"Command not found..."
.LC39:
	.string	"insert text here :P"
.LC40:
	.string	"load"
.LC41:
	.string	"exit"
.LC42:
	.string	"show_w"
	.align 8
.LC43:
	.string	"\nfor more details of the lack of a warranty,"
	.align 8
.LC44:
	.string	"goto section 15 of https://www.gnu.org/licenses/gpl-3.0.html \n"
.LC45:
	.string	"show_c"
	.align 8
.LC46:
	.string	"\nfor more details of redistributing this,"
	.align 8
.LC47:
	.string	"goto section 5 of https://www.gnu.org/licenses/gpl-3.0.html \n"
.LC48:
	.string	"credits"
.LC49:
	.string	"\nLead writer:\nDrPepperMD\n\n"
	.align 8
.LC50:
	.string	"\nLead Programmer:\nDrPepperMD\n\n"
	.align 8
.LC51:
	.string	"\nLead Game Designer:\nDrPepperMD\n\n"
.LC52:
	.string	"\nDirector:\nDrPepperMD\n\n"
.LC53:
	.string	"%s%s%s%s"
.LC54:
	.string	"debug"
.LC55:
	.string	"dev_console"
	.align 8
.LC56:
	.string	"\nThis function is under development :(\n"
	.align 8
.LC57:
	.string	"\n\n\nADVEN DEV CONSOLE [EXPERIMENTAL]\n%s\n%s\n"
.LC58:
	.string	"help"
	.align 8
.LC59:
	.string	"[STARTSCR] To show everything defined under startscr\n\n"
.LC60:
	.string	"List of possible commands:\n"
.LC61:
	.string	"%s%s"
.LC62:
	.string	"startscr"
	.align 8
.LC63:
	.string	"\nThis may look buggy but these are the raw macros:\n"
.LC64:
	.string	"%s\n%s\n%s\n"
.LC65:
	.string	"%s\n%s\n%s\n%s\n"
.LC66:
	.string	"%s\n%s\n%s\n%s\n%s\n%s\n"
	.align 8
.LC67:
	.string	"\nExit dev console or game?\n[DEV]\t[game]\n\n>"
.LC68:
	.string	"dev"
.LC69:
	.string	"game"
.LC70:
	.string	"Bye!"
.LC71:
	.string	"game_version"
.LC72:
	.string	"Codename: 8-Ball version 0.2"
.LC73:
	.string	"\n%s\n%s\n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	subq	$8, %rsp
	pushq	$.LC9
	movl	$.LC3, %r9d
	movl	$.LC4, %r8d
	movl	$.LC5, %ecx
	movl	$.LC6, %edx
	movl	$.LC7, %esi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	movl	$.LC10, %r9d
	movl	$.LC11, %r8d
	movl	$.LC12, %ecx
	movl	$.LC13, %edx
	movl	$.LC14, %esi
	movl	$.LC15, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC16, %ecx
	movl	$.LC17, %edx
	movl	$.LC18, %esi
	movl	$.LC19, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC20, %edi
	call	puts
	movl	$.LC21, %edi
	call	puts
.L10:
	movl	$62, %edi
	call	putchar
	movl	$STARTSCR_COM, %esi
	movl	$.LC22, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC23, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L11
	movl	$.LC24, %edi
	call	puts
	movl	$YES_OR_NO, %esi
	movl	$.LC25, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	YES(%rip), %eax
	cmpb	%al, %dl
	jne	.L12
	movl	$.LC26, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	jmp	.L13
.L12:
	movl	$.LC27, %edi
	call	puts
.L14:
	movl	$.LC28, %edi
	movl	$0, %eax
	call	printf
	movl	$PLAYER_NAME, %esi
	movl	$.LC29, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$PLAYER_NAME, %esi
	movl	$.LC30, %edi
	movl	$0, %eax
	call	printf
	movb	$0, -1(%rbp)
	movl	$YES_OR_NO, %esi
	movl	$.LC25, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	YES(%rip), %eax
	cmpb	%al, %dl
	jne	.L15
	movb	$1, -1(%rbp)
	movl	$.LC31, %edi
	call	puts
	movl	$0, %eax
	call	createsave
	movl	$0, %eax
	call	savename
	jmp	.L16
.L44:
	nop
.L16:
	movl	$.LC32, %edi
	movl	$0, %eax
	call	printf
	movl	$YES_OR_NO, %esi
	movl	$.LC25, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	YES(%rip), %eax
	cmpb	%al, %dl
	jne	.L17
	movl	$.LC33, %edi
	call	puts
	movl	$.LC34, %edi
	call	puts
	movl	$.LC35, %edi
	call	puts
	movl	$2, LOCATION(%rip)
.L18:
	movl	$62, %edi
	call	putchar
	movl	$TUTORIAL_COM, %esi
	movl	$.LC29, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC36, %esi
	movl	$TUTORIAL_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L19
	movl	$.LC37, %edi
	call	puts
	jmp	.L24
.L19:
	movl	$.LC38, %edi
	call	puts
	jmp	.L18
.L17:
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	NO(%rip), %eax
	cmpb	%al, %dl
	jne	.L43
	movl	$.LC39, %edi
	call	puts
	movl	$0, %eax
	jmp	.L13
.L15:
	movzbl	YES_OR_NO(%rip), %edx
	movzbl	NO(%rip), %eax
	cmpb	%al, %dl
	jne	.L22
	jmp	.L14
.L43:
	nop
.L22:
	movl	$.LC38, %edi
	call	puts
	movzbl	-1(%rbp), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L44
	jmp	.L14
.L11:
	movl	$.LC40, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	je	.L45
	movl	$.LC41, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L26
	movl	$0, %eax
	jmp	.L13
.L26:
	movl	$.LC42, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L27
	movl	$.LC43, %edi
	call	puts
	movl	$.LC44, %edi
	call	puts
	jmp	.L10
.L27:
	movl	$.LC45, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L28
	movl	$.LC46, %edi
	call	puts
	movl	$.LC47, %edi
	call	puts
	jmp	.L10
.L28:
	movl	$.LC48, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L29
	movl	$.LC49, %r8d
	movl	$.LC50, %ecx
	movl	$.LC51, %edx
	movl	$.LC52, %esi
	movl	$.LC53, %edi
	movl	$0, %eax
	call	printf
	jmp	.L10
.L29:
	movl	$.LC54, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L30
	jmp	.L10
.L30:
	movl	$.LC55, %esi
	movl	$STARTSCR_COM, %edi
	call	strcmp
	testl	%eax, %eax
	je	.L46
	movl	$.LC38, %edi
	call	puts
	jmp	.L10
.L45:
	nop
.L24:
	movl	$.LC56, %edi
	call	puts
	jmp	.L10
.L46:
	nop
.L32:
	movl	$.LC13, %edx
	movl	$.LC14, %esi
	movl	$.LC57, %edi
	movl	$0, %eax
	call	printf
.L33:
	movl	$62, %edi
	call	putchar
	movl	$DEV_CONSOLE, %esi
	movl	$.LC22, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC58, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L34
	movl	$.LC59, %edx
	movl	$.LC60, %esi
	movl	$.LC61, %edi
	movl	$0, %eax
	call	printf
	jmp	.L33
.L34:
	movl	$.LC62, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L35
	movl	$.LC63, %edi
	call	puts
	movl	$.LC16, %ecx
	movl	$.LC17, %edx
	movl	$.LC18, %esi
	movl	$.LC64, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC16, %ecx
	movl	$.LC17, %edx
	movl	$.LC18, %esi
	movl	$.LC19, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC20, %edi
	call	puts
	movl	$.LC49, %r8d
	movl	$.LC50, %ecx
	movl	$.LC51, %edx
	movl	$.LC52, %esi
	movl	$.LC65, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC49, %r8d
	movl	$.LC50, %ecx
	movl	$.LC51, %edx
	movl	$.LC52, %esi
	movl	$.LC53, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC49, %r8d
	movl	$.LC50, %ecx
	movl	$.LC51, %edx
	movl	$.LC52, %esi
	movl	$.LC53, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC21, %edi
	call	puts
	subq	$8, %rsp
	pushq	$.LC9
	movl	$.LC3, %r9d
	movl	$.LC4, %r8d
	movl	$.LC5, %ecx
	movl	$.LC6, %edx
	movl	$.LC7, %esi
	movl	$.LC66, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	subq	$8, %rsp
	pushq	$.LC9
	movl	$.LC3, %r9d
	movl	$.LC4, %r8d
	movl	$.LC5, %ecx
	movl	$.LC6, %edx
	movl	$.LC7, %esi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	addq	$16, %rsp
	movl	$.LC10, %r8d
	movl	$.LC11, %ecx
	movl	$.LC12, %edx
	movl	$.LC13, %esi
	movl	$.LC65, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC10, %r9d
	movl	$.LC11, %r8d
	movl	$.LC12, %ecx
	movl	$.LC13, %edx
	movl	$.LC14, %esi
	movl	$.LC15, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	jmp	.L13
.L35:
	movl	$.LC41, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L37
.L38:
	movl	$.LC67, %edi
	movl	$0, %eax
	call	printf
	movl	$DEV_EXIT_CHAR, %esi
	movl	$.LC29, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC68, %esi
	movl	$DEV_EXIT_CHAR, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L39
	jmp	.L10
.L39:
	movl	$.LC69, %esi
	movl	$DEV_EXIT_CHAR, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L40
	movl	$.LC70, %edi
	call	puts
	movl	$0, %eax
	jmp	.L13
.L40:
	movl	$.LC38, %edi
	call	puts
	jmp	.L38
.L37:
	movl	$.LC71, %esi
	movl	$DEV_CONSOLE, %edi
	call	strcmp
	testl	%eax, %eax
	jne	.L41
	movl	$.LC72, %edx
	movl	$.LC14, %esi
	movl	$.LC73, %edi
	movl	$0, %eax
	call	printf
	jmp	.L33
.L41:
	movl	$.LC38, %edi
	call	puts
	jmp	.L33
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
