#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    char ch[40];
    ifstream obj("abc.txt",ios::app);
    obj.is_open();
   while (!obj.eof())
   {
       obj.getline(ch,40);
       cout<<ch;
   }

   
   // obj<<"Name : "<<name<<endl;
    obj.close();

system("pause");
return 0;
}