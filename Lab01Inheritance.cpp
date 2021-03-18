#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {
        std::cout << "Execute do_something" << std::endl;
    }
};

struct Derived : Base {
    void do_somethingElse(std::string phrase) {
        std::cout << phrase << std::endl;
    }
};
// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived derived1;
    derived1.do_something();
    derived1.do_somethingElse("Derived1!!!");

    Derived derived2;
    derived2.do_something();
    derived2.do_somethingElse("Derived2!!!");

}  // end function main