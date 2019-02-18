/****************************************
******************* Program:sea_otters.hpp
******************** Author:Kingsley C. Chukwu
****************** Date: 2/10/2019
****************** Description:implements all the function in the sea_otters.hpp.
******************* Input: none
***************** Output: none
******************************************************/






#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "sea_otters.hpp"



using namespace std;

Sea_otters::Sea_otters() {
        this->cost_animal = 5000.0;
        this->babies = 2;
        this->food_cost = 100.0;
        this->revenue = 250;
}

Sea_otters::Sea_otters(int age_animal) {
        this->age_animal = age_animal;
        this->cost_animal = 5000.0;
        this->babies = 2;
        this->food_cost = 100.0;
        this->revenue = 250;
}

