#include <iostream>
using namespace std;
void ReadMatrix (float [][5],int);
void FindTranspose(float [][5],float [][4],int);
void PrintTranspose(float [][4],int);
void PrintMatrix (float [][5],int);
void FindSum (float [][5],int);
int main()
{
    cout<<"========================================================================"<<endl;
    float A[4][5],AT[5][4];
    int choice;
    ReadMatrix(A,4);
    do
    {
    cout<<"Please choose a task by entering the task number:-"<<endl;
    cout<<"=================================================="<<endl;
    cout<<"1.Input a new matrix (if you want to change the matrix)"<<endl;
    cout<<"2.Find and display the transpose of the current matrix"<<endl;
    cout<<"3.Output the current matrix"<<endl;
    cout<<"4.Find the sum of a certain row in the matrix."<<endl;
    cout<<"5.Exit."<<endl<<endl;
    cout <<"Enter your choice :";
    cin>>choice;
    cout<<endl;

    switch (choice)
    {
    case 1:ReadMatrix (A,4);break;
    case 2:{FindTranspose (A,AT,4);PrintTranspose(AT,4);}break;
    case 3:PrintMatrix (A,4);break;
    case 4:FindSum (A,4);break;
    case 5:cout <<"Good By!"<<endl<<endl;break;
    default:cout<<"Invalid choice.Try again"<<endl<<endl;
    }

    }while (choice!=5);

    cout<<"========================================================================"<<endl;

    return 0;
}

void ReadMatrix (float A[][5],int r)
{
    cout<<endl;
    cout<<"input the matrix ."<<endl<<endl;
    for (int i=0;i<r;i++)
    for (int j=0;j<5;j++)
    {
    cout << "A["<<i<<"]["<<j<<"]=";
    cin>>A[i][j];
    }
    cout <<endl<<endl<<endl<<endl;

}
void FindTranspose(float A[][5],float AT[][4],int r)
{
    for(int i=0;i<r;i++)
    for(int j=0;j<5;j++)
    AT[j][i]=A[i][j];
    cout<<endl<<endl;
}
void PrintTranspose (float AT[][4],int r)
{
cout <<"AT[5][4]= "<<endl;
    for (int i=0;i<r+1;i++)
    {
    for(int j=0;j<4;j++)
    cout << AT[i][j] <<" ";
    cout <<endl;
    }
    cout<<endl<<endl<<endl<<endl;
}
void PrintMatrix (float A[][5],int r)
{
    
    cout << "A[4][5]= "<<endl;
    for (int i=0;i<r;i++)
    {
    for(int j=0;j<5;j++)
    cout << A[i][j] <<" ";
    cout <<endl;
    }
    cout <<endl;
}
void FindSum (float A[][5],int r)
{
    cout<<"Compute the sum of the original matrix. "<<endl;
    int sum;
    for (int i=0;i<r;i++)
    {
        sum=0;
    for(int j=0;j<5;j++)
    sum+=A[i][j];
    cout << "The sum of the row number "<<i<<" ="<<sum<< endl;
    }
    cout <<endl<<endl<<endl<<endl;

}