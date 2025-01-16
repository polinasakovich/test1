#include <iostream>
#include <time.h>
#include <math.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    const  int height=10;
    const int width=10;
    int tt[width][height];
    int maxsum=0;
    int indexsum=0;
    for(int i=0; i<width; i++)
    {
        for(int j=0; j<height; j++)
        {
            tt[i][j]=rand()%21;

            cout<<tt[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"---------------------------------------------------"<<endl;
    for(int i=0; i<width; i++)
    {
        int temp=0;
        for(int j=0; j<height; j++)
        {
            temp+=tt[i][j];
        }
        cout<<"suma"<<i<<"= "<<temp<<endl;
        if(maxsum<temp)
        {
            maxsum=temp;
            indexsum=i;
        }
    }
    cout<<"maxsuma= "<<"suma"<<indexsum<<"= "<<maxsum<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    int t1[21]= {0};
    for(int i=0; i<width; i++)
    {
        for(int j=0; j<height; j++)
        {
            t1[tt[i][j]]++;
        }
    }
    for(int i=0; i<21; i++)
        cout<<i<<": "<<t1[i]<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    int maxheight = *max_element(t1, t1 + 21); //znajduje maksymalną wartość w tablicy t1 i zapisuje ją w zmiennej maxheight




    for (int i = maxheight; i > 0; i--)
    {
        if(i<10) cout <<" "<< i << " | ";
        else cout<<i<<" | ";
        for (int j = 0; j < 21; j++)
        {
            if (t1[j] >= i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }


    cout << "   +";
    for (int j = 0; j < 30; j++)
    {
        cout << "---";
    }
    cout << endl;


    cout << "     ";
    for (int j = 0; j < 21; j++)
    {
        cout << setw(3) << j;
    }
    cout << endl;


    return 0;
}
