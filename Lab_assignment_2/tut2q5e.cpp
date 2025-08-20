#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of square matrix : ";
    int a;
    cin>>a;
    int b=((a*a)+a)/2;
    int c[b] , d=0;
    for (int e = 0; e < a; e++)
    {
        for (int f= 0; f < a; f++)
        {
            if (e<=f)
            {
                cout<<"enter the element for i="<<e<<" and j="<<f<<" : ";
                cin>>c[d];
                d++;
            }
            else{
                continue;
            }
        }   
    }

    cout<<endl;

    for (int g = 0; g < b; g++)
    {
        cout<<c[g]<<" ";
    }
    
    cout<<endl<<endl;

    int h[a][a] , i=0 ;
    for (int j = 0; j < a; j++)
    {
        for (int k = 0;k < a ; k++)
        {
            if (j<=k)
            {
                h[j][k]=h[k][j]=c[i];
            i++;
            }
            else{
                continue;
            }
        }
        
    }
    

    for (int l = 0; l < a; l++)
    {
        for (int m = 0; m < a; m++)
        {
            cout<<h[l][m]<<" ";
        }
        cout<<endl;
    }
    
}