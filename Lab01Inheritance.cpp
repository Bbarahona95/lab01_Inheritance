#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {}
};

struct Derived : Base {
    virtual void do_something(std::string frase) {
        std::cout << frase << std::endl;
    }
};
// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived derived1;
    derived1.do_something("Derived1!!!");

    Derived derived2;
    derived2.do_something("Derived2!!!");

}  // end function main