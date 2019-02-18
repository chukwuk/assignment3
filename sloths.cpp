/****************************************
******************** Program:sloths.hpp
********************* Author:Kingsley C. Chukwu
******************* Date: 2/10/2019
******************* Description:implements all the function in the sloths.hpp.
******************** Input: none
****************** Output: none
*******************************************************/






#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "sloths.hpp"



using namespace std;

Sloths::Sloths() {
        this->cost_animal = 2000.0;
        this->babies = 3;
        this->food_cost = 50.0;
        this->revenue = 100;
}

Sloths::Sloths(int age_animal) {
        this->age_animal = age_animal;
        this->cost_animal = 2000.0;
        this->babies = 3;
        this->food_cost = 50.0;
        this->revenue = 100;
}


