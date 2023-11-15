#include<iostream>
using namespace std;
int main()
{
/*	int i = 1, sum = 0;
	for (; ;)
	{
	
		sum = sum + i;
		i++, i++;
		if (i < 100);
		
			else break;
	}
	cout << i <<"\t"<<sum<< endl;
	cout << endl;*/
	
/*	const int cock = 20, hen = 33, chick = 100;
	int i, j, k;
	for (i = 0; i < cock; i++)
	{
		for (j = 0; j < hen; j++)
		{
			for (k = 0; k < chick; k++)
			{
				if ((i + j + k) == 100 && (5 * i + 3 * j + k / 3) == 100 && k % 3 == 0)
				cout << "ÎÌ¡¢ÆÅ¡¢³û¸÷ÓÐ£º\t" << i << "\t" << j << "\t" << k << endl;
			}
		}
		
	}
	*/
	int i=0 ,sum = 0;
	for (int i=1; i < 100; i = i + 2)
		sum = sum + i;
	cout << sum << endl << i << endl;







	return 0;
}