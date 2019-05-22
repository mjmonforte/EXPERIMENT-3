//
//  PROBLEM3.cpp
//  EXPERIMENT 3
//
//  Created by Mj Monforte on 18/05/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//


#include<iostream>

#include<string.h>
using namespace std;

int main ()
{
    
    int size;
    char in[100], out[100];
    
    cout << "Enter any combination of characters: ";
    cin >> in;
    
    size = strlen(in);
    
    for (int i = 0, j = size ; i <= size ; i++, j--)
    {
        out[j] = in[i];
    }
    
    cout << "\n" << endl;
    
    for (int i=0 ; i<= size ; i++)
    {
        cout << out[i] << ' ';
    }
    
    cout << "\n\nThe size of array is: " << size << endl;

    return 0;
}

    

