/****************************************
********************* Program:zoo.cpp
********************** Author:Kingsley C. Chukwu
******************** Date: 2/10/2019
******************** Description:implements all the function in the zoo.hpp.
********************* Input: none
******************* Output: none
********************************************************/






#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "zoo.hpp"
#include "monkey.hpp"
#include "sea_otters.hpp"
#include "sloths.hpp"
#include "animal.hpp"



using namespace std;

Zoo::Zoo() : num_monkey(0), num_sea_otters(0), num_sloths(0), money_account(100000.00), num_bab_monkey(0), num_bab_sea_otters(0), num_bab_sloths(0)  {
        this->monkey = new Monkey[100];
        this->sea_otters = new Sea_otters[100]; 
        this->sloths = new Sloths[100];
        this->baby_monkey = new Monkey[100];
        this->baby_sea_otters = new Sea_otters[100];
        this->baby_sloths = new Sloths[100];
}

/******************************************************
************************************* Function:add_animal
*********************************** Description:adds an animal specie to the zoo ,the number passed in function determines which species of animal to add.
*********************************** Parameters: integers
************************************ Pre-Conditions: pass an integer value
*********************************** Post-Conditions:adds the animal to the zoo
**************************************************************************************/

void Zoo::add_animal(int num) {
     if (num == 1) {
     Monkey* temp = new Monkey[this->num_monkey+1];
     for (int i = 0; i < this->num_monkey; i++) {
     temp[i] = this->monkey[i];
     }
     Monkey new_spe;
     temp[this->num_monkey] = new_spe;
     delete [] this->monkey;
     this->monkey = temp;
     this->num_monkey++;     
     } 
     if (num == 2) {
     Sea_otters* temp = new Sea_otters[this->num_sea_otters+1];
     for (int i = 0; i < this->num_sea_otters; i++) {
     temp[i] = this->sea_otters[i];
     }
     Sea_otters new_spe;
     temp[this->num_sea_otters] = new_spe;
     delete [] this->sea_otters;
     this->sea_otters = temp;
     this->num_sea_otters++;
     }
     if (num == 3) {
     Sloths* temp = new Sloths[this->num_sloths+1];
     for (int i = 0; i < this->num_sloths; i++) {
     temp[i] = this->sloths[i];
     }
     Sloths new_spe;
     temp[this->num_sloths] = new_spe;
     delete [] this->sloths;
     this->sloths = temp;
     this->num_sloths++;

     }

}

/******************************************************
************************************** Function:add_baby
************************************ Description:adds an baby to the zoo ,the number passed in function determines which species of baby to add.
************************************ Parameters: integers
************************************* Pre-Conditions: pass an integer value
************************************ Post-Conditions:adds the baby to the zoo
***************************************************************************************/

void Zoo::add_baby(int num) {
     if (num == 1) {
     Monkey* temp = new Monkey[this->num_bab_monkey+1];
     for (int i = 0; i < this->num_bab_monkey; i++) {
     temp[i] = this->baby_monkey[i];
     }
     Monkey new_spe(0);
     temp[this->num_bab_monkey] = new_spe;
     delete [] this->baby_monkey;
     this->baby_monkey = temp;
     this->num_bab_monkey++;
     }
     if (num == 2) {
     Sea_otters* temp = new Sea_otters[this->num_bab_sea_otters+2];
     for (int i = 0; i < this->num_bab_sea_otters; i++) {
     temp[i] = this->baby_sea_otters[i];
     }
     for (int i = 0; i < 2; i++) {
     Sea_otters new_spe(0);
     temp[this->num_bab_sea_otters+i] = new_spe;
     }
     delete [] this->baby_sea_otters;
     this->baby_sea_otters = temp;
     this->num_bab_sea_otters+=2;
     }
     if (num == 3) {
     Sloths* temp = new Sloths[this->num_bab_sloths+3];
     for (int i = 0; i < this->num_bab_sloths; i++) {
     temp[i] = this->baby_sloths[i];
     }
     for (int i = 0; i < 3; i++) {
     Sloths new_spe(0);
     temp[this->num_bab_sloths+i] = new_spe;
     }
     delete [] this->baby_sloths;
     this->baby_sloths = temp;
     this->num_bab_sloths+=3;
}
}

