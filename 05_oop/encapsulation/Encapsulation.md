Encapsulation is bundling data (variables) and methods (functions) that operate on the data into a single unit called a **class** and controlling access to that data to maintain integrity.This is done using **access specifiers** like `private`, `protected`, and `public`.

### Key Features of Encapsulation

1. **Data Hiding**: Restricts direct access to some of an object's components.
2. **Abstraction**: Simplifies the interface by exposing only the necessary parts.
3. **Control**: Allows controlled interaction with the data through methods.

### Access Specifiers

- `private`: Members are accessible only within the class.
- `protected`: Members are accessible within the class and by derived classes.
- `public`: Members are accessible from anywhere the object is visible.

### Steps to Implement Encapsulation in C++

1. Declare a class.
2. Make the class attributes `private` to restrict access.
3. Provide **getter** and **setter** methods (`public`) to access and update these attributes.

 **Example: Student Class:**

    #include <iostream>
    #include <string>
    using namespace std;

    class Student {
    private:
    string name; // Private attribute
    int age; // Private attribute

    public:
    // Setter for name
    void setName(string studentName) {
    name = studentName;
    }

        // Getter for name
        string getName() {
            return name;
        }

        // Setter for age
        void setAge(int studentAge) {
            if (studentAge > 0) {  // Basic validation
                age = studentAge;
            } else {
                cout << "Invalid age!" << endl;
            }
        }

        // Getter for age
        int getAge() {
            return age;
        }

    };

    int main() {
    Student student;

        // Setting values
        student.setName("Alice");
        student.setAge(20);

        // Getting values
        cout << "Name: " << student.getName() << endl;
        cout << "Age: " << student.getAge() << endl;

        return 0;

    }

**Explanation of the Code**

1. **Private Attributes**:
   - `name` and `age` are private, ensuring that they cannot be modified directly from outside the class.
2. **Getters and Setters**:

   - The `setName` and `getName` methods provide controlled access to `name`.
   - The `setAge` method includes a check to ensure the age is valid before updating it.

3. **Usage**:
   - In the `main` function, we interact with the private members indirectly through the getter and setter methods.

### **Try It Out!**

Modify the example above to add more attributes, validations, or methods, and observe how encapsulation helps maintain a clean and controlled interface.
