/*
利用指针编写C程序，实现如下功能：
接收从键盘输入的一个字符串，并将其所有字符依次拷贝到另一字符串中，要求在拷贝的过程中每两个字符后增加一个*，
完成拷贝后输出新字符串，并在输出完成后输出回车换行符表示结束。
注意：如果该字符串已到末尾，则不再加*
样例输入1：ab 2d 3c
样例输出1：ab*2d*3c（末尾有回车换行）
样例输入2：ab2d3
样例输出2：ab*2d*3（末尾有回车换行）
样例输入3：ab*cde
样例输出3：ab**c*de（末尾有回车换行）*/
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
string a;
char ch[200010];
int cnt = 0;
int main()
{

    cin >> a;

    //cout<<a.length()<<endl;
    for (int i = 0; i < a.length(); i++)
    {
        //cout<<'1'<<endl;
        if ((i % 2) == 1 && (i != a.length()-1))
        {
            ch[cnt++] = a[i];
            ch[cnt++] = '*';
        }
        else
            ch[cnt++] = a[i];
    }
    int n = strlen(ch);
    // cout<<"                 "<<n<<endl;
    for (int i = 0; i < n; i++)
        cout << ch[i];
    cout << endl;
}