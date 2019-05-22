//
//  PROBLEM 1.cpp
//  EXPERIMENT 3
//
//  Created by Mj Monforte on 18/05/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include<iostream>

using namespace std;

int main ()
{
    int arr[10], i, x, y;
    float sum = 0.00, average;
    
    cout << "Enter 10 elements of the array : " ;
    
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    
    x = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (x < arr[i])
        { x = arr[i];}
    }
    
    y = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (y > arr[i])
        { y = arr[i];}
    }
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    
    
    average = sum / 10;
    
    
    cout << "\n\nThe largest integer is: " << x << endl;
    cout << "The smallest integer is: " << y << endl;
    cout << "The total is: " << sum << endl;
    cout << "The average is: " << average << endl;

    
    return 0;
}
