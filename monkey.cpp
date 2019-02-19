/****************************************
****************** Program:monkey.hpp
******************* Author:Kingsley C. Chukwu
***************** Date: 2/10/2019
***************** Description:implements all the function in the monkey.hpp.
****************** Input: none
**************** Output: none
*****************************************************/






#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "monkey.hpp"



using namespace std;

/******************************************************
************************************* Function:Monkey()
*********************************** Description:initialize an adult monkey
*********************************** Parameters: none
************************************ Pre-Conditions: none
*********************************** Post-Conditions : initialize an adult monkey
**************************************************************************************/


Monkey::Monkey() {
        this->cost_animal = 15000.0;
        this->babies = 1;
        this->food_cost = 200.0;
        this->revenue = 1500; 
}

/******************************************************
************************************** Function:Monkey
************************************ Description:initialize a monkey with a certain age
************************************ Parameters: integers
************************************* Pre-Conditions: pass an integer value
************************************ Post-Conditions:initialize the monkey with a certain age 
***************************************************************************************/



Monkey::Monkey(int age_animal)  {
        this->age_animal = age_animal;
        this->cost_animal = 30000.0;
        this->babies = 1;
        this->food_cost = 200.0;
        this->revenue = 1500;
}
 
                             
