#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name[2];
  ofstream obj("a.txt",ios::out),obj2("b.txt",ios::out);
  obj2.is_open();
  cout<<"Name ";
  cin>>name;
  obj2<<name<<"\n"<<name<<endl;
  obj.close();
  ifstream write("b.txt");
  string ch[2];
  string cha[2];
  cout<<"Enter username";
  cin.getline(cha,2)
  while(!write.eof())
  {
   
      write.getline(ch,2,'\0');
      
      if (cha==ch)
      {
        cout<<"Matched";
      }
      
    
      
  }
  write.close();
    system("pause");
    return 0;


}