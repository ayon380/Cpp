#include <bits/stdc++.h>
using namespace std;
class trainName
{
public:
    int no;
    string name;
    float ttime;
    string days;
    trainName() {}
    trainName(int no, string name, int ttime, string days)
    {
        this->no = no;
        this->name = name;
        this->ttime = ttime;
        this->days = days; // 0-sunday ,1-monday
    }
};
bool isGoing(string s, string from, string to)
{
    int pos = s.find("::");
    string str = s.substr(pos + 2);
    int len = str.length();
    int e = 0;
    while (len != 0)
    {
        pos = str.find(",");
        string a = str.substr(0, pos);
        if (a == from)
        {
            e = 1;
        }
        if (a == to and e == 1)
        {
            return true;
        }
        str = str.substr(pos + 1);
        len = str.length();
    }
    return false;
}
int dayofweek(int d, int m, int y)
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 +
            y / 400 + t[m - 1] + d) %
           7;
}
bool isRunning(trainName t, int dd,int mm , int yy)
{
    int q=dayofweek(dd,mm,yy);
    if (t.days[q] == '1')
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 4;
    // Train List
    trainName train[n];
    train[0].no = 12245;
    train[0].name = "HWH-SMVT DURONTO EXP ::HWH,KGP,BBS,KUR,VZN,VSKP,BZA,RU,KPD,SMVT,";
    train[0].ttime = 29;
    train[0].days = "1101110";

    train[1].no = 12246;
    train[1].name = "SMVT-HWH DURONTO EXP ::SMVT,KPD,RU,BZA,VSKP,VZN,KUR,BBS,KGP,HWH,";
    train[1].ttime = 29.30;
    train[1].days = "1110110";

    train[2].no = 12839;
    train[2].name = "HWH-MAS MAIL EXP ::HWH,KGP,BBS,KUR,VZN,VSKP,BZA,MAS,";
    train[2].ttime = 29.30;
    train[2].days = "1110110";

    train[3].no = 12840;
    train[3].name = "MAS-HWH MAIL EXP ::MAS,BZA,VSKP,VZN,KUR,BBS,KGP,HWH,";
    train[3].ttime = 29.30;
    train[3].days = "1110110";

    cout << "INDIAN RAILWAYS" << endl;
    cout << "Train Route Map" << endl;
    cout << "                                                 <-> MAS" << endl;
    cout << "                                               /" << endl;
    cout << "HWH <-> KGP <-> BBS <-> KUR <-> VZN <-> VSKP <-> BZA " << endl;
    cout << "                                               \\" << endl;
    cout << "                                                 <-> RU <-> KPD -> SMVT" << endl;

    // Main Menu
    cout << " IRCTC RESERVATION " << endl;
    string from, to;
    cout << "Enter from station";
    cin >> from;
    cout << "Enter to station";
    cin >> to;
    int dd,mm,yy;
    cout << "Enter the Date of Travel in the form of DD MM YYYY";
    cin>>dd>>mm>>yy;
    for (auto &c : from)
        c = toupper(c);
    for (auto &c : to)
        c = toupper(c);
    bool trainfound = false;
    for (int i = 0; i < n; i++)
    {
        if (isGoing(train[i].name, from, to) && isRunning(train[i], dd,mm,yy))
        {
            string str = train[i].name;
            int pos = str.find("::");
            str = str.substr(0, pos);
            trainfound = true;
            cout << train[i].no << " " << str << endl;
        }
        else
        {
            continue;
        }
    }
    if (!trainfound)
        cout << "No Trains Found :)";

    return 0;
}
