/****************************************
****************** Program:playzoo.cpp
******************** Author:Kingsley C. Chukwu
****************** Date: 2/10/2019
****************** Description:combines all the .cpp and .hpp to play the zoo game.
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
#include "monkey.hpp"
#include "sea_otters.hpp"
#include "sloths.hpp"
#include "zoo.hpp"


using namespace std;

int main () { 
    srand(time(0));
    Zoo game; int count = 0;
    while (0.00<game.r_money_acc()) {    
    int chu = check_err2();
    if (chu == 0) {game.display_zoo();}
    int x = 0; int kcc = 100;
    for (int i = 0; i < chu; i++) {
       do {      
       kcc = check_err();
       if (kcc==x) { cout <<""<<endl; cout <<"oops!, you can only buy one species of animal in a day"<<endl;   }       
       } while (x==kcc);
       take_money(kcc, game);
       x = kcc;
       game.display_zoo(); 
    }
    game.increase_age(); 
    float tot_rev = game.total_revenue(); game.add_money(tot_rev);
    if (count >=1) { game.cost_after_day_one(); }
    float tot_cost = game.total_cost(); game.subtract_money(tot_cost);
    game.display_zoo(); 
    int chose_num = rand() % 4;
//   chose_num = 1;
     count++;
//special event for boom in zoo attendance
    if (chose_num == 3) {
    cout<<" "<<endl;  cout <<"There is boom in zoo attendance"<<endl;
    float cost_tot = game.boom_revenue(); game.add_money(cost_tot); game.display_zoo();   
    }
//special event for an animal to have a baby
    if (chose_num == 2) {
        int r = 0; int s = 0; int x = game.r_num_monkey(); int y = game.r_num_sea_otters(); int z = game.r_num_sloths();
       if ( (x + y + z)>0 ) {
          cout <<" "<<endl;  cout << "An animal will have a baby. hahahahahah!" <<endl;
          while(1 == 1) {
          r = 1 + (rand() % 3);
          if (r == 1) { if (x>0) { break; }  }  if (r == 2) { if (y>0) { break; }  }  if (r == 3) { if (z>0) { break; }  }
          } cout <<" "<<endl;
          if (r == 1) { cout <<"A monkey has given birth"<<endl; game.add_baby(r);  } 
          if (r == 2) {cout <<"A Sea_otters has given birth"<<endl; game.add_baby(r);  }
          if (r == 3) {cout <<"A Sloths has given birth"<<endl; game.add_baby(r);  }  game.display_zoo();

       }
    }
   //special event for an animal to fall sick
    if (chose_num == 1) {
        int r = 0; int s = 0; int x = game.r_num_monkey(); int y = game.r_num_sea_otters(); int z = game.r_num_sloths();
       int a = game.b_r_num_monkey(); int b = game.b_r_num_sea_otters(); int c = game.b_r_num_sloths();
       if ( (x + y + z + a + b + c)>0 ) {
          cout<<" "<<endl;    cout << "An animal will fall sick. so sad!!" <<endl;
          while(1 == 1) {
        //  r = 2;
          r = 1 + (rand() % 6);
          if (r == 1) { if (x>0) { break; }  }  if (r == 2) { if (y>0) { break; }  }  if (r == 3) { if (z>0) { break; }  }
          if (r == 4) { if (a>0) { break; }  }  if (r == 5) { if (b>0) { break; }  }  if (r == 6) { if (c>0) { break; }  }
          } cout <<" "<<endl;
          if (r == 1) { cout <<"A Monkey has fallen sick. so sad!!"<<endl; Monkey che; float num = che.get_cost(); num=num*0.5;
              if (num > game.r_money_acc()) {game.subtract_animal(1); } 
               else {Monkey tes; float c_sick = tes.get_cost(); c_sick=c_sick*0.500; game.subtract_money(c_sick);  }  }
          if (r == 2) {cout <<"A Sea_otter has fallen sick. so sad!!"<<endl; Sea_otters che; float num = che.get_cost(); num=num*0.5;
            if (num > game.r_money_acc()) {game.subtract_animal(2); }
               else {Sea_otters tes; float c_sick = tes.get_cost(); c_sick=c_sick*0.500; game.subtract_money(c_sick);  }  }
          if (r == 3) {cout <<"A Sloth has fallen sick. so sad!!"<<endl; Sloths che; float num = che.get_cost(); num=num*0.5;
             if (num > game.r_money_acc()) {game.subtract_animal(3); }
               else {Sloths tes; float c_sick = tes.get_cost(); c_sick=c_sick*0.500; game.subtract_money(c_sick);  }  }
          if (r == 4) {cout <<"A baby Monkey has fallen sick. so sad!!"<<endl; Monkey che; float num = che.get_cost();
             if (num > game.r_money_acc()) {game.subtract_baby(1); }
               else {Monkey tes; float c_sick = tes.get_cost();  game.subtract_money(c_sick);  }  }
          if (r == 5) {cout <<"A baby Sea_otter has fallen sick. so sad!!"<<endl; Sea_otters che; float num = che.get_cost();
            if (num > game.r_money_acc()) {game.subtract_baby(2); }
               else {Sea_otters tes; float c_sick = tes.get_cost();  game.subtract_money(c_sick);  }  }
          if (r == 6) {cout <<"A Sloth has fallen sick. so sad!!"<<endl; Sloths che; float num = che.get_cost(); 
             if (num > game.r_money_acc()) {game.subtract_baby(3); }
               else {Sloths tes; float c_sick = tes.get_cost(); game.subtract_money(c_sick);  }  }
           game.display_zoo();

       }
    }
//   int numb = check_err4(); if (numb == 0) { break; }  
   }
   cout <<""<<endl; cout<<"The zoo went bankrupt, so you lose"<<endl; 
   return 0;
}
