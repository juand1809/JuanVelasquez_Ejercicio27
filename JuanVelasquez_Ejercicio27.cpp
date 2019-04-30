#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int i,j;
    int x = 101;
    int y = 101;
    double old [x][y];
    double nuevo[x][y];
    
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            old[i][j] = 0.0;
            nuevo[i][j] = 0.0;
            if(i == 40 && j >= 20 && j <= 80){
                old[i][j] = 100.0;
            }
            if(i == 60 && j >= 20 && j <= 80){
                old[i][j] = -100.0;            
            }    
        }
    }
    
   
    for (i=1; i < x-1; i++){
        for (j = 1; j < y-1; j++){
            if (i == 40 || i == 60 && j >= 20 && j <= 80){
                if(i == 40){
                    nuevo[i][j] = 100.0;
                }
                else if(i == 60){
                    nuevo[i][j] = -100.0;
                }                           
            }
            else{
                nuevo[i][j] = 0.25*(old[i+1][j] + old[i-1][j] + old[i][j+1] + old[i][j-1]); 
            }
        }
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            cout << i << " " << j << " " << nuevo [i][j] << endl; 
        }
    }
    
    return 0;
}


    


