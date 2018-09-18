# 498 bits 

有做過ACM Online Judge Problem Set Q498 Polly the Polynomial嗎？這個問題是從他衍生出來的，同樣是要讓你記起基本的代數技巧。在Q498中是請你求以下多項式的值：


a0(x^n)+a1(x^n-1)+...+an-1(x+an) 

而在本問題中，要請你求此多項式的導函數（ derivative）的值。上述多項式的 導函數定義如下：


a0n(x^n-1)+a1(n-1)(x^n-2)+...+an-1 

所有的輸入及輸出都在整數的範圍內，也就是說其絕對值一定小於231。

每組測試資料2列，第一列有一個整數，代表x的值。第二列則含有一連串的整數a0, a1, ..., an-1, an。代表多項式的各項次係數。（第二列的長度可能很長，但是最多不會超過1000000個字元的長度）


對每組測試資料輸出一列，根據輸入x的值輸出多項式的導函數（ derivative）的值。 

# Output example
* 已成功通過「瘋狂程設」閱卷系統批改測試 
![image](https://github.com/Samuelchi861008/CPE-498bis_10268/blob/master/結果.png)