/******************************************************
*************************************** Function:substract_baby
************************************* Description:substract a baby of an animal species from the zoo ,the number passed in function determines which species of baby to substract
************************************* Parameters: integers
************************************** Pre-Conditions: pass an integer value
************************************* Post-Conditions:substract a baby
****************************************************************************************/


void Zoo::subtract_baby(int num) {
     if (num == 1) {
     this->num_bab_monkey--;
     Monkey* temp = new Monkey[this->num_bab_monkey];
     for (int i = 0; i < this->num_bab_monkey; i++) {
     temp[i] = this->baby_monkey[i];
     }
     delete [] this->baby_monkey;
     this->baby_monkey = temp;
     }
     if (num == 2) {
     this->num_bab_sea_otters--;
     Sea_otters* temp = new Sea_otters[this->num_bab_sea_otters];
     for (int i = 0; i < this->num_bab_sea_otters; i++) {
     temp[i] = this->baby_sea_otters[i];
     }
     delete [] this->baby_sea_otters;
     this->baby_sea_otters = temp;
     }
     if (num == 3) {
     this->num_bab_sloths--;
     Sloths* temp = new Sloths[this->num_bab_sloths];
     for (int i = 0; i < this->num_bab_sloths; i++) {
     temp[i] = this->baby_sloths[i];
     }
     delete [] this->baby_sloths;
     this->baby_sloths = temp;

}
}
/******************************************************
*************************************** Function:substract_animal
************************************* Description:substract an animal species from the zoo ,the number passed in function determines which animal species to substract
************************************* Parameters: integers
************************************** Pre-Conditions: pass an integer value
************************************* Post-Conditions:substract a animal
****************************************************************************************/


void Zoo::subtract_animal(int num) {
     if (num == 1) {
     this->num_monkey--;
     Monkey* temp = new Monkey[this->num_monkey];
     for (int i = 0; i < this->num_monkey; i++) {
     temp[i] = this->monkey[i];
     }
     delete [] this->monkey;
     this->monkey = temp;
     }
     if (num == 2) {
     this->num_sea_otters--;
     Sea_otters* temp = new Sea_otters[this->num_sea_otters];
     for (int i = 0; i < this->num_sea_otters; i++) {
     temp[i] = this->sea_otters[i];
     }
     delete [] this->sea_otters;
     this->sea_otters = temp;
     }
     if (num == 3) {
     this->num_sloths--;
     Sloths* temp = new Sloths[this->num_sloths];
     for (int i = 0; i < this->num_sloths; i++) {
     temp[i] = this->sloths[i];
     }
     delete [] this->sloths;
     this->sloths = temp;

     }


}
/******************************************************
*************************************** Function:add_money
************************************* Description:adds money to the account
************************************* Parameters: float 
************************************** Pre-Conditions: float value for the  money to add
************************************* Post-Conditions:adds money to the account
****************************************************************************************/


void Zoo::add_money(float add_mon) {
     this->money_account+=add_mon;
}

/******************************************************
**************************************** Function:substract_money
************************************** Description:substract money to the account
************************************** Parameters: float
*************************************** Pre-Conditions: float value for the amount of money to deduct
************************************** Post-Conditions:deducts the money from the account
*****************************************************************************************/


void Zoo::subtract_money(float sub_mon) {
     this->money_account-=sub_mon;
}



/******************************************************
************************************** Function:display_zoo
************************************ Description:display the money in the account and the animals in the zoo
************************************ Parameters: none
************************************* Pre-Conditions: none
************************************ Post-Conditions:displays the money in the account and the animals in the zoo
***************************************************************************************/

