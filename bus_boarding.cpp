#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>passengers;
    passengers.push("Arun");
    passengers.push("John");
    passengers.push("Ben");
    passengers.push("Jashuva");
    passengers.push("Abi");
    cout<<"Passengers waiting:"<<passengers.size()<<endl;
    if (!passengers.empty())
    {
        cout<<"Boarding passenger:"<<passengers.front()<<endl;
        passengers.pop();
    }
    cout<<"Remaining passengers:"<<endl;

    while (!passengers.empty())
    {
        cout<<passengers.front()<<endl;
        passengers.pop();
    }

    if (passengers.empty())
    {
        cout<<"Queue is empty. No passengers waiting."<<endl;
    }
    return 0;
}
