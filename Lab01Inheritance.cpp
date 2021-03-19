#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void doSomething() {
        std::cout << "Execute doSomething" << std::endl;
    }
};

struct Derived : Base {
    void doSomethingElse(std::string phrase) {
        std::cout << phrase << std::endl;
    }
};
// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived derived1;
    derived1.doSomething();
    derived1.doSomethingElse("Derived1!!!");

    Derived derived2;
    derived2.doSomething();
    derived2.doSomethingElse("Derived2!!!");

}  // end function main