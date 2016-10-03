//
//  main.cpp
//  Bubble Sort
//
//  Created by Feng Zhou on 10/2/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> bubble_sort(vector<int> v)
{
    for(int i = 0;i < v.size();i++)
    {
        bool flag = false;
        for (int j = 0; j< v.size() - i - 1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                flag = true;
            }
        }
        if(!flag) break;
    }
    return v;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13};
    v = bubble_sort(v);
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
