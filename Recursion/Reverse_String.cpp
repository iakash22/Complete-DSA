#include <iostream>
using namespace std;
void reverse1(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i++], str[j--]);

    reverse1(str, i, j);
}
void reverse2(string &str, int st)
{
    if (st > (str.size() - 1) / 2)
    {
        return;
    }
    swap(str[st++], str[str.size() - 1 - st]);
    reverse2(str, st);
}
void reverse3(string str){
    if(str.size() == 0){
        return;
    }

    string ros = str.substr(1);
    reverse3(ros);
    cout<<str[0];
}
int main()
{
    string str = "thanos";

    // reverse1(str, 0, str.length() - 1);
    reverse2(str,0);

    cout << str << endl;
    reverse3("thanos");

    return 0;
}