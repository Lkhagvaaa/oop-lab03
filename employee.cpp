#include "class.h"


void employee::start_value()
{
    id = 0;
    name[3] = {};
    title[3] = {"worker"};
    worked_time = 0;
}

void employee::input(int num)
{
    cout << "Input worker ID" << endl;
    cin >> id;
    cout << "Input working time" << endl;
    cin >> worked_time;
}

void employee::input_info()
{
    /*int id_title;
    cout << "Input User_Title" << endl;
    cin >> id_title;
    cin >> title[num];*/

    int i;

    cout << "Input titles" << endl;

    for (i = 0; i < 3; i++)
    {
        
        cin >> title[i];
    }

  
    cout << "Input names" << endl;
    for (i = 0; i < 3; i++)
    {
        
        cin >> name[i];
    }

}

void employee::display_data()
{
    int i;

    for (i = 0; i < 3; i++) 
    {
        cout << "Name" <<" "<< name[i] << endl;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Title" <<" "<< title[i] << endl;
    }
}


float employee::salary_count(int title_id)
{
    cout << "Input worker ID" << endl;
    cin >> id;
    cout << "Input working time" << endl;
    cin >> worked_time;

    float salary_for_hour = 15000;

    float salary = (float)worked_time * salary_for_hour;
    
    if (title[title_id] == "ceo")
        salary = ceo_salary_count();
    cout << "Tsalin bodogdoj bui ajiltanii ner:" << name[id]<<endl;
    return salary;
}
float employee::ceo_salary_count()
{
    float salary_for_hour = 15000;
    float additional = 25000;

    float salary = (float)worked_time * salary_for_hour + additional;

    return salary;
}
bool employee::add_time()
{
    bool result;

    if (worked_time <= 24)
        result = true;
    else
        result = false;

    return result;

}