
#include <iostream>
#include "class.h"

using namespace std;

void swap_user(int *a, int *b);
int sum(int a, int b);


int main()
{
    /*int numbers[5];
    int* p;
    p = numbers;  *p = 10;
    p++;  *p = 20;
    p = &numbers[2];  *p = 30;
    p = numbers + 3;  *p = 40;
    p = numbers;  *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";

    int m = 10;
    int n = 20;

    swap_user(&m, &n);

    int niilber = sum(m, n);
    cout << "niilber=" << niilber << endl; */

    //Working class

    employee emp;
    

    emp.input_info();
    emp.display_data();


    int tit_id;

    cout << "Input title id" << endl;
    cin >> tit_id;
    float tsalin = emp.salary_count(tit_id);
    cout << "Worker tsalin" <<" "<<tsalin << endl;

    bool work_time;

    work_time = emp.add_time();
    cout << "Ajillasan tsag nemegduuleh" << " " << work_time << endl;
    return 0;

}
void swap_user(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    b = &temp;
    cout <<"a="<< *a << " " <<"b="<< *b << endl;

}

int sum(int a, int b)
{
    int k;
    k = a + b;

    return k;
}

