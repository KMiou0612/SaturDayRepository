#pragma once
#include <vector>
#include "Config.h"

class Map
{
private:
	//ファイルを読み込み

	/// <summary>
	/// ロードマップ
	/// </summary>
	/// <param name="filePath">マップCSVファイルパス</param>
	/// <param name="mapData">マップチップイメージ</param>
	/// <returns>描画判定</returns>
	bool loadMap(const char* filePath, std::vector<std::vector<int>>& mapData);

	/// <summary>
	/// 描画レイヤー
	/// </summary>
	/// <param name="mapData">マップチップイメージ</param>
	void DrawLayer(const std::vector<std::vector<int>>& mapData)const;


	/// <summary>
	/// 描画フラグ
	/// </summary>
	/// <param name="mapX">X座標</param>
	/// <param name="mapY">Y座標</param>
	/// <returns></returns>
	bool IsValidMapposition(int mapX, int mapY);

	int chipImages[Config::MAP_CHIP_IMAGE_COUNT];
	//マップの内容
	std::vector<std::vector<int>> backMap;  //vectorの中のvectorがint型というような状態
	std::vector<std::vector<int>> basemap;
	std::vector<std::vector<int>> nearMap;

	int mapXNum;
	int mapYNum;
	bool isInitalized;
public:
	//コンストラクタ＆デストラクタ
	Map();
	~Map();

	//画像とCSVを読み込み

	/// <summary>
	/// 画像読み込み初期化
	/// </summary>
	/// <returns></returns>
	bool Init();

	//マップを奥から手前の順に描画

	/// <summary>
	/// 描画
	/// </summary>
	void Draw()const;

	//Dxlib終了前に世に出して画像などを開放
	void Finalized();
};

