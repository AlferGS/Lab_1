#include <iostream>
#include <string>
#include <iomanip>

/*Ввод строки и вывод её в обратном порядке. Ширина
поля в 1,5 раза превышает длинну строки. Результат
вывести в верхнем регистре*/

std::string reverse(std::string str, int size);

int main()
{
	std::string str;
	int size = 0;				
	std::cout << "Enter string\n";				//Ввод строки, определение её длинны и отправка в функцию reverse
	std::getline(std::cin, str);
	size = str.size();
	str = reverse(str, size);
	std::cout << std::setw(size*1.5) << str << "\n";	//Вывод результата с установкой ширины поля
}
//Функция реверса строки с переводом в верхний регистр
std::string reverse(std::string str, int size)
{
	char temp;
	int i = 0;
	size--;
	while( i < size )
	{
		str[i] = toupper(str[i]);
		str[size] = toupper(str[size]);
		temp = str[i];
		str[i++] = str[size];
		str[size--] = temp;
	}
	return str;
}
