class SoccerTeam {
	int PlayerNo[11];
public ://여기에 public 영역을 지정해준다.
	bool bPossess;
	int Score;

	void KickOff() { bPossess = true; }
	void Shoot() {};

	void KickBall() {}
	void Pass() {}
private :
	char TeamName[20];
};

int main() {
	SoccerTeam Red, Blue;

	Red.Score = 0;
	Blue.Score = 0;
	Red.KickOff();
	Red.Pass();
	Red.Shoot();

	return 0;

	

}