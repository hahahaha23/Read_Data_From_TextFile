#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test01()
{
  //1.include header file

  //2.create stream file
  istream ifs;

  //3.open file and judge whether open success
  ifs.open("text.txt", ios::in);
  if(!ifs.is_open())
  {
    cout << "Open file failed." << endl;
    return;
  }

  //4.start read data
  //4.1
  char buf[1024] = {0};
  while(ifs >> buf)
  {
    cout << buf << endl;
  }

  //4.2
  char buf[1024] = {0};
  while(ifs.getline(buf, sizeof(buf)))
  {
    cout << buf << endl;
  }

  //4.3
  string buf;
  while(getline(ifs, buf))
  {
    cout << buf << endl;
  }

  //4.4 unrecommend, read data char by char;
  char c;
  while((c = ifs.get() !=EOF))
  {
    cout << c;
  }

  //5.close file
  ifs.close()
}

int main()
{
  test01();

  system("pause")
  return 0;
}
