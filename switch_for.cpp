#include <iostream>
#include <map> // add library map to store animal classifications
#include <string>

using namespace std ; 
enum Classification
{
    Mammal,
    Bird,
    Fish,
    Reptile,
    Amphibian
};

string getClassificationName(Classification classification)
{
    switch (classification)
    {
    case Mammal:
        return "Mammal";
    case Bird:
        return "Bird";
    case Fish:
        return "Fish";
    case Reptile:
        return "Reptile";
    case Amphibian:
        return "Amphibian";
    default:
        return "Unknown";
    }
}

int main()
{
    map<string, Classification> animalClassification;

    animalClassification["Tiger"] = Mammal;
    animalClassification["Eagle"] = Bird;
    animalClassification["Shark"] = Fish;
    animalClassification["Frog"] = Amphibian;

    for (const auto &pair : animalClassification)
    {
        cout << "The " << pair.first << " is a type of " << getClassificationName(pair.second) << ".\n";
    }

    return 0;
}
