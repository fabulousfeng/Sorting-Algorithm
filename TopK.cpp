int TopK(vector<int> &data,int start,int end, int K){
    int pIndex = partition(data, start, end);
    if(pIndex - start == K - 1) {
       return data[pIndex];
    }
    else if(pIndex - start < K - 1) {
        return TopK(data, pIndex+1, end, K - pIndex - 1 + start);
    }
    else {
       return TopK(data, start, pIndex - 1,K);
    }
}
int main(){
    std::vector<int> data = {2,6,4,3,5,9,45,20,20,30};
    cout << TopK(data,0,data.size()-1,5) << endl;
    return 0;
}
