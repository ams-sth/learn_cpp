1) **What is a class?**

    A **class** is a blueprint or template that defines the structure and behavior of an object. It provides a plan for creating objects, specifying what attributes (features) and methods (functions) they should have. However, the class itself does not represent any actual object; it simply describes what an object should look like and how it should behave when created from the class.

    - **Attributes** (features): Characteristics that describe the object, such as color, size, or model.
    - **Methods** (behaviors): Functions that define what actions the object can perform, like moving, driving, 
                                or changing color.

    **Example**: Think of a **class** as the **blueprint** for a house. The blueprint (class) defines things like:
                    - **Size of the door** (attribute)
                    - **Placement of the door** (attribute)
                    - **Number of flats** (attribute)
                    - **Location of the kitchen** (attribute)
                    - **Steps to build** (methods/behaviors like "add a window", "install the door").


2) **What is an object?**

    An **object** is an instance of a class. It represents a specific entity created from the blueprint defined by the class. Each object has its own set of data (attribute values) and can perform the actions (methods) defined in the class. You can think of an object as the **actual building** that has been constructed using the plans (class). 

    When you create an object from a class, you're creating an actual thing that exists and can be manipulated 
    or interacted with.

    **Example**: Based on the house blueprint (class), the **object** represents a **specific house** with real values.
                    - **Size of the door**: 170 * 170 m².
                    - **Placement of the door**: The door should be on the west side.
                    - **Number of flats**: 3 flats.
                    - **Location of the kitchen**: On the bottom floor.


**How it's written in cpp:**

**Class**
    class House {
    public:
        // Attributes
        int doorSize;      // Size of the door in square meters
        int numberOfFlats; // Number of flats in the building
        std::string kitchenLocation; // Location of the kitchen

        // Methods
        void build() {
            std::cout << "Building a house with door size " << doorSize << "m², "
                    << numberOfFlats << " flats, and kitchen located at " << kitchenLocation << std::endl;
        }
    };

**Object**
    int main() {
        // Create an object of the House class
        House myHouse;

        // Assign values to the attributes
        myHouse.doorSize = 170;       // 170m² door size
        myHouse.numberOfFlats = 3;    // 3 flats
        myHouse.kitchenLocation = "bottom floor"; // Kitchen on the bottom floor

        // Call a method on the object
        myHouse.build();  // Output: Building a house with door size 170m², 3 flats, and kitchen located at bottom floor.
    }

**Summary of Key Points:**

    Class: A blueprint that defines what features and behaviors objects of that type will have.
                **Example**: The class defines that a house will have attributes like 
                            `doorSize`, `numberOfFlats`, `kitchenLocation`, etc.

    Object: A specific instance created from the class. It holds actual data for the attributes and 
                can use the methods defined by the class.
                **Example** : An object like `myHouse` represents a specific house with concrete
                            values for its attributes. 
                            (e.g., `doorSize = 170`, `numberOfFlats = 3`).
