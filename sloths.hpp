/****************************************
******************* Program:sloths.hpp
******************** Author:Kingsley C. Chukwu
****************** Date: 2/10/2019
****************** Description:contains all the trait of a sloths
******************* Input: none
***************** Output: none
******************************************************/



#ifndef SLOTHS_H
#define SLOTHS_H


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

class Sloths : public Animal {
public:
Sloths();
Sloths(int age_animal);
};

#endif

