//
//  main.cpp
//  Selection Sort
//
//  Created by Feng Zhou on 10/2/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> selection_sort(vector<int> v)
{
    for(int j = 0;j < v.size();j ++){
        int min = j;
        for(int i = j+1;i < v.size();i ++)
        {
            if(v[i] < v[min])
            {
                min = i;
            }
        }
        int temp = v[min];
        v[min] = v[j];
        v[j] = temp;
    }
    return v;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13};
    v=selection_sort(v);
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
    cout << endl;
    return 0;
}
