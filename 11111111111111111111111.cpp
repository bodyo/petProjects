#include <iostream>
using namespace std;

int ato(const char *srt)
{
    int number = 1;
    int num = 0;
    int sum = 0;
    int size = 0;
    for(int i = 0; srt[i+1] != '\0'; i++)
        size++;
    cout << size<<endl;
    for(int i = size; i >= 0; i--)
    {
        num = srt[size-i] - '0';
        for(int j = 0; j < i; j++)
            number*=10;
        number*=num;
        sum+=number;
        number = 1;
    }
    return sum;
}

int ato1(const char *srt)
{
    int num = 0;
    for(int i = 0; srt[i] != '\0'; i++)
    {
        num *= 10;
        num += srt[i] - '0';
    }
    return num;
}


int atoo(const char *srt)
{
    int num = 0;
    for(int i = 0; srt[i] != '\0'; i++)
        num = num * 10 + (srt[i] - '0');
    return num;
}

int main()
{
    char *et = "2004";
    cout << foo(et) << endl << ato1(et);
}
