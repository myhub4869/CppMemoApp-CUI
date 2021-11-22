#include "Memo.h"

Memo::Memo()
{
    this->filename = "./memo.txt";
    this->memoList.clear();

    ifstream ifs(this->filename);
    if( ifs.is_open() ) {
        ifstream reading_file;
        reading_file.open(this->filename, ios::in);
        string reading_line_buffer;
        int counter = 0;
        while(getline(reading_file, reading_line_buffer)){
            this->memoList.push_back(reading_line_buffer);
            counter ++;
        }

    } else {
        ofstream(this->filename);
    }
}
void Memo::showMemo()
{
    for (int i = 0 ; i < this->memoList.size(); i++) {
        cout << "No:" << (i + 1) << " : " << this->memoList[i] << endl;
    }
}
void Memo::createMemo(string text)
{
    cout << "追加中....." << endl;
    this->memoList.push_back(text);
    cout << "追加完了！" << endl;
}
void Memo::save()
{
    cout << "下記メモ内容を保存します。" << endl;
    this->showMemo();
    cout << "保存中....." << endl;

    ofstream writing_file;
    writing_file.open(this->filename, ios::out);

    for (int i = 0 ; i < this->memoList.size(); i++) {
        writing_file << this->memoList[i] << endl;
    }
    writing_file.close();
    cout << "保存完了！" << endl;
}