void Zoo::display_zoo() {
    cout <<" "<<endl;
    cout <<"You have $"<<this->money_account<<" in your account"<<endl;
    cout <<"You have "<<this->num_monkey<<" adult Monkey and "<<this->num_bab_monkey<<" baby Monkey in the Zoo"<<endl;
  cout <<"You have "<<this->num_sea_otters<<" adult Sea otters and "<<this->num_bab_sea_otters<<" baby Sea otters in the Zoo"<<endl;
  cout <<"You have "<<this->num_sloths<<" adult Sloths and "<<this->num_bab_sloths<<" baby Sloths in the Zoo"<<endl;

}

/******************************************************
*************************************** Function:cost_after_day_one
************************************* Description:changes base food of all animal in the zoo using random number between 75% and 120%
************************************* Parameters: none
************************************** Pre-Conditions: none
************************************* Post-Conditions:changes base food of all animal
****************************************************************************************/

void Zoo::cost_after_day_one() {
     for(int i = 0; i < this->num_monkey; i++) {
        this->monkey[i].food_cost_after_day_one();
     }
     for(int i = 0; i < this->num_sea_otters; i++) {
        this->sea_otters[i].food_cost_after_day_one();
     }
     for(int i = 0; i < this->num_sloths; i++) {
        this->sloths[i].food_cost_after_day_one();
     }
     for(int i = 0; i < this->num_bab_monkey; i++) {
        this->baby_monkey[i].food_cost_after_day_one();
     }
     for(int i = 0; i < this->num_bab_sea_otters; i++) {
        this->baby_sea_otters[i].food_cost_after_day_one();
     }
     for(int i = 0; i < this->num_bab_sloths; i++) {
        this->baby_sloths[i].food_cost_after_day_one();
     }

}

/******************************************************
*************************************** Function:total_cost
*********************************** Description:calculates the total cost of feeding all the animal in the zoo and returns the total cost
************************************ Parameters: none
************************************* Pre-Conditions: none
************************************ Post-Conditions:returns the total cost of feeding the animals
***************************************************************************************/


float Zoo::total_cost() {
     float cost_total = 0.0;
     for(int i = 0; i < this->num_monkey; i++) {
        float c;
        c = this->monkey[i].get_food_cost();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_sea_otters; i++) {
        float c;
        c = this->sea_otters[i].get_food_cost();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_sloths; i++) {
        float c;
        c = this->sloths[i].get_food_cost();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_bab_monkey; i++) {
        float c;
        c = this->baby_monkey[i].get_food_cost();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_bab_sea_otters; i++) {
        float c;
        c = this->baby_sea_otters[i].get_food_cost();
         cost_total+=c;
     }
     for(int i = 0; i < this->num_bab_sloths; i++) {
        float c;
        c = this->baby_sloths[i].get_food_cost();
        cost_total+=c;
      }
     return cost_total;

}

void Zoo::increase_age() {
     for(int i = 0; i < this->num_monkey; i++) {
        this->monkey[i].add_age();
     }
     for(int i = 0; i < this->num_sea_otters; i++) {
        this->sea_otters[i].add_age();
     }
     for(int i = 0; i < this->num_sloths; i++) {
        this->sloths[i].add_age();
     }
     for(int i = 0; i < this->num_bab_monkey; i++) {
        this->baby_monkey[i].add_age();
     }
     for(int i = 0; i < this->num_bab_sea_otters; i++) {
        this->baby_sea_otters[i].add_age();
     }
     for(int i = 0; i < this->num_bab_sloths; i++) {
        this->baby_sloths[i].add_age();
      }

}

/******************************************************
**************************** Function:data_to_explore
**************************** Description:print out the various options for the user  when they want to buy an animal
**************************** Parameters: none
**************************** Pre-Conditions: none
**************************** Post-Conditions: none
*******************************************************************************/


