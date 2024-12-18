#include <iostream>
#include <time.h>

using namespace std;
struct punkt
{
    int x;
    int y;
    void resultpoint()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    };
    bool isYPositive()
    {
        return y>=0;
    }
};
int main()
{
    punkt tab[30];
    srand(time(NULL));
    int pd=0, pu=0;
    for(int i=0; i<30; i++)
    {
        tab[i].x=rand()%200-100;
        tab[i].y=rand()%200-100;
        if(!tab[i].isYPositive())
        {
            pu++;
        }
    }
    cout<<"punkty pod osia Ox: "<<pu<<endl;
    pd=30-pu;

    punkt *wd, *wu;
    wd=new punkt[pd];
    wu=new punkt[pu];
    int id=0, iu=0;
    for(int i=0; i<30; i++)
    {
        if(!tab[i].isYPositive())
        {
            wu[iu].x=tab[i].x;
            wu[iu].y=tab[i].y;
            iu++;
        }
        else
        {
            wd[id].x=tab[i].x;
            wd[id].y=tab[i].y;
            id++;
        }
    }
    cout<<"nizej osi Ox: "<<endl;
    for(int i=0; i<pu; i++)
    {
        wu[i].resultpoint();
    }
    cout<<"---------------------------------------"<<endl<<"punkty nad osi Ox : "<<pd<<endl<<"wyzej osi Ox:"<<endl;
    for(int i=0; i<pd; i++)
    {
        wd[i].resultpoint();
    }
    delete[]wd;
    delete[]wu;
    return 0;
}
