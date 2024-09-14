/*2. Multilevel Inheritance Problem:

   Imagine you're designing software for a car rental agency. Create a base class called `Vehicle` with properties like `fuelType` and `capacity`.
   Derive a class `Car` from `Vehicle`, representing different cars available for rent, with an additional property `numSeats`.
   Further derives a class `Sedan` from `Car`, representing sedan cars with extra boot space.
    Implement member functions to display details of each vehicle including fuel type, capacity, number of seats, and boot space for sedans.
    Test your code by creating objects representing different types of cars and displaying their details.

*/

#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    string fuelType;
    int capacity;

    // Constructor for Vehicle class
    Vehicle(string nfuelType, int ncapacity) {
        fuelType = nfuelType;
        capacity = ncapacity;
    }

    // Virtual display method
    virtual void display() {
        cout << "Fuel type: " << fuelType << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

class Car : public Vehicle {
public:
    int numSeats;

    // Constructor for Car class, using initialization list to call Vehicle constructor
    Car(string nfuelType, int ncapacity, int nSeat)
        : Vehicle(nfuelType, ncapacity), numSeats(nSeat) {}

    // Override display method
    void display() override {
        Vehicle::display();
        cout << "Number of seats: " << numSeats << endl;
    }
};

class Sedan : public Car {
public:
    int bootSpace;

    // Constructor for Sedan class, using initialization list to call Car constructor
    Sedan(string nfuelType, int ncapacity, int nSeat, int nbootSpace)
        : Car(nfuelType, ncapacity, nSeat), bootSpace(nbootSpace) {}

    // Override display method
    void display() override {
        Car::display();
        cout << "Boot Space: " << bootSpace << " liters" << endl;
    }
};

int main() {
    Vehicle vehicle("Gasoline", 50);
    Car car("Diesel", 60, 5);
    Sedan sedan("Petrol", 55, 5, 500);

    cout << "Details of Vehicle:" << endl;
    vehicle.display();

    cout << "\nDetails of Car:" << endl;
    car.display();

    cout << "\nDetails of Sedan:" << endl;
    sedan.display();

    return 0;
}
