/* Letters in a string are stored as ASCII numbers.
The letter ‘a’ is stored as the number 97. The letter ‘A’ is stored as the number 65.
Adding 32 will change an uppercase letter to lowercase.
Subtracting 32 will change a lowercase letter to uppercase.
Using the above strings, change the list so that all towns start with an uppercase letter but
the rest of the letters are lowercase */





#include<iostream>

using namespace std;

int main() {

    const int TOWNTOTAL = 6;
    string towns[TOWNTOTAL] = { "london", "glasGow", "HARWICH",
                                "NoTtInGHaM","DERBy","BriSToL" };
    
    for(int i=0; i < TOWNTOTAL; i++){
        if(+towns[i][0] >=97){
            towns[i][0] -=32;
        }  

        cout<<towns[i]<<"\t";
    }

    
    
    
    return 0;
}