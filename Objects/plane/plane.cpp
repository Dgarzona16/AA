//
// Created by dgarzona on 18/10/2023.
//

#include "plane.hpp"

int compareValue(const plane& obj){
    return obj.capacity;
}

plane::plane(int year, std::string brand, std::string model, int capacity) {
    this->year = year;
    this->brand = std::move(brand);
    this->model = std::move(model);
    this->capacity = capacity;
}

std::ostream &operator<<(std::ostream &os, const plane &plane) {
    os << "year: " << plane.year << " brand: " << plane.brand << " model: " << plane.model
       << " capacity: " << plane.capacity;
    return os;
}

bool plane::operator<(const plane &rhs) const {
    return compareValue(*this) < compareValue(rhs);
}

bool plane::operator>(const plane &rhs) const {
    return compareValue(*this) > compareValue(rhs);
}

bool plane::operator<=(const plane &rhs) const {
    return compareValue(*this) <= compareValue(rhs);
}

bool plane::operator>=(const plane &rhs) const {
    return compareValue(*this) >= compareValue(rhs);
}