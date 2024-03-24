#include <iostream>

class Cylinder {
private:
    double radius;
    double height;

public:
    static constexpr double PI = 3.14; // Using static for PI

    // Constructors
    Cylinder() : radius(0.0), height(0.0) {} // Default constructor

    Cylinder(double r, double h) : radius(r), height(h) {} // Parameterized constructor

    // Getter and setter for radius
    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    // Getter and setter for height
    double getHeight() const {
        return height;
    }

    void setHeight(double h) {
        height = h;
    }

    // Function to calculate volume
    double getVolume() const {
        return PI * radius * radius * height;
    }

    // Function to print volume
    void printVolume() const {
        std::cout << "Volume of the cylinder is: " << getVolume() << std::endl;
    }
};

int main() {
    Cylinder cylinder1; // Default constructor
    cylinder1.setRadius(2.0);
    cylinder1.setHeight(5.0);
    cylinder1.printVolume(); // Output: Volume of the cylinder is: 62.8

    Cylinder cylinder2(3.0, 7.0); // Parameterized constructor
    cylinder2.printVolume(); // Output: Volume of the cylinder is: 197.82

    return 0;
}
