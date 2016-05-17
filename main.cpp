#include <iostream>
#include "vm_base.h"

int main()
{
    vm_base vm;
    vm.addByte(0x00);
    vm.execute();
    return 0;
}
