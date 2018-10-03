
#include <iostream>
using namespace std;
int main()
{
    float spd,time,dist;
    cout <<"The distance is (km): " ;
    cin>>dist;
    cout <<"The time is (hours): ";
    cin>>time; //input distance and time
    spd = dist/time;
    cout <<"The speed is: "<<spd; cout<<"km/hour";
    return 0;
}
