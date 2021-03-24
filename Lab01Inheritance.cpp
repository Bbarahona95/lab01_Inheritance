#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void doSomething(std::string phrase) const {
        std::cout << "Base!!!" << std::endl;
    }
    virtual ~Base(){}
};

struct Derived : Base {
    void doSomething(std::string phrase) const override  {
        std::cout << phrase << std::endl;
    }
    ~Derived(){}
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived derived1;
    derived1.doSomething("Derived1!!!");

    Derived derived2;
    derived2.doSomething("Derived2!!!");

    return 0;
}  // end function main