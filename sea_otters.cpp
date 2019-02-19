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

/******************************************************
************************************** Function:Sea_otters()
*********************************** Description:initialize an adult Sea_otters
************************************ Parameters: none
************************************* Pre-Conditions: none
************************************ Post-Conditions : initialize an adult Sea_otters
***************************************************************************************/



Sea_otters::Sea_otters() {
        this->cost_animal = 5000.0;
        this->babies = 2;
        this->food_cost = 100.0;
        this->revenue = 250;
}

/******************************************************
*************************************** Function:Sea_otters
************************************* Description:initialize a Sea_otters with a certain age
************************************* Parameters: integers
************************************** Pre-Conditions: pass an integer value
************************************* Post-Conditions:initialize the Sea_otters with a certain age
****************************************************************************************/


Sea_otters::Sea_otters(int age_animal) {
        this->age_animal = age_animal;
        this->cost_animal = 5000.0;
        this->babies = 2;
        this->food_cost = 100.0;
        this->revenue = 250;
}

