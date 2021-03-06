// Sasha Stramel
// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.


#include "LinkedList.h"


int main()

{
    
    List cows;
    
    
    cout << "cows list  :  " << cows << endl << endl;
    
    
    cows.insertAsFirst(1.23);
    
    cows.insertAsFirst(2.34);
    
    cows.insertAsLast(8.12);
    
    cout << "cows list  :  " << cows << endl << endl;
    
    cout << "size is : " << cows.size() << endl;
    
    cout << "The sum is : " << cows.sum() << endl;
    
    
    
    
    
    cows.removeFirst();
    
    cout << "cows list  :  " << cows << endl << endl;
    
    
    
    List horses(cows);
    
    cout << "cows list  :  " << cows << endl;
    
    cout << "horses list:  " << horses << endl << endl;
    
    horses.removeFirst();
    
    horses.insertAsFirst(5.67);
    
    cows.insertAsFirst(6.78);
    
    horses.insertAsLast(1.87);
    
    cows.insertAsLast(6.66);
    
    cout << "cows list  :  " << cows << endl;
    
    cout << "horses list:  " << horses << endl << endl;
    
    cout << "size of cows is : " << cows.size() << endl;
    
    cout << "The sum of cows is : " << cows.sum() << endl;
    
    cout << "size of horses is : " << horses.size() << endl;
    
    cout << "The sum of horses is : " << horses.sum() << endl;
    
    
    
    
    List pigs;
    
    
    cout << "cows list  :  " << cows << endl;
    
    cout << "horses list:  " << horses << endl;
    
    cout << "pigs list  :  " << pigs << endl << endl;
    
    cout << "size is : " << pigs.size() << endl;
    
    cout << "The sum is : " << pigs.sum() << endl;
    
    
    
    pigs = cows;
    
    cout << "cows list  :  " << cows << endl;
    
    cout << "horses list:  " << horses << endl;
    
    cout << "pigs list  :  " << pigs << endl << endl;
    
    
    
    pigs = horses;
    
    cout << "cows list  :  " << cows << endl;
    
    cout << "horses list:  " << horses << endl;
    
    cout << "pigs list  :  " << pigs << endl << endl;
    
    
    
    cout << "End of code" << endl;
    
    
    
    return 0;
    
}
