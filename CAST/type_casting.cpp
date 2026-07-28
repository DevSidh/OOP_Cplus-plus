#include <iostream>
using namespace std;


class Base {
public:
    virtual ~Base() = default;
    virtual void speak() const {
        std::cout << "Base speak()\n";
    }
};

class Derived : public Base {
public:
    void speak() const override {
        std::cout << "Derived speak()\n";
    }

    void derivedOnly() const {
        std::cout << "Derived-only method\n";
    }
};

int main() {
    int i = 10;
    double d = 5.5;

    // static_cast: compile-time conversion
    double converted = static_cast<double>(i);
    std::cout << "static_cast<int -> double>: " << converted << '\n';

    Base base;
    Derived derived;

    // upcast (safe)
    Base* basePtr = static_cast<Base*>(&derived);
    basePtr->speak();

    // downcast with dynamic_cast (safe if object is actually Derived)
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        std::cout << "dynamic_cast succeeded\n";
        derivedPtr->derivedOnly();
    }

    // const_cast: remove constness
    const int* constIntPtr = &i;
    int* intPtr = const_cast<int*>(constIntPtr);
    *intPtr = 20;
    std::cout << "const_cast changed value: " << *intPtr << '\n';

    // reinterpret_cast: reinterpret bit pattern
    std::uintptr_t addr = reinterpret_cast<std::uintptr_t>(&derived);
    std::cout << "reinterpret_cast pointer to integer: " << addr << '\n';

    // C-style cast
    int value = (int)d;
    std::cout << "C-style cast double -> int: " << value << '\n';

    return 0;
}