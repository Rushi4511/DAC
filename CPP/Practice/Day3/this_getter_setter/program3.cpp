#include <iostream>

using namespace std;

class Time
{
private:
    int hrs;
    int mins;
    int secs;

public:
    void input();
    void output();

    void setHrs(int hrs);
    void setMins(int mins);
    void setSecs(int secs);
    int getHrs(void);
    int getMins(void);
    int getSecs(void);
    void incSecs(void);
};
void Time ::input()
{
    cout << "Hrs:";
    cin >> this->hrs;
    cout << "Mins:";
    cin >> this->mins;
    cout << "Secs:";
    cin >> this->secs;
}
void Time ::output()
{
    cout << "Hrs:" << this->hrs << "Mins:" << this->mins << "Secs:" << this->secs << endl;
}

void Time ::setHrs(int hrs)
{
    this->hrs = hrs;
}

int Time ::getHrs(void)
{
    return this->hrs;
}

void Time ::setMins(int mins)
{
    this->mins = mins;
}

int Time ::getMins()
{
    return this->mins;
}

void Time ::setSecs(int secs)
{
    this->secs = secs;
}

int Time ::getSecs()
{
    return this->secs;
}

void Time ::incSecs()
{
    this->secs++;

    if (this->secs == 60)
    {
        this->secs = 0;
        this->mins++;

        if (this->mins == 60)
        {
            this->mins = 0;
            this->hrs++;

            if (this->hrs == 24)
            {
                this->hrs = 0;
            }
        }
    }
}

int main()
{

    /*
    Time t1;
    t1.input();
    t1.output();

    t1.setHrs(1);
    int hours = t1.getHrs();
    cout << "" << hours;

    */

    Time t1;
    t1.setHrs(22);
    t1.setMins(59);
    t1.setSecs(59);
    t1.incSecs();

    t1.output();
}