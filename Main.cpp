#include <iostream>
#include "Memo.h"

using namespace std;

int main() {
    Memo *memo = new Memo();
    bool loop = true;

    while(loop) {
        int menu = 0;
        cout << "処理を選んでください" << endl;
        cout << "1. メモの追加" << endl;
        cout << "2. メモの編集" << endl;
        cout << "3. メモの削除" << endl;
        cout << "9. 終了" << endl;

        string menu_str = "";
        cin >> menu_str;
        menu = atoi(menu_str.c_str());

        switch(menu) {
            case 1:
                memo->createMemo("test");
            break;
            case 9:
                cout << "処理を終了します" << endl;
                loop = false;
            break;
            default:
                cout << "選択された処理を不正です" << endl;
            break;
        }
    }
    return 0;
}