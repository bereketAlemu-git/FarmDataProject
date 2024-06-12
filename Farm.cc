#include "Farm.h"

Farm::Farm(const string& province, const string& animal, int farms, int animals, int year) {
    this->province = province;
    this->animal = animal;
    this->farms = farms;
    this->animals = animals;
    this->year = year;
}

int Farm::getFarms() const {
    return farms;
}

int Farm::getAnimals() const {
    return animals;
}

string Farm::getProvince() const {
    return province;
}

string Farm::getAnimal() const {
    return animal;
}

int Farm::getYear() const {
    return year;
}

