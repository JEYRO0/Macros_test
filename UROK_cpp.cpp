
#include <Windows.h>
#include <iostream>
using namespace std;
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define SQUARE(x) ((x) * (x))
#define UP(x, y, k)         \
    {                            \
        k = 1;              \
        for (int i = 0; i < y; ++i) { \
            k *= x;        \
        }                        \
    }

#define DOUBLE(x) ((x)%2 == 0 ? true : false)





int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int k = 0;
	int x = 0;
	int y = 0;
	int a = 0;

	while(a !=7){
		cout << "Введіть свій вибір:\n";
		cout << "Мінімальне число: 1\n";
		cout << "Максимальне число: 2\n";
		cout << "Квадрат числа: 3\n";
		cout << "Піднесення до степеня: 4\n";
		cout << "Перевірка на парність: 5\n";
		cout << "Перевірка на непарність: 6\n";
		cout << "Вихід: 7\n";
		cin >> a;

		if(a == 1){
			cout << "Введіть два числа: ";
			cin >> x;
			cin >> y;
			cout << "Мінімальне число: " << MIN(x, y) << endl;
		}
		else if(a == 2){
			cout << "Введіть два числа: ";
			cin >> x;
			cin >> y;
			cout << "Максимальне число: " << MAX(x, y) << endl;
		}
		else if(a == 3){
			cout << "Введіть число: ";
			cin >> x;
			cout << "Квадрат числа: " << SQUARE(x) << endl;
		}
		else if(a == 4){
			cout << "Введіть число та степінь: ";
			cin >> x;
			cin >> y;
			for( int i = 0; i < y; i++){
				UP(x, y, k);
			}
			cout << k << endl;
		}
		else if(a == 5){
			cout << "Введіть число: ";
			cin >> x;
			if(DOUBLE(x)){
				cout << "Число парне" << endl;
			} else {
				cout << "Число непарне" << endl;
			}
		}
		else if(a == 6){
			cout << "Введіть число: ";
			cin >> x;
			if (DOUBLE(x)) {
				cout << "Число парне" << endl;
			}
			else {
				cout << "Число непарне" << endl;
			}
		}
		cout << "-------------------------" << endl;
	}
	return 0;
	
}
