#include <iostream>
#include <memory>

int main()
{
    // pointer ptr points to object 125
    std::unique_ptr<int> ptr { std::make_unique<int>(125) };
    std::cout << "Address: " << ptr.get() << std::endl;   // get the address of the object
    std::cout << "Initial value: " << *ptr << std::endl;     // get the value of the object

    // change the value
    *ptr = 254;
    std::cout << "New value: " << *ptr << std::endl;     // get the value of the object
}