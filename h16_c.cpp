#include <iostream>

// Flow continue dan break

using namespace std;

int main()
{
    // for(int i = 0; i <= 10; i++){

    //     if (i == 5)
    //     {
    //         //break; //berhenti sampai sini
    //         continue; //lanjutkan / skip 
    //     }
        
    //     cout << i << endl;
    // }

    int i = 0;
    while (i <= 10)
    {
        i++;
        if (i == 5)
        {
            //break; //berhenti sampai sini
            continue; //lanjutkan / skip 
        }
        cout << i << endl;
    }
    
    
    return 0;
}
