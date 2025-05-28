multilibtool_DATA += \
	%D%/crt1-board.o \
	%D%/app.elf.ld \
	%D%/esp.board.specs \
	%D%/esp.qemu.specs \
	%D%/esp32c2.memory.ld \
	%D%/esp32c2.board.specs \
	%D%/esp32c2.qemu.specs \
	%D%/esp32c3.memory.ld \
	%D%/esp32c3.board.specs \
	%D%/esp32c3.qemu.specs \
	%D%/esp32c5.memory.ld \
	%D%/esp32c5.board.specs \
	%D%/esp32c5.qemu.specs \
	%D%/esp32c6.memory.ld \
	%D%/esp32c6.board.specs \
	%D%/esp32c6.qemu.specs \
	%D%/esp32c61.memory.ld \
	%D%/esp32c61.board.specs \
	%D%/esp32c61.qemu.specs \
	%D%/esp32h2.memory.ld \
	%D%/esp32h2.board.specs \
	%D%/esp32h2.qemu.specs \
	%D%/esp32h21.memory.ld \
	%D%/esp32h21.board.specs \
	%D%/esp32h21.qemu.specs \
	%D%/esp32p4.memory.ld \
	%D%/esp32p4.board.specs \
	%D%/esp32p4.qemu.specs

multilibtool_LIBRARIES += %D%/libsys_board.a
%C%_libsys_board_a_CPPFLAGS = -I$(srcdir)/%D%
%C%_libsys_board_a_SOURCES = \
	%D%/esp_board.c \
	%D%/syscalls.c
