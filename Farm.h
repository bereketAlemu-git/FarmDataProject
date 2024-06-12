#ifndef FARM_H
#define FARM_H


#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Farm{
    private:
        string province;
        string animal;
        int farms;
        int animals;
        int year;
    public:
        Farm(const string& province, const string& animal, int farms, int animals, int year);
        int getFarms()const;
        int getAnimals() const;
        string getProvince() const;
        string getAnimal() const;  
        int getYear() const;
};

#endif
