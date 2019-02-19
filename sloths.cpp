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

/******************************************************
************************************** Function:Sloths()
************************************ Description:initialize an adult Sloths
************************************ Parameters: none
************************************* Pre-Conditions: none
************************************ Post-Conditions : initialize an adult Sloths
***************************************************************************************/

Sloths::Sloths() {
        this->cost_animal = 2000.0;
        this->babies = 3;
        this->food_cost = 50.0;
        this->revenue = 100;
}

/******************************************************
*************************************** Function:Sloths
************************************* Description:initialize a sloths with a certain age
************************************* Parameters: integers
************************************** Pre-Conditions: pass an integer value
************************************* Post-Conditions:initialize the Sloths with a certain age
****************************************************************************************/


Sloths::Sloths(int age_animal) {
        this->age_animal = age_animal;
        this->cost_animal = 2000.0;
        this->babies = 3;
        this->food_cost = 50.0;
        this->revenue = 100;
}


