ЭТО САНТЕХНИК, ДЕТКА

#include <iostream>
#include <string>
using namespace std;

void task1() {
  string name;
  cout << "Введите своё имя: ";
  cin >> name;
}
 
void chetNechet() {
  /*
  int a;
  cout <<"Введите число: ";
  cin >> a;
  if (a % 2 == 0) {
    cout <<"Это чётное число" << endl;
  }
    else {
      cout <<"Это нечётное число" << endl;
    }


}

}
  void task3(){
int b;
 cout <<"Введите число: ";
cin >> b;
if (10 % b == 0) {
  cout <<"Это делитель" << endl;
}
  else {
    cout <<"Это не делитель" << endl;
}
*/
}
/*
void task4(){
  int e;
  cout <<"Введите координату x: ";
  cin >> e;
  int d;
  cout <<"Введите координату y: ";
  cin >> d;
  if (e < 5) {
    cout <<"Это первый квартал" << endl;
  }
  if (d < 5){
    cout <<"Это второй квартал" << endl;
  }
  if (e < 10) {
    cout <<"Это третий квартал" << endl;
  }
  if (d < 10) {
    cout << "Это четвёртый квартал" << endl;
*/
void task5() {
  int km;
  cout << "Введите количество километров: ";
  cin >> km;
  if (km > 0 && km % 2 == 0) {
    float result;
    result = km * 1.6093;
    cout << result;
  } else {
    cout << "Некорректный ввод";
  }
}

void task6() {
  int q;
  cout << "Введите первое число: ";
  cin >> q;
  int r;
  cout << "Введите второе число: ";
  cin >> r;
  int s;
  cout << "Введите третье число:";
  cin >> s;
  if (q > r && q > s) {
    cout << "Первое число больше" << endl;
  }
  if (r > q && r > s) {
    cout << "Второе число больше" << endl;
  }
  if (s > q && s > r) {
    cout << "Третье число больше" << endl;
  }
}

void task7() {
  int u;
  cout << "Введите первое число: ";
  cin >> u;
  int v;
  cout << "Ввести второе число: ";
  cin >> v;
  if (u == v) {
    cout << "Числа равны" << endl;
  } else {
    cout << "Числа не равны" << endl;
  }
}

void task8() {
  int w;
  cout << "Введите число: ";
  cin >> w;
  if (w > 1 && w < 100) {
    cout << "Число входит в диапозон" << endl;
  } else {
    cout << "Число не входит в диапозон" << endl;
  }
}

void task9() {
  string stroka;
  cin >> stroka;
  if (stroka == "yes") {
    cout << "Да" << endl;
  }
  if (stroka == "no") {
    cout << "нет" << endl;
  }
}

void task10() {
  int x;
  cout << "Введите первую сторону треугольника: ";
  cin >> x;
  int y;
  cout << "Введите вторую сторону треугольника: ";
  cin >> y;
  int z;
  cout << "Введите третью сторону треугольника: ";
  cin >> z;
  if (x + y > z && x + z > y && y + z > x) {
    cout << "Треугольник существует" << endl;
  } else {
    cout << "Треугольник не существует" << endl;
  }
}

void task11() {
  int a1;
  cout << "Введите год: ";
  cin >> a1;
  if (a1 % 4 == 0) {
    cout << "Год високосный" << endl;
  } else {
    cout << "Год не високосный" << endl;
  }
}

void task12() {
  for (int b1 = 2; b1 < 21; b1++) {
    if (b1 % 2 == 0) {
      cout << b1 << endl;
      cout << "Чётное число" << endl;
    }
  }
}

void task13() {
  int sum = 0;
  for (int b2 = 0; b2 < 101; b2++)
    sum += b2;
  cout << sum;
}

void task14() {
  for (int b3 = 10; b3 > 0; b3--) {
    cout << b3 << endl;
  }
}

void task15() {
  int sum = 0;
  for (int b4 = 0; b4 < 51; b4++) {
    if (b4 % 2 == 1) {
      sum += b4;
    }
  }
  cout << sum << endl;
}

void task16() {
  for (int b5 = 1; b5 < 11; b5++)
    cout << b5 << "*" << 5 << "=" << b5 * 5 << endl;
}

void task17() {
  int b6;
  cout << "Введите число: ";
  cin >> b6;
  int sum = 1;
  for (int b7 = 1; b7 <= b6; b7++)
    sum *= b7;
  cout << sum;
}

void task18() {
  int prev = 1;
  int last_prev = 1;
  int b8;
  cout << "Введите число: ";
  cin >> b8;
  int sum = 1;
  for (int b9 = 1; b9 <= b8; b9++) {
    sum = prev + last_prev;
    last_prev = prev;
    prev = sum;
    cout << sum << " ";
  }
}

