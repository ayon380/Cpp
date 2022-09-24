#include <bits/stdc++.h>
using namespace std;
class trainName
{
public:
    int no;
    string name;
    float ttime;
    string days;
    int dtime, arrtime, stops;
    trainName() {}
};
int isGoing(string s, string from, string to)
{
    int q = 1;
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
            q = 0;
            // continue;
        }
        if (a == to and e == 1)
        {
            return q;
        }
        q++;
        str = str.substr(pos + 1);
        len = str.length();
    }
    return false;
}
int nostaions(string s, string to)
{
    int q = 0;
    int pos = s.find("::");
    string str = s.substr(pos + 2);
    int len = str.length();
    int e = 0;
    while (len != 0)
    {
        pos = str.find(",");
        string a = str.substr(0, pos);
        if (a == to)
        {
            return q;
        }
        q++;
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
bool isRunning(trainName t, int dd, int mm, int yy)
{
    int q = dayofweek(dd, mm, yy);
    if (t.days[q] == '1')
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 6;
    // Train List
    trainName train[n];
    train[0].no = 12245;
    train[0].name = "HWH-SMVT DURONTO EXP ::HWH,BBS,VZN,BZA,RU,SMVT,";
    train[0].ttime = 29;
    train[0].days = "1101110";
    train[0].dtime = 1050;
    train[0].arrtime = 1550;
    train[0].stops = 5;

    train[1].no = 12246;
    train[1].name = "SMVT-HWH DURONTO EXP ::SMVT,KPD,RU,BZA,VSKP,VZN,KUR,BBS,KGP,HWH,";
    train[1].ttime = 29.30;
    train[1].days = "1110110";
    train[1].dtime = 1050;
    train[1].arrtime = 1550;
    train[1].stops = 10;

    train[2].no = 12839;
    train[2].name = "HWH-MAS MAIL EXP ::HWH,KGP,BBS,KUR,VZN,VSKP,BZA,MAS,";
    train[2].ttime = 27.5;
    train[2].days = "1111111";
    train[0].dtime = 1050;
    train[0].arrtime = 1550;

    train[3].no = 12840;
    train[3].name = "MAS-HWH MAIL EXP ::MAS,BZA,VSKP,VZN,KUR,BBS,KGP,HWH,";
    train[3].ttime = 27.7;
    train[3].days = "1111111";
    train[0].dtime = 1050;
    train[0].arrtime = 1550;

    train[4].no = 12863;
    train[4].name = "HWH SMVB EXP ::HWH,KGP,BBS,KUR,VZN,VSKP,BZA,RU,KPD,SMVT,";
    train[4].ttime = 31.8;
    train[4].days = "1111111";
    train[4].dtime = 2300;
    train[4].arrtime = 645;

    train[5].no = 12864;
    train[5].name = "SMVT-HWH EXP ::SMVT,KPD,RU,BZA,VSKP,VZN,KUR,BBS,KGP,HWH,";
    train[5].ttime = 33.3;
    train[5].days = "1111111";
    train[5].dtime = 1035;
    train[5].arrtime = 1955;

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
    int dd, mm, yy;
    cout << "Enter the Date of Travel in the form of DD MM YYYY";
    cin >> dd >> mm >> yy;
    for (auto &c : from)
        c = toupper(c);
    for (auto &c : to)
        c = toupper(c);
    bool trainfound = false;
    for (int i = 0; i < n; i++)
    {
        int r = isGoing(train[i].name, from, to);
        if (r > 0 && isRunning(train[i], dd, mm, yy))
        {
            string str = train[i].name;
            int pos = str.find("::");
            str = str.substr(0, pos);
            trainfound = true;
            int u = train[i].dtime;
            int q = train[i].ttime;
            int a = train[i].arrtime;
            int d = ceil(train[i].ttime / train[i].stops);
            d *= (r);
            // cout<<r<< " "<<d<<endl;
            int statc = nostaions(train[i].name, from);
            u = statc * d * 100 + u;
            if(u>=2400)
            {
                u-=2400;
            }
            int rt = d * 100 + u;
            if (rt >= 2400)
            {
                rt -= 2400;
                dd += 1;
            }
            cout << train[i].no << " " << str << " " << d << " " << (u / 100) << ":" << (u % 100) << " " << (rt / 100) << ":" << rt % 100 << endl;
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
