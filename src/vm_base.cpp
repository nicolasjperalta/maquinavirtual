#include "../include/vm_base.h"

void test1(vm_base* vm,int* cursor){
    std::cout << "Hola";
}

vm_base::vm_base()
{
    m_stack_size = 0;
    m_cursor = 0;
    m_functable[0x00] = test1;
    m_program_size = 0;

}

vm_base::~vm_base()
{
    //dtor
}

void vm_base::push(float nValue){
    m_stack[m_stack_size++] = nValue;
}

float vm_base::pop(){
    return m_stack[--m_stack_size];
}

float vm_base::execute(){

    for(int i=0; i < m_program_size; i++){
        m_functable[m_instructions[i]](this,&i);
    }

    return 0;
}
void vm_base::addByte(char byte){
    m_instructions[m_program_size++] = byte;
}
