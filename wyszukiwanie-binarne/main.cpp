#include <iostream>
using namespace std;


int main() {
    int tab[10]={0,2,3,4,5,6,7,8,10,11};
    int szukamy=11;
    int l=0;
    int r=9;
    
    for(;l<=r;)
    {
        int sr=(l+r)/2;
        if (tab[sr]==szukamy)
        {
            cout << szukamy << " ma index " << sr << endl;
            break;
        }
        else
        {
            if (tab[sr]<szukamy) {
                l=sr+1;
            }
            else
                r=sr-1;
        }
    }
    
    
    return 0;
}
