#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <windows.h>

#define answer_min_same 0.7

std::vector<std::pair<const std::string, const std::string>> dataLib = {
  { "who weihaocheng", "Weihaocheng is weicheng." },
  { "who weicheng", "Weicheng is weihaocheng."},
  { "summer air conditioner turn on", "It's too hot in summer so we must turn on the air conditioner!" }
};

char lower(const char c)
{
  if (c >= 'A' && c <= 'Z') { return c + 32; }
  return c;
}

const int search(const std::string& ques, double& sameTo)
{
  int ans = -1;
  double maxSame = 0;

  // 统计相同率
  for (int i = 0; i < dataLib.size(); ++i)
  {
    int sameCount = 0;
    auto charTable = new char[dataLib[i].first.length() + 1];
    memset(charTable, 0, dataLib[i].first.length() + 1);
    for (int j = 0; j < dataLib[i].first.length(); ++j)
    {
      for (int k = 0; k < ques.length(); ++k)
      {
        if (lower(dataLib[i].first[j]) == lower(ques[k]) && charTable[j] == 0)
        {
          ++sameCount;
          charTable[j] = 1;
        }
      }
    }
    double same = double(sameCount) / dataLib[i].first.length();
    if (maxSame < same)
    {
      maxSame = sameTo = same;
      ans = i;
    } 
  }

  return ans;
}

const std::string answer(const std::string& ques)
{
  double same;
  int ans = search(ques, same);
  std::cout << "(" << same << ")\n";

  if (same > answer_min_same)
  {
    return dataLib[ans].second;
  }
  return "$%$@$#%";
}

int main()
{
  // 初始化
  HANDLE outputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

  // Ai 程序开始页面
  std::cout << "ChatGQT v0.1, input the name of this AI: ";
  std::string aiName, question;
  std::getline(std::cin, aiName);
  dataLib.push_back({ "who you", "I am " + aiName + "." });

  std::cout << "You are now able to chat with '" << aiName << "'!\n";

  while (true)
  {
    std::cout << ">> ";
    std::getline(std::cin, question);
    // 输出回答框
    GetConsoleScreenBufferInfo(outputHandle, &csbi);
    for (int i = 1; i <= 2; ++i)
    {
      std::cout << '+';
      for (int j = 1; j < csbi.dwSize.X - 1; ++j)
      {
        std::cout << '-';
      }
      std::cout << "+";

      if (i == 1) { std::cout << answer(question); }
      std::cout << '\n';
    }
  }

  return 0;
}