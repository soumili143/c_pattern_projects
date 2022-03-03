#include <iostream>
using namespace std;
int main()
{ 
    int h=5,w=(2*h)-1;
	int i,j, n = w / 2;
	for (i = 0; i < h; i++)
	 {
		for (j = 0; j <= w; j++)
		 {
			if (j == n || j == (w - n)	|| (i == h / 2 && j > n	&& j < (w - n)))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
		n--;
	}
}
