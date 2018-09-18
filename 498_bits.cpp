/* **************************************************************************

    * File Name : 498_bits.cpp

    * Creation Date : 2018-09-11 12:55:58

    * Last Modified : 2018-09-18 09:53:26

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int x; //多項式中的 x 值
    int *a = new int[1000000]; 
    //因為陣列太大會造成stack overflow，所以使用動態配置，最後最好加上delete
    //除非將 int a[1000000]; 設為全域變數也可以
    int index; //陣列引數

    while(cin >> x)
    {
        index = 0;
        for(int i = 0; i < 1000000; i++) a[i] = 0; //初始化 a 陣列
        while(cin >> a[index])
            if (getchar() == '\n')
                break; //如果遇到換行就跳出迴圈
            else
                index++; //否則繼續存入陣列
        int ans = 0; //結果值
        for(int j = index, k = 0; j > 0; j--, k++)
            ans += a[k] * j * pow(x, j - 1); //計算多項式，並存入結果值
        cout << ans << endl; //輸出答案
    }
    delete[] a; //因為宣告 a 陣列以動態配置，因此最好加上delete
    return 0;
}
