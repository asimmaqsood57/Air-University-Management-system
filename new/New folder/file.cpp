#include<iostream>
#include<fstream>
using namespace std;
struct user{
string name;
char pass[32];
};
int main(){
    user u1[2];
    ifstream obj("rec.txt");
    
    for (int i = 0; i < 2; i++)
    {
        obj>>u1[i].name;
        obj>>u1[i].pass;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<u1[i].name<<endl;
       // cout<<u1[i].pass<<endl;
    }
    
    /*
    string name;
    char pa[32];
    cout<<"Enter Name ";
    getline(cin,name);
    for (int i = 0; i < 2; i++)
    {
        
    if (name==u1[i].name)
    {
        cout<<"Successful"<<endl;
    }
    }*/




    system("pause");
    return 0;
}