#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of square matrix : ";
    int k;
    cin>>k;

    int r=((k*k)+k)/2; // total number of elements
    int p[r];

    for (int q = 0; q < r; q++)
    {
        cout<<"enter the "<<q+1<<" element of the lower traingular matrix : ";
        cin>>p[q];
    }
    
    // the element array
    cout<<"the element array is : ";
    for (int s = 0; s < r; s++)
    {
        cout<<p[s]<<" ";
    }
    cout<<endl;

    // the lower trangular matrix is;

    int y = 0;
    int a[k][k];
    for (int b = 0; b < k; b++)
    {
        for (int c = 0; c< k; c++)
        {
            if (b>=c)
            {
                a[b][c]=p[y];
                y++;
            }
            else{
                a[b][c]=0;
            }
        }
    }
    cout<<"the lower triangular matrix is :"<<endl;
    for (size_t d = 0; d < k; d++)
    {
        for (int e = 0; e < k; e++)
        {
            cout<<a[d][e]<<" ";
        }
        cout<<endl;
    }
}