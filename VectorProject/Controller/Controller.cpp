//
//  Controller.cpp
//  VectorProject
//
//  Created by Ellison, Cy on 1/28/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

void Controller :: start()
{
    int numArray[5] {2,4,6,8,10};
    string stringArray[5] {"Two","Four","Six","Eight","Ten"};
    
    cout << "This is an array with Ints!" << endl;
    
    for(int a = 0; a < 5; a++)
    {
        cout << "Number " << a + 1 << ": " << numArray[a] << endl;
    }
    cout << endl;
    
    cout << "This is an array with strings!! " << endl;
    
    for(int b = 0; b < 5; b++)
    {
        cout << "String " << b + 1 << ": " << stringArray[b] << endl;
    }
    
    cout << endl;
    
    
    
}
