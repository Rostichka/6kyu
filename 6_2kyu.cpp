string solution(int number)
{
  string s = "";
  if (number >= 1000)
  {
    for (int i = 0; i < number / 1000; i++)
      s += 'M';
    number = number % 1000;
  }
  if (number >= 900)
  {
    s += "CM";
    number -= 900;
  }
  if (number >= 500)
  {
    s += 'D';
    number -= 500;
  }
  if (number >= 400)
  {
    s += "CD";
    number -= 400;
  }
  if (number >= 100)
  {
    for (int i = 0; i < number / 100; i++)
      s += 'C';
    number = number % 100;
  }
  if (number >= 90)
  {
    s += "XC";
    number -= 90;
  }
  if (number >= 50)
  {
    s += 'L';
    number -= 50;
  }
  if (number >= 40)
  {
    s += "XL";
    number -= 40;
  }
  if (number >= 10)
  {
    for (int i = 0; i < number / 10; i++)
      s += 'X';
    number = number % 10;
  }
  if (number == 9)
  {
    s += "IX";
    number -= 9;
  }
  if (number >= 5)
  {
    s += 'V';
    number -= 5;
  }
  if (number == 4)
  {
    s += "IV";
    number -= 4;
  }
  if (number >= 1)
  {
    for (int i = 0; i < number; i++)
      s += 'I';
    number = 0;
  }
  return s;
}
