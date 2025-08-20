#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of the square matrix : ";
    int a;
    cin>>a;

    int b;

    cout<<"enter the 0th diagonal element : ";
    cin>>b;

    int c[a][3];
    c[0][0]=0;
    c[0][1]=b;
    c[0][2]=0;

    for (int d = 1; d < a; d++)
    {
        for (int e = 0; e < 3; e++)
        {
            cout<<"enter the element "<<e<<" diagonal of the "<<d<<" : ";
            cin>>c[d][e];
        }
        
    }

    cout<<"the elements of the tri diagonal matrix are : "<<endl;
    for (size_t f = 0; f < a; f++)
    {
        for (int g = 0; g < 3; g++)
        {
            cout<<c[f][g]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    int h = 1 , i = 1;
    int j[a][a];
    for (int k = 0; k < a; k++)
    {
        for (int l = 0; l < a; l++)
        {
            if (k==l)
            {
                j[k][l]=c[k][1];
            }
            else if (l-k==1)
            {
                j[k][l]=c[h][2];
                h++;
            }
            else if (k-l==1)
            {
                j[k][l]=c[i][0];
                i++;
            }
            else{
                j[k][l]=0;
            }
        }
        
    }
    
    for (int m = 0; m < a; m++)
    {
        for (int n = 0; n < a; n++)
        {
            cout<<j[m][n]<<" ";
        }
        cout<<endl;
    }
    

}