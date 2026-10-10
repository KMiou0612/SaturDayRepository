#include <iostream>
using namespace std;

//Playerクラスを定義
class Player
{
public:
	int hp = 100;
	Player();
	
	void Damage()
	{
		hp -= 10;
	}

};


int main(void)
{
	//Playerのオブジェクトをインスタンス化
	Player player;
	cout << "Player:HP" << player.hp << endl;

	//Playerのオブジェクトをアドレスとポインタに保存する
	Player* pPlayer = &player;

	//ポインタを使ってDamege関数を呼び出すこともできる
	pPlayer->Damage();

	cout << "Player:HP" << player.hp << endl;

	return 0;

}