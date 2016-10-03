//
//  main.cpp
//  Heap Sort
//  time complexity : O(nlogn)
//  Created by Feng Zhou on 10/3/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void heap_insert(int input, vector<int> &output)
{
    output.push_back(input);
    auto index = output.size() - 1;
    while (index >= 1 && output[index] < output[(index - 1)/2]){
        swap(output[index],output[(index - 1)/2]);
        index = (index - 1) / 2;
    }
}
int heap_extract(vector<int> &source)
{
    int result = 0;
    if (source.size() > 0) {
        result = source[0];
    }
    // extract the root the put the last element to root
    swap(source[0],source[source.size() - 1]);
    source.pop_back();
    int index = 0;
    int minindex = 0;
    int minval = 0;
    while ((2*index +1) < source.size()){
        if (2*index + 2 == source.size()){
            //only one child for current node, so we regard it as the min value
            minval = source[2*index + 1];
            minindex = 2*index + 1;
        }
        else if (source[2*index + 1] < source[2*index + 2]) {
            minval = source[2*index + 1];
            minindex = 2*index + 1;
        }
        else{
            minval = source[2*index + 2];
            minindex = 2*index + 2;
        }
        if (source[index] > minval) {
            swap(source[index],source[minindex]);
            index = minindex;
        }
        else
            break;
    }
    return result;
}
vector<int> heap_sort(vector<int> v)
{
    vector<int> d;
    for (int i = 0 ; i < v.size(); i++) {
        heap_insert(v[i],d);
    }
    for (int i = 0 ; i < v.size(); i++)
    {
        v[i] = heap_extract(d);
    }
    return v;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13,100,80,51,23,42,12,523,2,0,1};
    v = heap_sort(v);
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
    cout << endl;
    return 0;
}
