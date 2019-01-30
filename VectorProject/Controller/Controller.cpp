//
//  Controller.cpp
//  VectorProject
//
//  Created by Ellison, Cy on 1/28/19.
//  Copyright © 2019 Ellison, Cy. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
using namespace std;

void Controller :: start()
{
    vector <int> numArray {2,4,6,8,10};
    vector <string> stringArray {"Two","Four","Six","Eight","Ten"};
    string newArray[5];
    
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
    
    for(int c = 0; c < stringArray.size(); c++)
    {
        newArray[c] = stringArray[c];
        
        cout << newArray[c] << endl;
    }
    
}
