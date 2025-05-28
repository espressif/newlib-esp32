#include "newlib.h"

#===========================================================================
# crt1-board.S : Entry point for RISC-V user programs that runs on baremetal
#===========================================================================

  .section .text._start, "ax"
  .global _start
  .type   _start, @function
_start:
  # Initialize global pointer
.option push
.option norelax
1:auipc gp, %pcrel_hi(__global_pointer$)
  addi  gp, gp, %pcrel_lo(1b)
2:auipc sp, %pcrel_hi(__stack)
  addi  sp, sp, %pcrel_lo(2b)
.option pop

  # Clear the bss segment
  la      a0, __bss_start
  la      a2, _end
  sub     a2, a2, a0
  li      a1, 0
  call    memset
#ifdef _LITE_EXIT
  # Make reference to atexit weak to avoid unconditionally pulling in
  # support code.  Refer to comments in __atexit.c for more details.
  .weak   atexit
  la      a0, atexit
  beqz    a0, .Lweak_atexit
  .weak   __libc_fini_array
#endif

  la      a0, __libc_fini_array   # Register global termination functions
  call    atexit                  #  to be called upon exit
#ifdef _LITE_EXIT
.Lweak_atexit:
#endif
  call    __libc_init_array       # Run global initialization functions

  call    main
  tail    exit
  .size  _start, .-_start
