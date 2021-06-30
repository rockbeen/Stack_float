#include <iostream>
#include <string>
using namespace std;
int main()
{
	string com;
	int size = 0;
	float var;
	float* array = new float[size + 1];
	float* buf;
	cout << "Stack of the 'float' type:" << endl << "Example: 'add 4.56'" << endl;
	do {
		cout << "Enter add / delete / show / stop" << endl;
		cin >> com;
		if (com == "add")
		{
			++size;
			buf = new float[size];
			cin >> var;
			for (int i = 0;i < size;++i)
			{
				(i == (size - 1)) ? buf[i] = var : (buf[i] = array[i]);
			}
			delete[] array;
			array = new float[size];
			for (int i = 0;i < size;++i)
			{
				array[i] = buf[i];
			}
			delete[] buf;
		}
		else if (com == "show")
		{
			for (int i = 0;i < size;++i)
			{
				cout << "array[" << i << "] = " << array[i] << endl;
			}
		}
		else if (com == "delete")
		{

			if (size > 0)
			{
				--size;
				buf = new float[size];
				for (int i = 0;i < size;++i)
				{
					buf[i] = array[i];
				}
				delete[] array;
				array = new float[size];
				for (int i = 0;i < size;++i)
				{
					array[i] = buf[i];
				}
				delete[] buf;
			}
			else cout << "the array is empty" << endl;

		}

	} while (com != "stop");

	return 0;
}


