#include <iostream>
#pragma gcc optimize("O3")
#include <iomanip>
using namespace std;

struct Employee_str{
    char Name[25];
    int IdNum;
};

int main( )
{
    Employee_str employee[5];
    int loop;
    for(loop=0; loop<5; loop++)
    {
        cout<< "Enter name for employee" <<(loop+1)<<" : ";
        cin.getline(employee[loop].Name,80, '\n');

        cout<< "Enter ID #: ";
        cin>>employee[loop].IdNum;
        cin.ignore(80, '\n');
    }

    cout<<"\nemployee data:\n";
    cout.flags(ios::left);
    cout<<setw(15)<<"Name"<<"\tID#\n_________________\n";

    for(loop =0; loop<5; loop++)
    {
        cout<<setw(15)<<employee[loop].Name;
        cout<<"\t"<<employee[loop].IdNum<<endl;
    }
    cout<<endl;
}