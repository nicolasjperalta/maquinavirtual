#include <iostream>
#include "include/vm_base.h"
#include <fstream>

int main()
{
/*    std::ofstream myfile;
    myfile.open("index.txt");
*/
    vm_base vm(std::cout);
    vm.addByte(0x00);

    vm.execute();
  //  myfile.close();
    return 0;
}
