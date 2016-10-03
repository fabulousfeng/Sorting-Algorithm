//
//  main.cpp
//  Insertion Sort
//
//  Created by Feng Zhou on 10/2/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> insertion_sort(vector<int> v)
{
    for (int i = 1;i < v.size(); i++) {
        int value = v[i];
        int hole = i;
        while (hole > 0 && v[hole - 1] > value) {
            v[hole] = v[hole - 1];
            hole--;
        }
        v[hole] = value;
    }
    return v;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13};
    v=insertion_sort(v);
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
    cout << endl;
    return 0;
}
