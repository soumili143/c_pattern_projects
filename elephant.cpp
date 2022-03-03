 #include <iostream>
using namespace std;
int main()
{ int h=9,w=(2*h)-1;
int i, j, h1 = (h / 2);
	for (i = 0; i < h; i++) 
	{
			cout <<"*";
		for (j = 0; j < w; j++)
		 {
			if ((i == 0 || i == h - 1 || i == h1)&& j < (w - 2))
				cout <<"*";
			else if (j == (w - 2)&& !(i == 0 || i == h - 1	|| i == h1))
				cout <<" ";
		}
	
		cout <<"\n";
	}
	return 0;
}
	
