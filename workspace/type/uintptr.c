
#include <stdint.h>

int main(void)
{
  void* ptr;
  
  uintptr_t iptr = (uintptr_t)ptr;
  
  void* ptr_again = (void*)iptr;
}

