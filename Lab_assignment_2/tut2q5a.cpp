#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of the square matrix : ";
    int a;
    cin>>a;

    int b[a];

    for (int c = 0; c < a; c++)
    {
        cout<<"enter the element for "<<c+1<<" row diagonal : ";
        cin>>b[c];
    }
    
    cout<<"the array for diagonal element matrix created is :"<<endl;
    for (int d = 0; d < a; d++)
    {
        cout<<b[d]<<endl;
    }
    
    int e[a][a];

    for (int f = 0; f < a; f++)
    {
        for (int g = 0; g < a; g++)
        {
            if (f==g)
            {
                e[f][g]=b[f];
            }
            else{
                e[f][g]=0;
            }
        }
        
    }
    
    for (int h = 0; h < a; h++)
    {
        for (int i = 0; i < a ; i++)
        {
            cout<<e[h][i]<<" ";
        }
        cout<<endl;
    }
    

}