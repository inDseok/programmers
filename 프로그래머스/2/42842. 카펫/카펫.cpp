#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector <int> answer;
    int total = brown + yellow;

    for (int height = 3; height <= total / height; ++height) {
        if (total % height == 0) {
            int width = total / height;
            if ((width - 2) * (height - 2) == yellow) {
                answer.push_back(width);
                answer.push_back(height);
            }
        }
    }
    return answer;
}
