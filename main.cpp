#include <iostream>
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include "Jungle.h"
#include "Pet.h"

using namespace std;

int main() {
    int numOfAnimals1;
    cout << "How many animals do you want to add to the first jungle?(without pets)";
    cin >> numOfAnimals1;
    Jungle j1(numOfAnimals1);


    for (int i = 0; i < (numOfAnimals1 / 2); ++i) {
        WildAnimal *pw;
        pw = new WildAnimal;
        j1.AddAnimal(pw);

        DomesticAnimal *pd;
        pd = new DomesticAnimal;
        j1.AddAnimal(pd);
    }
    for (int i = 0; i < 1000; ++i) {
        j1.movement();
    }
    cout << "approximate number of times that animals fall in the pit(jungle1):" << j1.getTotalFall() << endl;


    int numOfAnimals2;
    cout << "How many animals do you want to add to the second jungle?(including pets)";
    cin >> numOfAnimals2;
    Jungle j2(numOfAnimals2);
    for (int i = 0; i < (numOfAnimals2 / 3); ++i) {
        WildAnimal *pw;
        pw = new WildAnimal;
        j2.AddAnimal(pw);

        DomesticAnimal *pd;
        pd = new DomesticAnimal;
        j2.AddAnimal(pd);

        Pet *pt;
        pt = new Pet;
        j2.AddAnimal(pt);
    }
    for (int i = 0; i < 1000; ++i) {
        j2.movement();
    }
    cout << "approximate number of times that animals fall in the pit(jungle2):" << j2.getTotalFall() << endl;


    return 0;
}
