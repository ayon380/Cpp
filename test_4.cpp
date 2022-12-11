#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;
// int curr_id=0;
vector<int> ids;
class user
{
private:
    string name, phone, email, dob, add;
    int hei, wei;
    string un, pw;
    string mode;

public:
    void createuser()
    {
        ofstream myfile("manoj.txt", ios::app);
        cout << "enter name:";
        cin >> name;
        cout << "enter phone number:";
        cin >> phone;
        cout << "enter Date of birth : ";
        cin >> dob;
        cout << "enter height : ";
        cin >> hei;
        cout << "enter weight : ";
        cin >> wei;
        cout << "enter the address : ";
        cin >> add;
        cout << "enter email:";
        cin >> email;
        cout << "enter password:";
        cin >> pw;

        ifstream fopen1("manoj.txt");
        srand(time(0));
        int idno = 109754;
        ids.push_back(idno);
        while ((count(ids.begin(), ids.end(), idno)))
        {
            idno = rand();
        }
        myfile << idno << "  " << name << "  " << phone << "  " << dob << "  " << hei << "  " << wei << "  " << add << "  " << email << "  " << pw << "\n";
        cout << "ACCOUNT CREATED SUCCESSFULLY!!" << endl;

        myfile.close();
    }
    void userlogin()
    {
        int cou;
        string ee, pp, e, p, n, ph, db, h, w, ress;
        int k;
        int id;
        cout << "Press '1' to create a new account\nPress any other number to login\n";
        cin >> k;
        if (k == 1)
        {
            createuser();
        }
        else
        {
            cout << "enter email : ";
            cin >> ee;
            cout << "enter password : ";
            cin >> pp;
            string line1;
            ifstream myfiler("manoj.txt");
            while (myfiler >> id >> n >> ph >> db >> h >> w >> ress >> e >> p)
            {

                if (ee == e && pp == p)
                {
                    cou = 1;
                }
            }
            myfiler.close();
            if (cou == 1)
            {
                cout << "LOGGED IN SUCCESSFULLY!!" << endl;
                cout << "1.Join gym\n2.Quit gym\n3.Edit Profile\n";
                int choice;
                cout << "Enter your choice : ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "Join gym" << endl
                         << endl;
                    cout << "There are 2 Membership options as listed below : \n1.Silver : \ni.Trainer will not be provided\nii.Weekly 15hours  Gym accessibility\niii.SIX Months---RS.10,000/-\n";
                    cout << "iv.ONE Year---RS.18,000/-\n"
                         << "2.Gold : \ni.Trainer will be provided\nii.Weekly unlimited hours Gym accessibility\niii.SIX Months---RS.20,000/-\n";
                    cout << "iv.ONE Year---RS.38,000/-\n";
                    cout << "Enter which Membership u want to purchase : ";
                    int sg;
                    cin >> sg;
                    if (sg == 1)
                    {
                        cout << "Enter the duration for which you want to purchase the membership(press 1 for six months 2 for one year) : ";
                        int ship;
                        cin >> ship;
                        if (ship == 1)
                        {
                            cout << "Amount to be paid is 10,000/-\n";
                            cout << "Enter your UPI ID : ";
                            string upi;
                            cin >> upi;
                            int pin;
                            cout << "Enter UPI pin : ";
                            cin >> pin;
                            cout << "Your Payment is successfull\n";
                        }
                        else if (ship == 2)
                        {
                            cout << "Amount to be paid is 18,000/-\n";
                            cout << "Enter your UPI ID : ";
                            string upi;
                            cin >> upi;
                            int pin;
                            cout << "Enter UPI pin : ";
                            cin >> pin;
                            cout << "Your Payment is successfull\n";

                        }
                        else
                        {
                        }
                    }
                    else if (sg == 2)
                    {
                        cout << "Enter the duration for which you want to purchase the membership(press 1 for six months 2 for one year) : ";
                        int ship;
                        cin >> ship;
                        if (ship == 1)
                        {
                            cout << "Amount to be paid is 20,000/-\n";
                            cout << "Enter your UPI ID : ";
                            string upi;
                            cin >> upi;
                            int pin;
                            cout << "Enter UPI pin : ";
                            cin >> pin;
                            cout << "Your Payment is successfull\n";
                        }
                        else if (ship == 2)
                        {
                            cout << "Amount to be paid is 38,000/-\n";
                            cout << "Enter your UPI ID : ";
                            string upi;
                            cin >> upi;
                            int pin;
                            cout << "Enter UPI pin : ";
                            cin >> pin;
                            cout << "Your Payment is successfull\n";
                        }
                        else
                        {
                        }
                    }
                    break;
                case 2: // cout<<"Are you sure you need to quit the Gym\n";
                    // quit gym
                    ifstream users("manoj.txt");
                    ofstream ofs("temp.txt", ios::app);
                    // ofs.open("temp.txt", ofstream::out);
                    char c;
                    int line_no = 1;
                    string idd, namee, phh, dobb, hh, ww, ad1, em1, pw1;
                    while (users >> idd >> namee >> phh >> dobb >> hh >> ww >> ad1 >> em1 >> pw1)
                    {
                        if (ee == em1)
                            continue;
                        else
                            ofs << idd << "  " << namee << "  " << phh << "  " << dobb << "  " << hh << "  "
                                << "  " << ww << "  " << ad1 << "  " << em1 << "  " << pw1 << "\n";
                    }
                    ofs.close();
                    users.close();
                    remove("manoj.txt");
                    rename("temp.txt", "manoj.txt");
                    cout << "YOU HAD QUIT THE GYM" << endl;
                    break;
                    /*case 3: cout<<"Your current profile is as below : \n";
                            cout<<"Name : "<<name<<"\nPhone : "<<phone<<"\nDOB : "<<dob<<"\nHeight : "<<hei<<"\nWeight : "<<wei<<"\nAddress : "<<add<<"\nEmail-id : "<<email<<"\nPassword : "<<pw<<"\n";
                            string flag="yes";
                            while(flag=="yes")
                            {
                                cout<<"What do you want to edit : ";
                                string s;
                                cin>>s;
                                if(s==name)
                                {
                                    cout<<"Enter the new name : ";
                                    cin>>n
                                }
                            }*/
                }
            }
            else
            {

                cout << "NO";
            }
        }
    }
};
class trainer
{
    int t[2][2]={0};
    void input()
    {
        if(t[0]==t[1])
        {
            t[0]++;
        }
        if(t[0]<t[1])
    }

};

int main()
{
    user uu;
    uu.userlogin();
}