#include <iostream>
using namespace std;
int main(){
    int limit;
    int bank0, bank1, bank2, bank3, bank4;

    cout << "Enter the limit : ";
    //Limits refer to the total of asset
    cin >> limit;

    bank0 = 25 + 100.5 + 320.5;
    bank1 = 125 +85 +40;
    bank2 = 175 + 75+ 125;
    bank3 = 75 + 125;
    bank4 =181 + 125;
  
    int x, y=1;
if ( limit > 300) y=3;
for ( x = 0 ; x < y; x++) {
    if ( bank0 < limit )
    {
    bank3 -= 125;
    bank2 -= 125;
    }
    
    if ( bank1 < limit)
    { 
      bank0 -= 100.5;
    }
    
    if ( bank2 < limit)
    { 
    bank1 -= 40;
    bank4 -= 125;
    }

    if ( bank3 < limit)
    { 
    bank1 -= 85;
    bank2 -= 75;
    }
    
    if ( bank4 < limit)
    {
      bank0 -= 320.5;
    } }
    // display each bank wheather is safe or not.
    
    if ( bank0 <= limit )
    cout << "bank 0 is safe.";
    else {cout << "Bank 0 is unsafe";}

    if ( bank1 <= limit)
    cout<<endl<< "Bank 1 is safe.";
    else { cout <<endl<< "Bank 1 is unsafe.";}
    
    if ( bank2 <= limit)
    cout <<endl<< "Bank 2 is safe.";
    else { cout <<endl<< "Bank 2 is unsafe.";}

    if ( bank3 <= limit)
    cout <<endl<<"Bank 3 is safe.";
    else { cout <<endl<< "Bank 3 is unsafe.";}
    
    if ( bank4 <= limit)
    cout <<endl<< "Bank 4 is safe.";
    else { cout <<endl<< "Bank 4 is unsafe.";}
    return 0;
}