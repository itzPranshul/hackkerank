//cheated but learn something
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
    vector<int> out;
    stringstream s(str);
    char ch;
    int temp;
    while(s>>temp){
        out.push_back(temp);
        s>>ch;
    }
    return ;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    cin >> str;
    vector<int> integers= parseInts(str);
    for(int i=0;i<integers.size();i++){
        cout<<integers[i]<<endl;
    }
    return 0;
       
    return 0;
}
