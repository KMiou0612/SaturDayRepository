#include "Map.h"
#include "Dxlib.h"

#include <fstream>
#include <sstream>
#include <string>

Map::Map() :
	mapXNum(0), mapYNum(0), isInitalized(false) //メンバーの初期化タイミングは違ううため、ここで揃える。isInitalized()がfalseだと読み込みできておらず、trueだと読み込みできていうrという合図を送るイメージ
{
	for (int i = 0; i < Config::MAP_CHIP_IMAGE_COUNT; i++)
	{
		chipImages[i] = -1;
	}
}

Map::~Map()
{
	Finalize();
}

//初期化
bool Map::Init()
{
	Finalized();

	//画像をチップ単位に分割して読み込み
	if (LoadDiveGraph(Config::MAP_CHIP_IMAGE_PATH,
		Config::MAP_CHIP_IMAGE_COUNT,
		Config::MAP_CHIP_IMAGE_COLUMNS,
		Config::MAP_CHIP_IMAGE_ROWS,
		Config::MAP_CHIP_SIZE,Config::MAP_CHIP_SIZE,chipImages) ==-1)
	{
		Finalized();
		return false;
	}

	//CSVファイルの読み込み
	if (!LoadMap(Config::MAP_BACK_CSV_PATH.backMap)||
		!LoadMap(Config::MAP_BASE_CSV_PATH.baseMap)||
		!LoadMap(Config::MAP_NEAR_CSV_PATH.nearMap
	{

	}
}
//マップの読み込み
//描画レイヤー
//描画フラグ