void data_to_explore() {
   cout <<" "<<endl; cout<<"Enter between 1-3 to choose the species of  animal you want to buy"<<endl; cout <<" "<<endl;
   cout <<"Enter (1) if you want buy a Monkey"<<endl; cout <<" "<<endl;
   cout <<"Enter (2) if you want to buy a Sea otter"<<endl; cout <<" "<<endl;
   cout <<"Enter (3) if you want to buy a Sloth"<<endl; cout <<" "<<endl;
}

/******************************************************
 * **************************** Function:data_to_explore
 * **************************** Description:print out the various options for the user  when they want to buy an animal
 * **************************** Parameters: none
 * **************************** Pre-Conditions: none
 * **************************** Post-Conditions: none
 * *******************************************************************************/


void data_to_explore2() {
   cout <<" "<<endl; cout<<"Enter between 0-3 to choose if you want to buy an animal or not"<<endl; cout <<" "<<endl;
   cout <<"Enter (0) if you don't want to buy an animal"<<endl; cout <<" "<<endl;
   cout <<"Enter (1) if you want buy just one animal"<<endl; cout <<" "<<endl;
   cout <<"Enter (2) if you want to buy two animal"<<endl; cout <<" "<<endl;
   cout <<"Enter (3) if you want to buy three animal"<<endl; cout <<" "<<endl;
}

/******************************************************
***************************** Function:data_to_explore3
***************************** Description:print out the various options for the user when their animal is sick
****************************** Parameters: none
****************************** Pre-Conditions: none
****************************** Post-Conditions: none
*********************************************************************************/


void data_to_explore3() {
   cout <<" "<<endl; cout<<"Enter between 0-1 to choose if you want to treat your animal or let them die"<<endl; cout <<" "<<endl;
   cout <<"Enter (0) if you want to let them die"<<endl; cout <<" "<<endl;
   cout <<"Enter (1) if you want to treat them"<<endl; cout <<" "<<endl;
}

/******************************************************
****************************** Function:data_to_explore3
****************************** Description:print out the various options for the user when their animal is sick
******************************* Parameters: none
******************************* Pre-Conditions: none
****************************** Post-Conditions: none
**********************************************************************************/


void data_to_explore4() {
   cout <<" "<<endl; cout<<"Enter between 0-1 to choose if you want to continue playing the game"<<endl; cout <<" "<<endl;
   cout <<"Enter (0) if you dont want continue playing"<<endl; cout <<" "<<endl;
   cout <<"Enter (1) if you want to continue playing"<<endl; cout <<" "<<endl;
}



/******************************************************
*************************** Function:check_err
*************************** Description:checks for input errors
*************************** Parameters: none
**************************** Pre-Conditions: none
*************************** Post-Conditions: returns the input
******************************************************************************/


int check_err() {
   int r_w = 0; string uzo; int num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore();
       getline (cin, uzo);
    }  while  ((uzo != "1") && (uzo != "2") && (uzo != "3"));
    num_input = atoi(uzo.c_str());
    return num_input;
}

/******************************************************
 * *************************** Function:check_err
 * *************************** Description:checks for input errors
 * *************************** Parameters: none
 * **************************** Pre-Conditions: none
 * *************************** Post-Conditions: returns the input
 * ******************************************************************************/


int check_err2() {
   int r_w = 0; string uzo; int num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore2();
       getline (cin, uzo);
    }  while  ((uzo != "0") && (uzo != "1") && (uzo != "2") && (uzo != "3"));
    num_input = atoi(uzo.c_str());
    return num_input;
}


/******************************************************
**************************** Function:check_err3
***************************** Description:checks for input errors
**************************** Parameters: none
****************************** Pre-Conditions: none
***************************** Post-Conditions: returns the input
********************************************************************************/


int check_err3() {
   int r_w = 0; string uzo; int num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore3();
       getline (cin, uzo);
    }  while  ((uzo != "0") && (uzo != "1"));
    num_input = atoi(uzo.c_str());
    return num_input;
}

/******************************************************
***************************** Function:check_err4
****************************** Description:checks for input errors
***************************** Parameters: none
******************************* Pre-Conditions: none
****************************** Post-Conditions: returns the input
*********************************************************************************/


