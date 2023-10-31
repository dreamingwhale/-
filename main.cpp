#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
	vector<int> answer;
	vector <string> photoToName;
	for (int i = 0; i < photo.size(); i++)
	{
		int tmp = 0;
		int total = 0;
		photoToName = photo[i];

		total = 0;
		for (int j = 0; j < photoToName.size(); j++)
		{
			for (int k = 0; k < name.size(); k++)
			{
				tmp = 0;
				if (name[k] == photoToName[j])
				{
					tmp = yearning[k];
				}
				total += tmp;

			}
		}
		answer.push_back(total);

	}


	return answer;
}

int main()
{
	vector<string> name = { "may", "kein", "kain", "radi" };
	vector <int> yearning = { 5, 10, 1, 3 };
	vector<vector<string>> photo = { {"may", "kein", "kain", "radi"},{"may", "kein", "brin", "deny"},{"kon", "kain", "may", "coni"} };
	solution(name, yearning, photo);
	return 0;
}
