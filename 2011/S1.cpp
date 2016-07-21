#include <iostream>
#include <string.h>
using namespace std;
int main() {
int line ;
int counts  = 0;
int countt = 0;
string temp ;


cin >> line;

for (int l = 0; l <= line; l++){

        getline (cin,temp);


   for (int j = 0; j < temp.size(); j++){
     if( temp.at(j) == 's' || temp.at(j) == 'S') {
        counts += 1;


     }
            if (temp.at(j) == 't' || temp.at(j) == 'T'){

                countt += 1;


            }


   }



    }

    if (countt> counts ){

        cout << "English";

    }
    if (counts> countt){

        cout << "French";

    }

    return 0;
}
