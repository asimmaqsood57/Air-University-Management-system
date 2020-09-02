#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
   fstream newfile;
   newfile.open("tpoint.txt",ios::out);  // open a file to perform write operation using file object
   string s1;
   cout<<"Enter Your name";
   cin>>s1;
   if(newfile.is_open()) //checking whether the file is open
   {
      newfile<<s1;   //inserting text
      newfile.close();    //close the file object
   }
   newfile.open("tpoint.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
      if (tp == s1)
      {
         cout << tp << "\n"; //print the data of the string
      }
      }
      newfile.close(); //close the file object.
   }

   system("pause");
   return 0;
}