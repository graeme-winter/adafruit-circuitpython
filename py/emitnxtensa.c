// Xtensa specific stuff

#include "py/mpconfig.h"

#if MICROPY_EMIT_XTENSA

// this is defined so that the assembler exports generic assembler API macros
#define GENERIC_ASM_API (1)
#define GENERIC_ASM_API_WIN (0)
#include "py/asmxtensa.h"

// Word indices of REG_LOCAL_x in nlr_buf_t
#define NLR_BUF_IDX_LOCAL_1 (8) // a12

#define N_XTENSA (1)
#define EXPORT_FUN(name) emit_native_xtensa_##name
#include "py/emitnative.c"

#endif
