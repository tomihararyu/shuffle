// shuffle.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b;
	for (int i =9; i > 0; i--)
	{
		swap(a[rand() % a[i - 1]], a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i]<<" ";
	}


}
//void CalcMulC(int* array, int size)
//{
//	srand(time(NULL));
//	for (int i = 0; i < size; i++)
//	{
//		array[i] = rand() % 99;
//	}
//	for (int i = size; i > 0; i--)
//	{
//		swap(array[rand() % array[i - 1]], array[i]);
//	}
//}
//void ShowArray(const int* array, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << " ";
//	}
//}
//int main()
//{
//	int* array;
//	int size;
//	cout << "何個生成しますか？1～9" << endl;
//	cin >> size;
//	array = new int[size];
//	CalcMulC(array, size);
//	ShowArray(array, size);
//	delete[] array;
//	array = NULL;
//
//}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
