#include <iostream>
using namespace std;
void swap1( char *, char *);
void swap2( char **, char **);
void SortStrings1(char **, int );
int main()
{
    /*
        :( 
    */
    char A[20];
    cout<<"Enter first name : ";
    cin >>A;
    char B[20];
    cout<<"Enter secound name : ";
    cin>>B;
    swap1 (A,B);
    cout<<"Swap1 :- "<<endl;
    cout<<"after swap , the first name is : "<<A<<endl;
    cout<<"after swap , the secound name is : "<<B<<endl<<endl;

    char *C=A;
    cout<<"Enter first name : ";
    cin>>A;

    char *D=B;
    cout<<"Enter secound name : ";
    cin>>B;
    swap2 (&C,&D);
    cout<<"Swap2 :- "<<endl;
    cout<<"after swap , the first name is : "<<C<<endl;
    cout<<"after swap , the secound name is : "<<D<<endl<<endl;

    char M[5][100] = {"Lina", "Samar", "Amal", "Tala", "Tamara"};
    
    //SortStrings1(M,5);// this error , look at the fun below . 

    
     


    

    
    return 0;
}
void swap1( char *A, char *B)
{
    char temp = '\0';
    for ( ; *(A+0) , *(B+0);A++,B++ ){
    temp=*A;
    *A=*B;
    *B=temp;}
}

void swap2( char **A, char **B)
{
    char *temp=NULL;
    temp = *A;
    *A=*B;
    *B=temp;


}

void SortStrings1(char **A, int rows)
{
    int i,j;
    for (i=0;i<rows-1;i++)
    {
        for (j=i+1;j<rows;j++)
        if (strcmp(A[i],A[j])>0)
        {
         swap1(A[i],A[j]);
        }

        
    }
    for (i=0;i<rows;i++)
    {
        cout<<A[i];
    }



}








































