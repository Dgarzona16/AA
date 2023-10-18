//
// Created by dgarzona on 18/10/2023.
//

#ifndef OBJECTS_PLANE_HPP
#define OBJECTS_PLANE_HPP

#include <iostream>

class plane {
public:
    //attributes
    int year{};
    std::string brand;
    std::string model;
    int capacity{};
    //methods
    plane() = default;
    plane(int year, std::string brand, std::string model, int capacity);
    friend std::ostream &operator<< (std::ostream &os, const plane &plane);
    bool operator< (const plane &rhs) const;
    bool operator> (const plane &rhs) const;
    bool operator<= (const plane &rhs) const;
    bool operator>= (const plane &rhs) const;
};


#endif //OBJECTS_PLANE_HPP
