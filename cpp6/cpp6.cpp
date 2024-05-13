#include <iostream>
#include <string>
using namespace std;
class Neko
{
private:
    string name;

public:
    Neko(string s)
    {
        name = s;
    }
    void naku()
    {
        cout << "私の名前は" << name << "ですにゃ" << endl;
    }
};

int main()
{
    Neko dora("ボス");
    Neko tama("タマ");
    cout << "あなたの名付けた猫がメモリ上に生成されました。" << endl;
    cout << "猫が鳴きます。" << endl;

    dora.naku();
    tama.naku();
}