void task19() {
  int c1;
  cout << "Введите число: ";
  cin >> c1;
  for (int c2 = 1; c2 <= c1; c2++)
    if (c1 % c2 == 0) {
      cout << c2 << endl;
      cout << c1 << "/" << c2 << "=" << c1 / c2 << endl;
    }
}

void task20() {
  char c7;
  string c6;
  cout << "Введите числа (макс.  10): ";
  cin >> c6;
  int c4;
  cout << "Введите кол-во чисел: ";
  cin >> c4;
  if (c4 == 3) {
    c7 = c6[0];
    c6[0] = c6[2];
    c6[2] = c7;
  }
  if (c4 == 4) {
    char c0 = c6[0];
    char d1 = c6[1];
    c6[0] = c6[3];
    c6[1] = c6[2];
    c6[3] = c0;
    c6[2] = d1;
  }
  if (c4 == 5) {
    char c8;
    char c9;
    c8 = c6[0];
    c9 = c6[1];
    c6[0] = c6[4];
    c6[1] = c6[3];
    c6[3] = c9;
    c6[4] = c8;
  }
  if (c4 == 6) {
    char d2 = c6[0];
    char d3 = c6[1];
    char d4 = c6[2];
    c6[0] = c6[5];
    c6[1] = c6[4];
    c6[2] = c6[3];
    c6[5] = d2;
    c6[4] = d3;
    c6[3] = d4;
  }
  if (c4 == 7) {
    char d5 = c6[0];
    char d6 = c6[1];
    char d7 = c6[2];
    c6[0] = c6[6];
    c6[1] = c6[5];
    c6[2] = c6[4];
    c6[6] = d5;
    c6[5] = d6;
    c6[4] = d7;
  }
  if (c4 == 8) {
    char d8 = c6[0];
    char d9 = c6[1];
    char d10 = c6[2];
    char d11 = c6[3];
    c6[0] = c6[7];
    c6[1] = c6[6];
    c6[2] = c6[5];
    c6[3] = c6[4];
    c6[7] = d8;
    c6[6] = d9;
    c6[5] = d10;
    c6[4] = d11;
  }
  if (c4 == 9) {
    char d12 = c6[0];
    char d13 = c6[1];
    char d14 = c6[2];
    char d15 = c6[3];
    c6[0] = c6[8];
    c6[1] = c6[7];
    c6[2] = c6[6];
    c6[3] = c6[5];
    c6[8] = d12;
    c6[7] = d13;
    c6[6] = d14;
    c6[5] = d15;
  }
  if (c4 == 10) {
    char d16 = c6[0];
    char d17 = c6[1];
    char d18 = c6[2];
    char d19 = c6[3];
    char d20 = c6[4];
    c6[0] = c6[9];
    c6[1] = c6[8];
    c6[2] = c6[7];
    c6[3] = c6[6];
    c6[4] = c6[5];
    c6[9] = d16;
    c6[8] = d17;
    c6[7] = d18;
    c6[6] = d19;
    c6[5] = d20;
  }
  cout << c6 << endl;
}
void task21() {
  string c21;
  char space = '_';
  cout << "Введите предложение: ";
  cin >> c21;
  int sum = 0;
  for (int i = 0; i < c21.length(); i++) {
    if (c21[i] == space) {
      sum += 1;
    }
  }
  cout << "Кол-во пробелов: " << sum << endl;
}

void task22() {
  string c22;
  cout << "Введите предложение: ";
  cin >> c22;
  cout << "Длина предложения: " << c22.length();
}

void task23() {
  string c23;
  cout << "Введите предложение: ";
  cin >> c23;
  if (c23.length() > 0) {
    cout << "Строка не пустая" << endl;
  } else {
    cout << "Строка пустая" << endl;
  }
}

void task24() {
  string c24;
  cout << "Введите предложение: ";
  cin >> c24;
  for (int i = 0; i < c24.length(); i++) {
    c24[i] = char(int(c24[i]) - 32);
  }
  cout << c24;
}

void task25() {
  string c25;
  char space = '_';
  cout << "Введите предложение: ";
  cin >> c25;
  for (int i = 0; i <= c25.length(); i++)
    if (c25[i] == space) {
      c25[i] = '-';
    }
  cout << c25;
}

void task26() {
  string c26;
  cout << "Введите предложение: ";
  cin >> c26;
  int c28 = 0;
  for (int i = 0; i < c26.length(); i++) {
    string sub = c26.substr(i, 3);
    if (sub == "246") {
      c28 = 1;
      break;
    }
  }
  if (c28 == 0) {
    cout << "Числа 246 нет в предложении" << endl;
  } else {
    cout << "Число 246 есть в предложении" << endl;
  }
}

