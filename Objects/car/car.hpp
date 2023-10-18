//
// Created by dgarzona on 18/10/2023.
//

#ifndef OBJECTS_CAR_HPP
#define OBJECTS_CAR_HPP

#include <iostream>

class car {
public:
    //attributes
    int year{};
    std::string brand;
    std::string color;
    int price{};

    //methods
    car() = default;
    car(int year, std::string brand, std::string color, int price);
    friend std::ostream &operator<< (std::ostream &os, const car &car);
    bool operator< (const car &rhs) const;
    bool operator> (const car &rhs) const;
    bool operator<= (const car &rhs) const;
    bool operator>= (const car &rhs) const;
};


#endif //OBJECTS_CAR_HPP
