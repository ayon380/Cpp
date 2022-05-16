#include <iostream>
#include <string>
using namespace std;
class google
{
protected:
    string title;
    float rating;

public:
    virtual void display()
    {
        cout << "Virtual function called " << endl;
    }
};
class video : public google
{
protected:
    float length;

public:
    video()
    {
        cout << "Enter the title of the video : " << endl;
        getline(cin>>ws, title);
        cout << "Enter the rating of the video : " << endl;
        cin >> rating;
        cout << "Enter the length of the video : " << endl;
        cin >> length;
    }
    void display()
    {
        cout << "\nTitle : " << title << endl;
        cout << "Rating  : " << rating << endl;
        cout << "Length : " << length << endl;
    }
};
class website : public google
{
protected:
    int words;

public:
    website()
    {
        cout << "Enter the title of the article : " << endl;
        getline(cin>>ws, title);
        cout << "Enter the rating of the article : " << endl;
        cin >> rating;
        cout << "Enter the length of the article : " << endl;
        cin >> words;
    }
    void display()
    {
        cout << "\nTitle : " << title << endl;
        cout << "Rating  : " << rating << endl;
        cout << "Words : " << words << endl;
    }
};
int main()
{
    google *v1 = new video;
    google *t1 = new website;
    v1->display();
    t1->display();
    return 0;
}