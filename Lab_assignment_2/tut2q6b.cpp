#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the number of rows of the matrix : ";
    cin>>a;
    cout<<"enter the number of columns of the matrix : ";
    cin>>b;

    int c;
    cout<<"enter the number of non zero elements in matrix 1 :";
    cin>>c;
    int d[c][3];   
    for (int e = 0; e < c; e++)
    {
        cout<<"enter the row column value : ";
        cin>>d[e][0]>>d[e][1]>>d[e][2];
    }
    
    cout<<endl; 

    int f;
    cout<<"enter the number of non zero elements in matrix 2 : ";
    cin>>f;
    int g[f][3];   
    for (int h = 0; h < f; h++)
    {
        cout<<"enter the row column value : ";
        cin>>g[h][0]>>g[h][1]>>g[h][2];
    }

    int i[c+f][3];
    int j=0,k=0,l=0;

    while (j<c && k<f)
    {
        if (d[j][0]<g[k][0] ||d[j][0]==g[k][0] && d[j][1]<g[k][1])
        {
            i[l][0]=d[j][0];
            i[l][1]=d[j][1];
            i[l][2]=d[j][2];
            j++ , l++;
        }
        else if(d[j][0]>g[k][0] ||d[j][0]==g[k][0] && d[j][1]>g[k][1]){
            i[l][0]=g[k][0];
            i[l][1]=g[k][1];
            i[l][2]=g[k][2];
            k++ , l++;
        }
        else{
            i[l][0]=d[j][0];
            i[l][1]=d[j][1];
            i[l][2]=d[j][2]+g[k][2];
            j++ ,k++, l++;
        }
    }

    while (j < c) {
        i[l][0] = d[j][0];
        i[l][1] = d[j][1];
        i[l][2] = d[j][2];
        j++; l++;
    }
    while (k < f) {
        i[l][0] = g[k][0];
        i[l][1] = g[k][1];
        i[l][2] = g[k][2];
        k++; l++;
    }
    
    cout << "\nResultant Sparse Matrix in Triplet Form:\n";
    cout << "Row Col Value\n";
    for (int m = 0; m < l; m++) {
        cout << i[m][0] << " " << i[m][1] << " " << i[m][2] << endl;
    }

}