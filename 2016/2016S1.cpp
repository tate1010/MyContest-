#include <iostream>
#include <vector>
using namespace std;
int main(){
string input;
cin >> input;
string output;
cin >> output;
vector <char>in;
int sum = 0;
for(int i = 0; i < input.size(); i++){

in.push_back(input.at(i));
}
for(int i = 0; i < output.size(); i++){

for (int k = 0 ; k < in.size(); k++){

 if(output.at(i) == in[k] ){
    in.erase(in.begin()+k);
    i = 0;
 }

}

 if(output.at(i) == '*'){
      sum += 1;


 }

}
if(in.empty()){
    cout << "A";
}
else if(sum == in.size()){
       cout << "A";
   }
else{
 cout <<"N"; 


}
return 0;
}
