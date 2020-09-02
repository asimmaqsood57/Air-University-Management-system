#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
public:
string name;
int age;
};
int main()
{
 student s1[5],s2,s3;
/*ofstream obj("c.txt",ios::out);
obj.is_open();
cout<<"Enter your name ";
getline(cin,s1.name);
obj<<s1.name<<endl;
cout<<"Enter your Age ";
cin>>s1.age;
obj<<s1.age<<endl;
obj.close();*/
ifstream asd("c.txt",ios::in);
for (int i = 0; i < 5; i++)
{
asd >> s1.name[i];

asd >> s1.age[i];
}
string username;
string password;
cout<<"Enter username ";
cin.ignore();
getline(cin,username);
cout<<"Enter Password ";
getline(cin,password);
 system("pause");
    return 0;
}