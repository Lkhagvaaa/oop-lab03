#include <iostream>
#include <string>
using namespace std;


#pragma once
class employee
{
public:
    int id;
    string name[3];
    string title[3];
    int worked_time;

    void start_value();
    void input(int num);
    void input_info();
    void display_data();
    float salary_count(int title_id);
    float ceo_salary_count();
    bool add_time();
    

};

