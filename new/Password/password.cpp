#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std; //needed for cout and etc

int main()
{
    START:
    system("cls");
    cout<<"\nEnter Password  : ";
    char pass[32];//to store password.
    int i = 0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            pass[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            pass[i]='\0';//null means end of string.
            break;//break the loop
        }
         }
    cout<<"\nYou entered : "<<pass;
    //here we can even check for minimum digits needed
    if(i<=5)
    {
        cout<<"\nMinimum 6 digits needed.\nEnter Again";
        getch();//It was not pausing :p
        goto START;
    }
    int size = sizeof(pass)/sizeof(char);
    cout<<"size "<<size<<endl;
    string s="";
    for (int i = 0; i < 8 ; i++)
    {
        s=s+pass[i];
    }
    cout<<"String "<<s<<endl;
   // system("cls");
    cout<<"Password : ";
    char ch[32];
    cin.getline(ch,32);
for (int i = 0; i < 32; i++)
{
    


    if (ch[i] == pass[i])
    {
        cout<<"You entered Correct Password"<<endl;
    }
}    
    system("pause");
    return 0;
}