#include <iostream>
#include "Memo.h"

using namespace std;

const string SPLIT_LINE = "------------------------------";

int main() {
    Memo *memo = new Memo();
    bool loop = true;

    while(loop) {
        int menu = 0;
        cout << "処理を選んでください" << endl;
        cout << "1. 一覧の表示" << endl;
        cout << "2. メモの追加" << endl;
        cout << "3. メモの編集" << endl;
        cout << "4. メモの削除" << endl;
        cout << "5. 保存" << endl;
        cout << "9. 終了" << endl;

        string menu_str = "";
        string memo_text = "";
        cout << ">> : ";
        cin >> menu_str;
        menu = atoi(menu_str.c_str());

        cout << SPLIT_LINE << endl;
        switch(menu) {
            case 1:
                memo->showMemo();
            break;
            case 2:
                cout << "メモしたい文言を入力してください" << endl;
                cout << ">> : ";
                cin >> memo_text;
                memo->createMemo(memo_text);
            break;
            case 4:
                memo->deleteMemo();
            break;
            case 5:
                memo->save();
            break;
            case 9:
                cout << "処理を終了します" << endl;
                loop = false;
            break;
            default:
                cout << "選択された番号が不正です" << endl;
            break;
        }
        cout << SPLIT_LINE << endl;
    }
    return 0;
}