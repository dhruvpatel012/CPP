#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual void move() const = 0;
    virtual ~Animal() {}
};

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "\nLion roars" << endl;
    }

    void move() const override {
        cout << "Lion runs" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() const override {
        cout << "\nFish cannot roar, makes bubbles" << endl;
    }

    void move() const override {
        cout << "Fish swims" << endl;
    }
};

int main() {
    Animal *animals[2];

    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        animals[i]->move();
        delete animals[i];
    }

    return 0;
}