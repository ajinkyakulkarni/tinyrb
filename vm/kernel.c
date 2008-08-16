#include "tinyrb.h"

static OBJ tr_kernel_puts(VM, OBJ self, OBJ txt)
{
  OBJ str = tr_send2(vm, txt, "to_s", 0);
  puts(TR_STR(str));
  return TR_NIL;
}

static OBJ tr_kernel_raise(VM, OBJ self, OBJ msg)
{
  tr_raise(vm, TR_STR(msg));
  return TR_NIL;
}

void tr_kernel_init(VM)
{
  OBJ mod = tr_module_new(vm, "Kernel");
  
  tr_def(vm, mod, "puts", tr_kernel_puts, 1);
  tr_def(vm, mod, "raise", tr_kernel_raise, 1);
}