#include "PeopleList.h"
#include "Person.h"
#include <iostream>

using namespace std;

void PeopleList::Add(Person toAdd){

    unsigned int indexToInsertAt = 0;


    if(people.size() == 0){
        indexToInsertAt = 0;
        people.insert(people.begin(), toAdd);
    }

    else{
        while(indexToInsertAt < people.size() && !toAdd.LessThan(people.at(indexToInsertAt))){
            indexToInsertAt++;
        }
        people.insert(people.begin() + indexToInsertAt, toAdd);
    }
}

void PeopleList::PrintList(){
    for(int i = 0; i < people.size(); i++){
        cout << people.at(i).Name() << " " << people.at(i).Age() << endl;
    }
}

int PeopleList::Size(){
    return people.size();
}