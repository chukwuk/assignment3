/****************************************
***************** Program:monkey.hpp
****************** Author:Kingsley C. Chukwu
**************** Date: 2/10/2019
**************** Description:contains all the trait of a monkey which different animals like monkey can inherit.
***************** Input: none
*************** Output: none
****************************************************/



#ifndef MONKEY_H
#define MONKEY_H


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

class Monkey : public Animal {
public:
Monkey();
Monkey(int age_animal);
};  

#endif