void task27() {
  string c27;
  cout << "Введите предложение: ";
  cin >> c27;
  for (int i = 0; i < c27.length(); i++) {
    if (c27[i] == '_') {
      cout << "Первая буква:" << c27[0] << endl;
      cout << "Первая буква: " << c27[i + 1] << endl;
    }
  }
}

void task28() {
  string c28;
  cout << "Введите предложение: ";
  cin >> c28;
  for (int i = 0; i < c28.length(); i++)
 if (c28[i] == '1' || c28[i] == '2' || c28[i] == '3' || c28[i] == '4' ||
 c28[i] == '5' || c28[i] == '6' || c28[i] == '7' || c28[i] == '8' ||
 c28[i] == '9' || c28[i] == '0') {
 c28.erase(i, 1);
 i--;
 cout << c28 << endl;
}
}

void task29(){
  string c29;
  cout << "Введите предложение: ";
  cin >> c29;
  int sum = 0;
  string c30 = "eyuioa";
  for (int i = 0; i < c29.length(); i++){
  for (int j= 0; j < c30.length(); j++){
  if(c29[i] == c30[j]){
sum+=1;
}}}
  cout << sum << endl;
}

void task30(){
  string c30;
  cout << "Введите предложение: ";
  cin >> c30;
  string c31;
  cout << "Введите предложение: ";
  cin >> c31;
  c30.append(c31);
  cout << c30;
}

void task31(){
  string c31;
  cout << "Введите предложение: ";
  cin >> c31;
  char c32 = '+';
  if(c31[0] == c32){
cout << "Заданный префикс присутствует" << endl;
  }
    else{
    cout << "Заданный префикс отсутствует" << endl;
  }
}

void task32(){
  srand(3473057);
  int c33[10] = {};
  for (int i = 0; i < 10; i++)
    c33[i] = rand()%10;
  for (int i = 0; i < 10; i++)
  cout << c33[i];
}

void task33(){
  int c34[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int sum = 0;
  for (int i = 0; i < 10; i++)
  sum+=c34[i];
  cout << sum;
}

void task34(){
  int c35[5] = {1,2,3,200,5};
  int c36 = 0;
  for (int i = 0; i < 5; i++){
    if (c35[i] > c36 ){
      c36 = c35[i];
    }
  }
  cout << c36;
}

void task35(){
  int c37[5] = {2,1,3,200,5};
  int c38 = 0;
  for (int i = 0; i < 5; i++)
  if (c37[i] 

void task36(){
    int c39[5] = {};
    cout << "Введите набор чисел: ";
   cin >> c39;
    int c40 = c39;
    cin >> c40;
  }
  
/*
string c3;
cout << "Введите строку символов: ";

for (c3--)
  cout << c3 << endl;
  */

/*
void task21(){
  string c4 = "abc";
  str[" "] = str["c5"]
  int
}
  */
int main() {

  task34();
  /*
   task3();
    int a;
    cout <<"Введите первое число:";
    cin >> a;
     int b;
    cout <<"Введите второе число:";
    cin >> b;
    cout <<"Произведение чисел: " << a * b << endl;

    int c;
    cout <<"Введите длину прямоугольника:";
    cin >> c;
     int d;
    cout <<"Введите ширину прямоугольника:";
    cin >> d;
    cout <<"Периметр прямоугольника: " << 2 * (c + d) << endl;

    int e;
    cout <<"Введите число километров:";
    cin >> e;
    cout <<"В милях это: " << e * 1.60934 << endl;

    int f;
    cout <<"Введите свой возраст:";
    cin >> f;
    cout <<"Через 5 лет вам исполнится: " << f + 5 << endl;

    int g;
    cout <<"Введите первое число:";
    cin >> g;
     int h;
    cout <<"Введите второе число:";
    cin >> h;
    int i;
    cout <<"Введите третье число:";
    cin >> i;
    cout <<"Среднее арифметическое этих чисел: " << (g + h + i) / 3 << endl;

  int k;
    cout <<"Сколько вам лет? ";
    cin >> k;
     if (k < 18) {
     cout << "Тогда вы не допускаетесь к программе" << endl;
     }
     else {
     cout << "тогда вы допускаетесь к программе" << endl;
    }

    int j;
    cout <<"Введите длину квадрата:";
    cin >> j;
    cout << "Площадь квадрата: " << j * j << endl;

    int l;
    cout <<"Введите длину куба:";
    cin >> l;
    cout << "Объём куба: " << l * l * l << endl;

    int m;
    cout <<"Введите число: ";
    cin >> m;
    cout << "квадрат числа: " << m * m << endl;
    */
}
