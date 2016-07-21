#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


vector <pair<int,double> > source;
vector <pair<int,int> > range;

int main(){

int N;
cin >> N;
for (int i = 0;i < N; i++){
        int a;
    double b;
    cin >> a;
    cin >> b;
    source.push_back(make_pair(a,b));
}
sort(source.begin(), source.end());

int x = 1;
int y = 0;
int o;
cin>> o;
for (int i = 0;i <N;i++){
int temp;
 temp = source[N-1-i].second;
  y = (temp*2)-x ;

range.insert(range.begin(),(make_pair(x,y)));

x = y+1;
if(o == source[N-1-i].first){
    cout << range[0].first << endl ;
cout << range[0].second << endl ;

    return 0;
}
}

o = o - source[0].first;
cout << range[o].first << endl ;
cout << range[o].second << endl ;
return 0 ;
}
