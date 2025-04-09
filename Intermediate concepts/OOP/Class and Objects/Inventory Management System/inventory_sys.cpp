#include <iostream>

class Product
{
private:
    std::string name;
    int price;
    int quantity;

public:
    Product(std::string name, int price, int quantity) : name(name), price(price), quantity(quantity) {};

    void displayDetails()
    {
        std::cout << "Product: " << name
                  << "\nPrice per unit: $" << price
                  << "\nQuantity in stock: " << quantity
                  << "\nTotal Value: $" << price * quantity << "\n";
    }

    void addStock(int amount)
    {
        quantity += amount;
        std::cout << "Added " << amount << " units to " << name << ". New quantity: " << quantity << "\n\n";
    }

    void sellStock(int amount)
    {
        if (amount > quantity)
        {
            std::cout << "Insufficient stock of " << name << " to sell " << amount << " units.\n\n";
        }
        else
        {

            quantity -= amount;
            std::cout << "Sold " << amount << " units of " << name << ". Remaining quantity: " << quantity << "\n\n";        }
    }
};

int main()
{
    Product productOne("Pen", 15, 1);
    productOne.displayDetails();
    productOne.addStock(4);
    productOne.sellStock(2);

    Product productTwo("Ruler", 30, 3);
    productTwo.displayDetails();
    productTwo.addStock(3);
    productTwo.sellStock(1);

    Product productThree("Compass", 25, 2);
    productThree.displayDetails();
    productThree.addStock(8);
    productThree.sellStock(3);

    return 0;
}