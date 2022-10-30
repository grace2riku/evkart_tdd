# LedDriverテストリスト

- [ ] ドライバを初期化したら、すべてのLEDが消灯している
- [ ] ホールセンサーUのレベルをホールセンサーLEDで示す
- [ ] ホールセンサーVのレベルをホールセンサーLEDで示す
- [ ] ホールセンサーWのレベルをホールセンサーLEDで示す
- [ ] 通電ステージ1のFETのレベルをFET LEDで示す
- [ ] 通電ステージ2のFETのレベルをFET LEDで示す
- [ ] 通電ステージ3のFETのレベルをFET LEDで示す
- [ ] 通電ステージ4のFETのレベルをFET LEDで示す
- [ ] 通電ステージ5のFETのレベルをFET LEDで示す
- [ ] 通電ステージ6のFETのレベルをFET LEDで示す
- [ ] 異常な通電ステージ(ホールセンサーのレベルが通電ステージ1〜6のいずれかにも該当しない)の場合はFET LEDをすべてオフにする


## LedDriver メモ
 * ホールセンサーの出力状態を示すLEDが3つある。
 * FETの制御状態を示すLEDが6つある。
 * ホールセンサーのLED、FETのLEDは6種類の点灯パターンがある。

タイミングチャート:
![タイミングチャート](/image/LedDriver/timing_chart.png)

タイミングチャートの真理値表:
![タイミングチャートの真理値表](/image/LedDriver/timing_chart_table.png)

 * LEDは1書き込みで点灯、0書き込みで消灯する。
 * ホールセンサU・V・WのLEDは同じアドレスのGPIOデータレジスタに割り付けられている。

所有しているEVカート(2013年発売モデル)だと8ビットのデータレジスタにつぎのように割り当てられている。

2bit目: ホールセンサーU LED

3bit目: ホールセンサーV LED

4bit目: ホールセンサーW LED


 * FETのLED(UH・VH・WH・UL・VL・WL)は同じアドレスのGPIOデータレジスタに割り付けられている。

所有しているEVカート(2013年発売モデル)だと8ビットのデータレジスタにつぎのように割り当てられている。

0bit目: FET UH LED

1bit目: FET UL LED

2bit目: FET VH LED

3bit目: FET VL LED

4bit目: FET WH LED

5bit目: FET WL LED
