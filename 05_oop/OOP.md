### What is OOP ?

--> Object-Oriented Programming (OOP) is a paradigm that organizes code into objects, each representing a real-world entity with properties (data) and behaviors (functions).

### Key Concepts of OOP:

####  **Classes and Objects**

- **Class**: A blueprint (template/schema/Specification) for creating objects. It defines the data and methods.
- **Object**: An instance of a class.

**Example:**
    #include <iostream>
    using namespace std;

    class Car {
    public:
    string brand;
    int speed;

        void displayDetails() {
            cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
        }

    };

    int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.speed = 120;

        myCar.displayDetails();
        return 0;

    }

### Pillars of OOP:


#### 1. **Encapsulation**

- Bundling of data and methods operating on that data within a class.
- Use **access specifiers** (`private`, `protected`, `public`) to control access.

**Example:**

    class BankAccount {
    private:
    double balance;

    public:
    BankAccount() : balance(0) {}

        void deposit(double amount) {
            if (amount > 0) balance += amount;
        }

        void showBalance() {
            cout << "Balance: $" << balance << endl;
        }

    };

#### 2. **Inheritance**

- Allows a class (derived) to inherit properties and methods from another class (base).

**Example:**

    class Animal {
    public:
    void eat() {
    cout << "This animal eats food." << endl;
    }
    };

    class Dog : public Animal {
    public:
    void bark() {
    cout << "Dog barks." << endl;
    }
    };

    int main() {
    Dog myDog;
    myDog.eat(); // Inherited method
    myDog.bark();
    return 0;
    }

#### 3. **Polymorphism**

- Ability to redefine or override methods in derived classes.
- Achieved through **method overriding** or **overloading**.

**Example:**
    class Shape {
    public:
    virtual void draw() { // Virtual function
    cout << "Drawing a shape." << endl;
    }
    };

    class Circle : public Shape {
    public:
    void draw() override {
    cout << "Drawing a circle." << endl;
    }
    };

    int main() {
    Shape\* shape;
    Circle circle;

        shape = &circle;
        shape->draw();  // Calls Circle's draw method
        return 0;

}

#### 4. **Abstraction**

- Hiding implementation details and showing only essential features.
- Achieved using **abstract classes** or **interfaces** (pure virtual functions).

**Example:**

    class AbstractDevice {
    public:
    virtual void start() = 0; // Pure virtual function
    };

    class Smartphone : public AbstractDevice {
    public:
    void start() override {
    cout << "Smartphone starting." << endl;
    }
    };

### Practice Exercises:

1. Create a class for `Book` with properties like title, author, and price. Include a method to display details.
2. Implement a base class `Vehicle` and derived classes `Car` and `Bike` that inherit from `Vehicle`.
3. Write a program to demonstrate polymorphism using a `Shape` base class with `Rectangle` and `Triangle` derived classes.
