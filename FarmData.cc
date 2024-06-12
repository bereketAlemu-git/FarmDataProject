#include "FarmData.h"


using namespace std;

FarmData::FarmData() {
    ifstream infile("farmdata/farmdata.txt");
    string province;
        string animal;
        int farms;
        int animals;
        int year;
        while (infile >> year>>province >> animal >> farms >> animals) {
            Farm line(province, animal, farms, animals, year);
            allData.push_back(line);
        }
}
    
FarmData::~FarmData() {
    
}

void FarmData::setProvince(const string& province) {
    currentData.clear();
    for ( Farm line : allData) {
        if (line.getProvince() == province || province == "CAN") {
            currentData.push_back(line);
        }
    }
}

void FarmData::sortByAnimalName() {
    sort(currentData.begin(), currentData.end(), [](Farm& a, Farm& b) {
        return a.getAnimal() < b.getAnimal();
    });
}

void FarmData::sortByNumberOfFarms() {
    sort(currentData.begin(), currentData.end(), [](Farm& a, Farm& b) {
        return a.getFarms() > b.getFarms();
    });
}

void FarmData::sortByNumberOfAnimals() {
    sort(currentData.begin(), currentData.end(), [](Farm& a, Farm& b) {
        return a.getAnimals() > b.getAnimals();
    });
}

void FarmData::printAllData() {
    for (Farm line : allData) {
        cout << "Province: " << line.getProvince() << " Animal: " << setw(14)<< line.getAnimal()
                 << setw(6) << " Farms: " << setw(6) << line.getFarms() << setw(6) << " Animals: " << setw(7) << line.getAnimals()<< endl;
    }
}

void FarmData::printCurrentData() {
    if(currentData.empty()) {
        cout << "No current data found." << endl;
        return;
    }
    for (Farm line : currentData) {
       cout << "Province: " << line.getProvince() << " Animal: " << setw(14)<< line.getAnimal()
                 << setw(6) << " Farms: " << setw(6) << line.getFarms() << setw(6) << " Animals: " << setw(7) << line.getAnimals() << endl;
    }
}
