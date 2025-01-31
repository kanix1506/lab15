#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d) {
    int nongsea[] ={*a,*b,*c,*d};
    for (int nongkarn = 3;nongkarn > 0;nongkarn--){
        int j = rand() % (j + 1);
        swap(nongsea[nongkarn],nongsea[j]);
    }
    *a=nongsea[0];
    *b=nongsea[1];
    *c=nongsea[2];
    *d=nongsea[3];
}