int check_err4() {
   int r_w = 0; string uzo; int num_input;
   do {
       if (r_w > 0) {
          cout << " " << endl;
          cout << "Oops!, Invalid Input, Please enter a valid input"<<endl;
       }
       r_w++;
       cout << " " <<endl;
       data_to_explore4();
       getline (cin, uzo);
    }  while  ((uzo != "0") && (uzo != "1"));
    num_input = atoi(uzo.c_str());
    return num_input;
}


/******************************************************
**************************************** Function:boom_revenue
*********************************** Description:calculates the total revenue of the monkey in the boom period
************************************** Parameters: none
*************************************** Pre-Conditions: none
************************************** Post-Conditions:returns the total revenue during the boom
*****************************************************************************************/



float Zoo::boom_revenue() {
     srand(time(0));
     float cost_total = 0.0;
     for(int i = 0; i < this->num_monkey; i++) {
        float c = 250.0 + (rand() % 250);
        cost_total+=c;
     }
    for(int i = 0; i < this->num_bab_monkey; i++) {
        float c = 250.0 + (rand() % 250);
        cost_total+=c;
     }
     return cost_total;
}


/******************************************************
*************************************** Function:total_revenue
********************************** Description:calculates the total revenue of all the animals in the zoo and returns the total revenue
************************************* Parameters: none
************************************** Pre-Conditions: none
************************************* Post-Conditions:returns the total revenue of all the animals in the zoo 
****************************************************************************************/


float Zoo::total_revenue() {
     float cost_total = 0.0;
     for(int i = 0; i < this->num_monkey; i++) {
        float c;
        c = this->monkey[i].get_revenue();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_sea_otters; i++) {
        float c;
        c = this->sea_otters[i].get_revenue();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_sloths; i++) {
        float c;
        c = this->sloths[i].get_revenue();
        cost_total+=c;
     }
     for(int i = 0; i < this->num_bab_monkey; i++) {
        float c;
        c = this->baby_monkey[i].get_revenue();
        int a = baby_monkey[i].get_age();
        if (a < 30 ) {
           c = c*2.00;
           cost_total+=c;
        } else {
          cost_total+=c;
        }
     }
     for(int i = 0; i < this->num_bab_sea_otters; i++) {
        float c;
        c = this->baby_sea_otters[i].get_revenue();
        int a = baby_sea_otters[i].get_age();
        if (a < 30 ) {
           c = c*2.00;
           cost_total+=c;
        } else {
          cost_total+=c;
        }

     }
     for(int i = 0; i < this->num_bab_sloths; i++) {
        float c;
        c = this->baby_sloths[i].get_revenue();
        int a = baby_sloths[i].get_age();
        if (a < 30 ) {
           c = c*2.00;
           cost_total+=c;
        } else {
          cost_total+=c;
        }

     }
     return cost_total;

}

void take_money(int num, Zoo& game) {
     if (num==1) {
        Monkey spek;
        float cost_m = spek.get_cost();
        game.add_animal(num);
        game.subtract_money(cost_m);        
     }
     if (num==2) {
        Sea_otters spek;
        float cost_m = spek.get_cost();
        game.add_animal(num);
        game.subtract_money(cost_m);
     }
     if (num==3) {
        Sloths spek;
        float cost_m = spek.get_cost();
         game.add_animal(num);
        game.subtract_money(cost_m);
     }

}

/******************************************************
************************************** Function:~Zoo
************************************ Description:frees up the memory on the heap
************************************ Parameters: none
************************************* Pre-Conditions: none
************************************ Post-Conditions:none
***************************************************************************************/

Zoo::~Zoo() {
cout <<"Destructor for the zoo"<<endl;
delete [] this->monkey;
delete [] this->sea_otters;
delete [] this->sloths;
delete [] this->baby_monkey;
delete [] this->baby_sea_otters;
delete [] this->baby_sloths;
}

