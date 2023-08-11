

#include <iostream>

int main()
{
    int a = 1;

    int Result = a + (a += 1, a);
    
    std::cout << "int a = 1; a + (a += 1) = ?" << std::endl;
    std::cout << "a + (a += 1) = " << Result << std::endl;    

    return Result;
}
