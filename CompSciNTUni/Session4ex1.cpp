// Using a “bubble sort”, sort the following array into ascending order

#include<iostream>



using namespace std;

int main(){

    const int NMAX = 10;
    int aux;
    double Numbers[NMAX] = {31.2, 29.7, 53.5, 69.0, 23.7, 71.8, 49.3, 52.9, 51.3, 57.1};

    for( int i=0; i <=NMAX; i++ ){
        for (int j = 0; j <=NMAX; j++){
            if(Numbers[i]> Numbers[j]){
                aux = Numbers[i];
                Numbers[i] = Numbers[j];
                Numbers[j] = aux;
            }
        }
            }

    for(int k = NMAX -1; k >= 0; k--){
        cout<<Numbers[k]<<"\t";
    }
    
    
    
    
    
    
    return 0;
    
}