
//  Lab III Part II
//
//  Created by Edgar Esparza on 6/10/15.
//

#include <iostream>

using namespace std;

int main()
{
    bool gameOver = false;
    int numberEggs = 13;
    int player = 1;
    int eggs_selected;
    while( ! gameOver )
    {
        cout << "Enter your selection " << (player==1 ? "Tortoise":"Hare") <<  "... ";
        cin >> eggs_selected;
        if (eggs_selected >=1 && eggs_selected <= 3 && eggs_selected <= numberEggs )
        {
            numberEggs -=eggs_selected;
            
            if (numberEggs>0)
            {
                player= (player==1) ? 2 : 1;
            }
            else
            {
                gameOver = true;
            }
        }
        
        
        else
        {
            cout <<"Not a valid egg selection, try again"<<endl;
        }
        
        cout<<"There are "<<numberEggs<<" left."<<endl;
    }
    
    cout<< "The Winner is : "<<(player==1 ? "Tortoise":"Hare")<<endl;
    
    return 0;
    
}
