//
// Created by dgarzona on 18/10/2023.
//

#ifndef QUICKSORT_OBJECTS_HPP
#define QUICKSORT_OBJECTS_HPP

#include <iostream>
#include <utility>

#pragma region Car
struct car {
    //attributes
    int year{};
    std::string brand;
    std::string color;
    int price{};

    //constructors
    car(int year, std::string brand, std::string color, int price) {
        this->year = year;
        this->brand = std::move(brand);
        this->color = std::move(color);
        this->price = price;
    }
    car() = default;

    //overflow to print the object
    friend std::ostream &operator<< (std::ostream &os, const car &car) {
        os << "year: " << car.year << " brand: " << car.brand  << " color: " << car.color
           << " price: " << car.price;
        return os;
    }

    //overload operators to compare objects
    bool operator< (const car &rhs) const {
        return year < rhs.year;
    }
    bool operator> (const car &rhs) const {
        return rhs.year < year;
    }
    bool operator<= (const car &rhs) const {
        return year <= rhs.year;
    }
    bool operator>= (const car &rhs) const {
        return rhs.year <= year;
    }
};

#pragma region basic data
std::string brands[] = {"Audi", "BMW", "Mercedes", "Volkswagen", "Volvo", "Renault", "Peugeot", "Fiat", "Ford", "Chevrolet"};
std::string colors[] = {"red", "blue", "green", "yellow", "black", "white", "gray", "brown", "orange", "purple"};
#pragma endregion

#pragma region CarFactory
class CarFactory {
public:
    static car *createRandomCar() {
        int year = rand() % 20 + 2000;
        std::string brand = brands[rand() % 10];
        std::string color = colors[rand() % 10];
        int price = rand() % 100000 + 10000;
        return new car(year, brand, color, price);
    }
};
#pragma endregion

#pragma region fill array
void fillArray(car *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = *CarFactory::createRandomCar();
    }
}
#pragma endregion
#pragma endregion
#endif //QUICKSORT_OBJECTS_HPP
