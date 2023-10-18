//
// Created by dgarzona on 18/10/2023.
//

#include "car.hpp"

int compareValue(const car& obj){
    return obj.year;
}

car::car(int year, std::string brand, std::string color, int price) {
    this->year = year;
    this->brand = std::move(brand);
    this->color = std::move(color);
    this->price = price;
}

std::ostream &operator<<(std::ostream &os, const car &car) {
    os << "year: " << car.year << " brand: " << car.brand << " color: " << car.color
       << " price: " << car.price;
    return os;
}

bool car::operator<(const car &rhs) const {
    return compareValue(*this) < compareValue(rhs);
}

bool car::operator>(const car &rhs) const {
    return compareValue(*this) > compareValue(rhs);
}

bool car::operator<=(const car &rhs) const {
    return compareValue(*this) <= compareValue(rhs);
}

bool car::operator>=(const car &rhs) const {
    return compareValue(*this) >= compareValue(rhs);
}