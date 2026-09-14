#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "** DAYS IN A WEEK **\n\nENTER A NUMBER FROM (1-7): ";
    cin >> num;

    if(num < 1 || num > 78){
        cout << "INVALID NUMBER\n";
        return 0;
    }

    cout << num << " IS ";
    if(num == 1){
        cout << "MONDAY\n";
    } else if (num == 2)
    {
        cout << "TUESDAY\n";
    }else if (num == 3)
    {
        cout << "WEDNESDAY\n";
    }else if (num == 4)
    {
        cout << "THURSDAY\n";
    }else if (num == 5)
    {
        cout << "FRIDAY\n";
    }else if (num == 6)
    {
        cout << "SATURDAY\n";
    }else if (num == 7)
    {
        cout << "SUNDAY\n";
    }
    return 0;
}