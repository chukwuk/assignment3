/****************************************
******************* Program:zoo.hpp
********************* Author:Kingsley C. Chukwu
******************* Date: 2/10/2019
******************* Description:combines all the .cpp and .hpp to play the zoo game.
******************** Input: none
****************** Output: none
*******************************************************/


#ifndef ZOO_H
#define ZOO_H


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
#include "sea_otters.hpp"
#include "sloths.hpp"


using namespace std;

class Zoo {
    private:
      Monkey* monkey;
      Sea_otters *sea_otters;
      Sloths *sloths;
      Monkey* baby_monkey;
      Sea_otters* baby_sea_otters;
      Sloths* baby_sloths;
      int num_monkey;
      int num_sea_otters;
      int num_sloths;
      float money_account;
      int num_bab_monkey;
      int num_bab_sea_otters;
      int num_bab_sloths;
    public:
    Zoo();
    void add_animal(int num);
    void display_zoo(); 
    ~Zoo();
    void add_baby(int num); 
    void add_money(float add_mon);
    void subtract_money(float sub_mon);
    void subtract_baby(int num);
    void subtract_animal(int num);
    float total_cost();
    float total_revenue();
    void cost_after_day_one();
    void increase_age(); 
    float boom_revenue();
    int r_num_monkey() { return num_monkey; }
    int r_num_sea_otters() { return num_sea_otters; }
    int r_num_sloths()   { return num_sloths; }
    int b_r_num_monkey() { return num_bab_monkey; }
    int b_r_num_sea_otters() { return num_bab_sea_otters; }
    int b_r_num_sloths()   { return num_bab_sloths; }
    float r_money_acc() { return this->money_account; } 
};
void take_money(int num, Zoo& game);
void data_explore();
int check_err();
void data_explore2();
int check_err2();
void data_explore3();
int check_err3();
void data_explore4();
int check_err4();



#endif

