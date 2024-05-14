#include <iostream>
using namespace std;
void ConvertUpper(char*);
void ConvertFCUpper(char*);
void ConvertFUpper(char*);
void ConvertReplace(char*);

int main()
{
    
    cout << endl << endl;
    char A[100];
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Input: ";
    cin.getline(A, sizeof(A));
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    char choice;

    cout << "Please choose a task by entering the task char:- " << endl;
    cout << "=================================================" << endl;
    cout << "c. The output should be the original paragraph but with all letters in upper case. " << endl;
    cout << "w. The output should be the original paragraph with the first letter of each word in the upper case." << endl;
    cout << "s. the output should be the original paragraph with the first letter of each sentence in the upper case." << endl;
    cout << "d. the output must be the paragraph with each 'is' replaced with 'was'." << endl;
    cout << "Enter your choice :";
    cin >> choice;
    cout << endl << endl;
    switch (choice)
    {
    case 'c':
    {
        ConvertUpper(A);
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Output: " << A << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    }break;

    case 'w':
    {
        ConvertFCUpper(A);
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Output: " << A << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    }break;

    case 's':
    {
        ConvertFUpper(A);
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Output: " << A << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    }break;

    case 'd':
    {
        ConvertReplace(A);
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Output: " << A << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    }break;

    default:cout<<"Invalid choice.Try again"<<endl;

    }




    cout << endl << endl;

    


    return 0;
}

void ConvertUpper(char* p)
{

    while (*p)
    {
        if (*p >= 'a' && *p <= 'z')
            *p = *p - 32;
        p++;

    }


}
void ConvertFCUpper(char* p)
{
    int i;
    char* begin = p;
    for (; *p; p++)
    {
        if (begin == p)
        {
            if (*p >= 'a' && *p <= 'z')
                *p = *p - 32;
        }
        else if (*(p-1) == ' ')
        {
            if (*p >= 'a' && *p <= 'z')
                *p = *p - 32;
        }
    }

}

void ConvertFUpper(char* p)
{
    int i;
    char* begin = p;
    for (; *p; p++)
    {
        if (begin == p)
        {
            if (*p >= 'a' && *p <= 'z')
                *p = *p - 32;
        }

        else if (*(p-2) == '.')
        {
            if (*(p - 1) >= 'a' && *(p - 1) <= 'z')
                *(p - 1) = *(p - 1) - 32;
            else
                if (*(p - 1) == ' ')
                    *p = *p - 32;

        }


    }




}

void ConvertReplace(char* p)
{
    for (; *p; p++)
    {
        if ((*p == ' ' && *(p+1) == 'i' && *(p+2) == 's' && *(p+3) == ' ')) // when " is " is find, this will be true
        {
            *p = ' ';
            *(p + 1) = 'w';
            *(p + 2) = 'a';
            *(p + 3) = 's';

            char* temp;
            char x;
            for (temp = p+4, x = ' '; *(temp-1); temp++) // To shift the array one space to the right.
            {
                char y = *temp;
                *temp = x;
                x = y;

            }

            /*
            another sol.
            strcpy(temp,p+4);
            strcat(p," ");
            strcat(p,temp);

            */
        }
    }
}
