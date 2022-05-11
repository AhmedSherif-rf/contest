#include<iostream>
using namespace std;
int main(){
        int n;
    cout <<"Enter the number of problems\n";
        cin >> n;
        cout <<"Enter the estemation for the 3 friends\n";
                int sum = 0 , x , y , z;
                for(int i = 0; i < n; i++){
                        cin >> x >> y >> z;
                        if ( x + y + z >= 2 ) 
                sum++;
                }
                cout<< sum <<endl;
        return 0;
}