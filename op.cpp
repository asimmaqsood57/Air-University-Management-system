#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    void setdate();
    void Displaydate();
    void showdate();
};

void Date ::showdate()
{
    cout << day << "/" << month << "/" << year << endl;
}
void Date::Displaydate()
{
    ofstream obj("record.txt", ios ::app);
    cout << day << "/" << month << "/" << year << endl;
    obj << "Age ";
    obj << day << "/" << month << "/" << year << endl;
}
void Date::setdate()
{
    int d, m, y;
    cout << "Enter Day-Month-Year" << endl;

    cin >> d >> m >> y;
    day = d;
    month = m;
    year = y;
}

Date::Date()
{
    day = month = year = 0;
}
struct users
{
    char name[4];
    char password[8];
};
class person
{
public:
    string username;
    Date age;
    char Mobileno[15];
    string address;
    char pass[32];

    //    void setaddress();
    //  void setMobile();
    //void setdate();

    //void setname();

    //void showdata();
};
/*void person::setdate()
{
    age.setdate();
}

void person::setMobile()
{
    char mblno[15];
    cout << "Enter Mobile No. ";
    cin.ignore();
    cin.getline(mblno, 15);
    for (int i = 0; i < 15; i++)
    {
        Mobileno[i] = mblno[i];
    }
}

void person ::setname()
{
    
    //cin>>n;

    string _name;
    cin.ignore();
    getline(cin, _name);
    name = _name;
}
void person::showdata()
{

    ofstream obj("record.txt", ios::app);
    obj.is_open();

    cout << "Name " << name << endl;
    obj << "Name " << name << endl;
    cout << "Age ";
    {
        age.Displaydate();
    }

    cout << "Mobile No. " << Mobileno << endl;
    obj << "Mobile No. " << Mobileno << endl;
    cout << "Address  " << address << endl;
    obj << "Address  " << address << endl;
    obj << endl;
    obj << endl;

    obj.close();
}
void person::setaddress()
{
    string add;

    cout << "Enter Your Address ";
    getline(cin, add);
    address = add;
}

*/
class student : public person
{
private:
    float GPA;
    string course;

public:
    student()
    {

        GPA = 0;
    }
    void setcourse();

    void setgpa();
    void showcourse();
};
void student ::showcourse()
{
    cout << course << endl;
}
void student ::setcourse()
{
    string _course;
    getline(cin, _course);
    course = _course;

    ofstream ob("record.txt", ios::app);
    ob.is_open();
    ob << "Course " << course << endl;
    ob.close();
}
void student::setgpa()
{
    float g;
    cout << "Enter GPA ";
    cin >> g;
    GPA = g;
}
class admin
{
private:
    Date d;

public:
    void setadmdate();
};

