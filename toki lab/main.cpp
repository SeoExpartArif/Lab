#include <iostream>

using namespace std;

int main()
{
    int key;
    cout<<"enter a number";
    cin>>key;
    int number[20]={20,10,15,33,44,55,70,50,21,99,11,22,33,44,56,66,77,88,98,87};
    for(int i=0;i<20;i++)

    {
        if(number[i]==key)

    {

    cout << "found at "<< i;

    }

    }
    return 0;
}
