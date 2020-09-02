#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
using namespace std;
int main(){
char ch,c[10];
cout<<"Password : ";
cin.getline(c,10);
while(ch!=13)
{
    cin.getline(c,10);

    cout<<'*';
    


}
system("pause");
return 0;

}