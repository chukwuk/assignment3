/****************************************
****************** Program:sea_otters.hpp
******************* Author:Kingsley C. Chukwu
***************** Date: 2/10/2019
***************** Description:contains all the trait of a sea otter
****************** Input: none
**************** Output: none
*****************************************************/



#ifndef SEA_OTTERS_H
#define SEA_OTTERS_H


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "animal.hpp"



using namespace std;

class Sea_otters : public Animal {
public:
Sea_otters();
Sea_otters(int age_animal);
};

#endif

