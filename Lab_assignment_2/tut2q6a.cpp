#include<iostream>
using namespace std ;

int main(){

    cout<<"enter the rows of matrix you want : ";
    int a,b;
    cin>>a;
    cout<<"enter the columns of matrix you want : ";
    cin>>b;
    cout<<"enter the number of elements you want in sparse matrix : ";
    int u;
    cin>>u;
    int sp_mat[u][3];

    for (int i = 0; i < u; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j==0)
            {
                cout<<"enter the row for element "<<i+1<<" : ";
                cin>>sp_mat[i][j];
            }
            else if (j==1)
            {
                cout<<"enter the column for element "<<i+1<<" : ";
                cin>>sp_mat[i][j];
            }
            else{
                cout<<"enter the element "<<i+1<<" : ";
                cin>>sp_mat[i][j];
            }
        }
        
    }
    int x = 0 ;

    int sparse_mat[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sparse_mat[i][j]=0;
        }
    }
    for (int k = 0; k < u; k++)
    {
        int r = sp_mat[k][0];
        int c = sp_mat[k][1];
        int val = sp_mat[k][2];
        sparse_mat[r][c] = val;
    }
    cout<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<sparse_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // transpose of the matrix

    for (int i = 0; i < u; i++)
    {
        int temp = sp_mat[i][0];
        sp_mat[i][0]=sp_mat[i][1];
        sp_mat[i][1]=temp;
    }
        
    int r = 0 ;

    int tsparse_mat[b][a];

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            tsparse_mat[i][j]=0;   
        }
    }
    for (int k = 0; k < u; k++) {
        int r = sp_mat[k][0];
        int c = sp_mat[k][1];
        int val = sp_mat[k][2];
        tsparse_mat[r][c] = val;
    }
    cout<<"transposed matrix is :"<<endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<tsparse_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}