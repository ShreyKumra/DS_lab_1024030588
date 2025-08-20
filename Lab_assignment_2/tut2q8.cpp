#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of array : ";
    int a;
    cin>>a;

    int b[a],c[a];

    for (int d = 0; d < a; d++)
    {
        cout<<"enter the element "<<d+1<<" of the array : ";
        cin>>b[d];
    }

    int e =0 ;
    
    for (int f = 0; f < a; f++)
    { 
      bool g = false;
      for (int h = 0; h < e; h++)
      {
        if (b[f]==c[h])
        {
            g=true;
            break;
        }
      }
        if (g==false)
        {
            c[e]=b[f];
            e++;
        }
    }
    cout<<endl;
    cout<<"the number of distinct elements in the array : "<<e;

}