class empolyee : public person
{
};
int main()
{
    bool b = true;
    int len;
    int n, emp, m, i;
    if (b == true)
    {
        len = 0;
        n = 0;
        emp = 0;
        m = 0;

        b = false;
    }
    student *s;
    empolyee *e;
    string st;
    do
    {

        //system("color b1");
        cout << "\t\t=====================================================================\n\n\n\n\n\n\n\n\n\n"
             << endl;
        cout << "\t\t\t" << endl;
        cout << "\t\t\t\t\t   /\\    |    | " << endl;
        cout << "\t\t\t\t\t  /--\\   |    | " << endl;
        cout << "\t\t\t\t\t /    \\  \\____/    " << endl;
        cout << "\t\t\t\t\t AIR UNIVERSITY" << endl;
        cout << "\t\t\t\t\t   ISLAMABAD   " << endl;
        cout << "\t\t\tIf you are a new user then please write \"Sign-up\"" << endl;
        cout << "\t\t\tIf you are already account please write \"Sign-in\"" << endl;
        char ch[] = {"signin"};

        cout << "\n\n\n\n\n";
        cout << "\t\t=====================================================================" << endl;
        string choice;
        bool b;

        cout << endl;
        cout << "Enter Your Choice here : ";

        cin >> choice;

        if (choice == "signin")
        {

            cout << "Signin to continue" << endl;
            b = false;
            string ch;
            string nam;
            char stpass[32];
            system("cls");
            cout << "\t\t write \"student\" if your Designation is a student " << endl;
            cout << "\t\t\t.....OR......." << endl;
            cout << "\t\t write \"teacher\" if your Designation is a teacher " << endl;
            cout << "Write here : ";
            cin >> ch;
            if (ch == "student")
            {
                char z, arr[32];
                cout << "Enter your username : ";
                cin.ignore();
                getline(cin, nam);

                for (i = n; i <= len; n++)
                {

                    if (nam == s[i].username)
                    {
                        cout << "You entered Correct Name! " << endl;
                        cout << "Enter Password";

                        for (int k = 0;;)
                        {
                            z = getch();
                            if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z') || (z >= '0' && z <= '9'))
                            {
                                arr[k] = z;
                                ++k;
                                cout << "*";
                            }
                            if (z == '\b' && k >= 1)
                            {
                                cout << "\b";
                                --k;
                            }
                            if (k == 8)
                            {
                                arr[k] = '\0';
                                if (arr[k] == s[i].pass[k])
                                {

                                    cout << "\t\tSuccessfully logged in" << endl;
                                    cout << endl;
                                    system("cls");
                                    cout << "\t.....Welcome to Student Portal..." << endl;
                                    cout<<"\t        .......MENU......."<<endl;
                                    cout << "Your Designation : student " << endl;
                                    int x;
                                    cout<<"\n\n\t1.Current Semester\n\t2.Attandance\n\t3.Courses\n\t4.Result\n\n";
                                    cout<<"Enter your Desired option No. ";
                                    cin>>x;
                                    switch (x)
                                    {
                                    case 1:
                                        cout<<"Your Current Semester : 1 "<<endl;
                                        break;
                                        case 2:

                                    
                                    default:
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                        }
                    }
                    break;
                }
                break;
            }

            if (ch == "teacher")
            {
                string name;
                char x, tarr[32];
                cout << "Enter your username : ";
                cin >> name;

                /*   for (int i = m; i < emp; n++)
                {

                    if (name == e[i].)
                    {
                        //  if (pa == e[i].Password)
                        for (int i = n; i < len; n++)
                {*/
                for (int t = m; t < emp; m++)
                {

                    if (name == e[t].username)
                    {
                        cout << "Enter your Password : ";
                        for (int o = 0;;)
                        {
                            x = getch();
                            if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9'))
                            {
                                tarr[o] = x;
                                ++o;
                                cout << "*";
                            }
                            if (x == '\b' && o >= 1)
                            {
                                cout << "\b \b";
                                --o;
                            }
                            if (o == 8)
                            {
                                tarr[o] = '\0';
                                if (tarr[o] == e[t].pass[o])
                                {
                                    cout << "\t\tSuccessfully Logged in" << endl;
                                    cout << endl;
                                    cout << "\t.....Welcome to Teacher Portal........" << endl;

                                    cout << "Your Designation : Teacher " << endl;
                                    break;
                                }
                            }
                        }
                    }
                    break;
                }
                break;
            }
        }

        if (choice == "signup")
        {
            system("cls");
            cout << "\t...Thanks for Choosing AIR UNIVERSITY......" << endl;
            cout << "\t\t.....Welcome to AU Family........" << endl;

            cout << "..............Create New Account........." << endl;
            cout << "......If you are a student write \"student\"" << endl;
            cout << ".......OR....." << endl;
            cout << ".......If you are a teacher write \"teacher\"........" << endl;
            string designation;
            cin >> designation;

            if (designation == "student")
            {
                len++;
                s = new student[len];

                cout << "Your Designation : " << designation << endl;
                cout << "Enter Your Name ";

                for (i = n; i < len; n++)
                {

                    cout << endl;

                    cout << "value of i : " << i << endl;
                    cout << "Your ID No. " << len << endl;
                    {
                        ofstream obj("record.txt", ios::app);
                        obj.is_open();
                        obj << "Your ID No. " << len << endl;
                        obj.close();
                    }
                    cout << " Username : ";
                    cin.ignore();
                    getline(cin, s[i].username);

                    ofstream obj("studentnamespass.txt", ios::app);
                    obj.is_open();

                    obj << "Name " << s[i].username << endl;
                    obj.close();

                    s[i].age.setdate();
                    s[i].age.Displaydate();
                    cout << "Enter Mobile No. ";
                    cin.ignore();
                    cin.getline(s[i].Mobileno, 15);
                    ofstream ob("record.txt", ios::app);
                    ob.is_open();
                    cout << "Enter Your Address ";

                    getline(cin, s[i].address);
                    ob << "Mobile No. " << s[i].Mobileno << endl;
                    ob << "Address " << s[i].address << endl;
                    cout << "Please Enter the name of Your Desire Course : " << endl;
                    cout << "These are the courses which we offer : " << endl;
                    cout << "\t1.BS Software-Engineering (Non-PEC)\n\t2.BS Computer Science\n\t3.BS Cyber Security\n\t4.BS Information Technology\n\t5.BS Mathematice\n\t6.BS Physics " << endl;
                    cout << "Enter here : ";
                    s[i].setcourse();
                    cout << "Enter Account Password(must and only 8-Characters) ";
                    char a;

                    for (int j = 0;;)
                    {
                        a = _getch();
                        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
                        {
                            {
                                s[i].pass[j] = a;
                                ++j;
                                cout << "*";
                            }
                            if (a == '\b' && j >= 1)
                            {
                                cout << "\b \b";
                                --j;
                            }
                            if (j == 8)
                            {

                                s[i].pass[j] = '\0';
                                ofstream obj("studentnamespass.txt", ios::app);
                                obj.is_open();
                                obj << s[i].pass << endl;
                                obj << endl;
                                obj << endl;
                                obj.close();
                                break;
                            }
                        }
                    }
                    cout << endl;
                    cout << endl;
                    cout << "\t\t=====================================================================" << endl;
                    cout << "\t\t\t.......Roll No. Slip For Entry Test........" << endl;
                    cout << "\t\t\t" << endl;
                    cout << "\t\t\t\t\t   /\\    |    | " << endl;
                    cout << "\t\t\t\t\t  /--\\   |    | " << endl;
                    cout << "\t\t\t\t\t /    \\  \\____/    " << endl;
                    cout << "\t\t\t\t\t AIR UNIVERSITY" << endl;
                    cout << "\t\t\t\t\t   ISLAMABAD   " << endl;
                    cout << "\t\tID No. " << len << endl;
                    cout << "\t\tCourse : ";
                    s[i].showcourse();
                    cout << "\t\tName : " << s[i].username << endl;
                    cout << "\t\tDob  : ";
                    s[i].age.showdate();
                    cout << "\t\tContact No. : " << s[i].Mobileno << endl;
                    cout << "\t\tAddress : " << s[i].address << endl;
                    cout << "\t\t=====================================================================" << endl;

                    ob << endl;
                    ob << endl;
                    ob.close();
                    //   s[i].setdate();
                    // s[i].setMobile();
                    //s[i].setaddress();

                    //s[i].showdata();

                    break;
                }
            }

            if (designation == "teacher")
            {
                emp++;
                e = new empolyee[emp];

                cout << "Your Designation : " << designation << endl;

                for (int i = m; i < emp; m++)
                {

                    cout << endl;

                    cout << "value of i : " << i << endl;
                    cout << "Your ID No. " << emp << endl;
                    {
                        ofstream obj("record.txt", ios::app);
                        obj.is_open();
                        obj << "Your ID No. " << emp << endl;
                        obj.close();
                    }
                    cout << " Username : ";

                    cin >> e[i].username;

                    ofstream obj("teacher_record.txt", ios::app);
                    obj.is_open();

                    obj << "Name " << e[i].username << endl;

                    //   e[i].age.setdate();
                    // e[i].age.Displaydate();
                    cout << "Enter Mobile No. ";
                    cin.ignore();
                    cin.getline(e[i].Mobileno, 15);
                    cout << "Enter Your Address ";
                    cin.ignore();
                    getline(cin, e[i].address);
                    obj << "Mobile No. " << e[i].Mobileno << endl;
                    obj << "Address " << e[i].address << endl;
                    cout << "Enter Account Password(must and only 8-Characters) ";

                    char q;

                    for (int r = 0;;)
                    {
                        q = _getch();
                        if ((q >= 'a' && q <= 'z') || (q >= 'A' && q <= 'Z') || (q >= '0' && q <= '9'))
                        {
                            {
                                e[i].pass[r] = q;
                                ++r;
                                cout << "*";
                            }
                            if (q == '\b' && r >= 1)
                            {
                                cout << "\b \b";
                                --r;
                            }
                            if (r == 8)
                            {

                                e[i].pass[r] = '\0';
                                break;
                            }
                        }
                    }

                    obj << endl;
                    obj << endl;
                    obj.close();
                    //   s[i].setdate();
                    // s[i].setMobile();
                    //s[i].setaddress();

                    //s[i].showdata();

                    break;
                }
                

                // e1.setname();
                //e1.setdate();
                //e1.setMobile();
                // e1.showdata();
            }
        }

        cout << " Enter ok ";

        cin >> st;

        system("cls");
    } while (st == "ok");

    system("pause");
    return 0;
}
