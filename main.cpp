#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

         int liczSume(int n)
        {
            int liczba = 0;
            for (int i = 1; i <= n; i++)
            {
                liczba += i;

            }
            return liczba;
        }


int main(int argc, char** argv) {
	
	
	
	int n, liczba;
	
	int suma[20];
	
	liczba = 0;
	
	
	for (int i = 1; i <= 10; i++)
            {
            	
                cin >> n;
                if(n >= 1 & n <= 1000) {
				
                liczSume(n);
                suma[i] = liczSume(n);
            }
            }

            for (int i = 1; i <= 10; i++)
            {
              cout << suma[i] << endl;
            }
	
	
	
	
	
	
	
	
	
	
	cin.get();
	cin.get();
	return 0;
}
