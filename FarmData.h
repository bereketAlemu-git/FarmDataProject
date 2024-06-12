#ifndef FARMING_H
#define FARMING_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include "Farm.h"

using namespace std;

class FarmData
{
    public:
        FarmData();
        ~FarmData();
        void setProvince(const string& province);
        void sortByAnimalName();
        void sortByNumberOfFarms();
        void sortByNumberOfAnimals();
        void printAllData();
        void printCurrentData();

    private:
        std::vector<Farm> allData;
        std::vector<Farm> currentData;

};

#endif