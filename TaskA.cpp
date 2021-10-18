#include <iostream>
using namespace std;
 
int main() 
{
    long long int n, i;
    char ch;
    do
    {
        do
        {
            cout << "Please, enter a number: ";
            cin >> n;
            if (n <= 0)
                cout << "Please enter the correct number: ";
        }while (n <= 0);
        cout << "Factors of " << n << " are: ";
        for(i = 1; i <= n; ++i) {
            if(n % i == 0)
                cout << i << " ";
        }
        cout<<endl;
        cout << "To continue enter 'y', to exit enter 'n':"; 
        cin >> ch;
    }while (ch=='Y' || ch=='y');
 
    return 0;
}