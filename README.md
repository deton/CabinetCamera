# 持出者記録用カメラ

オフィスで共用のモバイルルータ等備品を棚から持ち出す際、
誰が持ち出したか後で確認したい場合があったので、
棚の扉を開けた時にカメラで撮影するものを作りました。

リードスイッチで、棚の扉が開いた時にカメラをオンにして撮影しているだけです。

![写真](../img/cabinet.jpg)

### 部品

* [エーモン 開閉連動スイッチ](https://www.amon.co.jp/products2/detail.php?product_code=1628)。リードスイッチ。離れた時にオン
* [JST 2ピンPHコネクタ用ソケット](https://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=2DK2-SDD8)。
  エーモン開閉連動スイッチをブレッドボードで使うため。
* [トリガー付きミニスパイカメラ](https://www.switch-science.com/catalog/3153/)
* [Adafruit Pro Trinket 5V](https://www.switch-science.com/catalog/2008/)
* [モバイルバッテリ cheero Canvas 3200mAh IoT機器対応](https://www.switch-science.com/catalog/2618/)。
  リードスイッチオフの期間がしばらく続いた後でオンになった時に電源供給して欲しいので。
  (代替案: 単3電池4本をPro TrinketのBAT+に入れる)
* [DIP化3.3/5V電源キット brebo.jam.dc](http://www.aitendo.com/product/12124)
  (代替案: [ブレッドボード用5V電源ボード Micro-B版](https://www.switch-science.com/catalog/2443/))
* ブレッドボード
* microSDカード

トリガー付きミニスパイカメラのコネクタは、1.27mmピッチ。
これに合うソケットを探し忘れていたので、昔買った[板バネ式ピンソケット](https://www.marutsu.co.jp/pc/i/98607/)を分解しつつ使用。

![回路図](../img/schematic.png)

## known issue
* Adafruit Pro Trinketだと、スイッチオン直後10秒間は書き込み待ちモードなので、撮影が可能になるのは10秒以降の制約あり。
