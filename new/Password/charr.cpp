#include<iostream>
using namespace std;
int main()
{
    char arr[3]={'1','2','3'};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (i==2)
        {
            cout<<"Enter Number u want to replace : ";
            cin>>arr[2];
            
        }
        
        cout<<arr[i]<<endl;
    }
    

    system("pause");
    return 0;
}