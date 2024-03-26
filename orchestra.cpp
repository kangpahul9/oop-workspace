#include"Orchestra.h"
#include"Musician.h"

    Orchestra::Orchestra() : curr_size(0) {}
    
    Orchestra::Orchestra(int size) {
        curr_size = 0; 
        max_size = size; 
        members = new Musician[size];
     }
    int Orchestra::get_current_number_of_members(){return curr_size;}
    bool Orchestra::has_instrument(std::string instrument){
        //loop through the members array 
        // get instrument  : members[i].get_instrument 
        //compare this with the parameters' instrument
        for (int i = 0; i < curr_size; i++)
        {
            if (members[i].get_instrument()==instrument)
            {
                return true;
            }
        }
        return false;
    }

    Musician * Orchestra::get_members(){return members;}

    bool Orchestra::add_musician(Musician new_musician)
    {
        if (curr_size<max_size)
        {
            members[curr_size++] = new_musician;
            return true;
        }
    return false;
    }
    Orchestra::~Orchestra() {
        delete[] members;
    }
