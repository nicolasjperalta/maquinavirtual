#ifndef VM_BASE_H
#define VM_BASE_H
#include <ostream>
#include <string>
#include <map>

#define MAX_PROGRAM_SIZE        2048
#define MAX_STACK_SIZE          2048
#define MAX_FTABLE_SIZE         255

class vm_base
{
    public:
        vm_base(std::ostream &);
        virtual ~vm_base();
        void addByte(char byte);
        float execute();
        void push(float nValue);
        float pop();

    public:


    std::ostream& operator<< ( const std::string& str);
    protected:
    private:
        int m_cursor;
        int m_program_size;
        int m_stack_size;
        char m_instructions[MAX_PROGRAM_SIZE];
        float m_stack[MAX_STACK_SIZE];
        std::map<char,void(*)(vm_base& vm,int* cursor)> m_functable;
        std::ostream& m_out;

};


#endif // VM_BASE_H
