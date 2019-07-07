#include <iostream>
#include <fstream>
using namespace std;

int main()
{ int r,c,tra[40][40];
    ifstream fileinput;
    fileinput.open("input.txt");
    fileinput>>r>>c;

    int **array;
    array=new int*[r];
    for(int i=0;i<r;i++)
    {
        array[i]=new int[c];
    }
    ofstream fileoutput;
    fileoutput.open("output.txt");

    for (int i=0;i<r;i++){
    for (int j=0;j<c;j++)
    {

        fileinput>>array[i][j];
         tra[j][i] = array[i][j];
    }

    }
    for(int i=0;i<c;i++)
    {
    for(int j=0;j<r;j++)
    {

      fileoutput<<tra[i][j]<<" ";
     if(j==r-1)
        fileoutput<<endl;
    }

  }
}
