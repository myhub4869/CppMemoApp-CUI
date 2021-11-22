#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Memo
{
private:
    string filename;
    vector<string> memoList;

public:
    Memo();

    void showMemo();
    void createMemo(string text);

    void save();
};
