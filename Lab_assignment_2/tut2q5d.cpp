#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of square matrix : ";
    int a;
    cin>>a;

    int b=((a*a)+a)/2; 
    int c[b];

    for (int d = 0; d < b; d++)
    {
        cout<<"enter the "<<d+1<<" element of the upper traingular matrix : ";
        cin>>c[d];
    }
    
    cout<<"the element array is : ";
    for (int e = 0; e < b; e++)
    {
        cout<<c[e]<<" ";
    }
    cout<<endl;

    int f = 0;
    int g[a][a];
    for (int h = 0; h < a; h++)
    {
        for (int i = 0; i< a; i++)
        {
            if (h<=i)
            {
                g[h][i]=c[f];
                f++;
            }
            else{
                g[h][i]=0;
            }
        }
    }
    cout<<"the upper triangular matrix is :"<<endl;
    for (size_t j = 0; j < a; j++)
    {
        for (int k = 0; k < a; k++)
        {
            cout<<g[j][k]<<" ";
        }
        cout<<endl;
    }
}