#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool u[][M],int s,int x,int y){
    for(int row = 0; row < N;row++){
            for(int colum = 0;colum < M;colum++){
                if(sqrt(pow(row - x,2) + pow(colum - y,2)) <= s-1){
                u[row][colum] = 1;
                }
            }
    }
}

void showImage(const bool a[][M]){
    cout << "------------------------------------------------------------------------" << endl;
    for(int row = 0; row < N;row++){
            cout << "|";
            for(int colum = 0;colum < M;colum++){
                int n = a[row][colum];
                if(n == 1)
                cout << "*";
                else cout << " ";
            }
            cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------" << endl;
}