#include <vector>
#include <string>
#include <iostream>

using namespace std;

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// receive amount of titans and the size of the walls in one line
// string with length n composed by P, M and G
// then receives 3 numbers indicating the amount of each titan of p m and g respectively

// walls = 0
// if titan > wall then he jumps, adds 1 more wall
// if titan <= wall, wall is destroyed k meters and titan dies

int main() {
  boost;
  int nTitans, wallSize, p, m, g;
  string titansSeq;
  cin >> nTitans >> wallSize;
  cin.ignore();
  cin >> titansSeq;
  cin >> p >> m >> g;

  vector<int> wallsVector;
  wallsVector.push_back(wallSize);

  int pIdx, mIdx, gIdx;
  pIdx = mIdx = gIdx = 0;

  for (int currTitanIdx = 0; currTitanIdx < nTitans; currTitanIdx++) {
    int titanSize, wallIdx;
    switch(titansSeq[currTitanIdx]) {
      case 'P':
        titanSize = p;
        wallIdx = pIdx;
        break;
      case 'M':
        titanSize = m;
        wallIdx = mIdx;
        break;
      case 'G':
        titanSize = g;
        wallIdx = gIdx;
        break;
    }

    // walls loop
    while (true) {
      int wallsVectorSize = wallsVector.size();

      // cout << "wallIdx = " << wallIdx << " ";
      // cout << "titanSize = " << titanSize << " ";
      // cout << "current wallSize = " << wallsVector[wallIdx] << " ";
      // cout << "\n";

      if (wallsVector[wallIdx] >= titanSize) {
        wallsVector[wallIdx] -= titanSize;
        if (wallsVector[wallIdx] <= 0 && wallIdx + 1 == wallsVectorSize) {
          wallsVector.push_back(wallSize);
          wallIdx++;
        }
        break;
      }
      else {
        if (wallIdx + 1 == wallsVectorSize)
          wallsVector.push_back(wallSize);
        wallIdx++;
      }
    }

    switch(titansSeq[currTitanIdx]) {
      case 'P':
        if (wallIdx > pIdx)
          pIdx = max(pIdx, wallIdx);
        break;
      case 'M':
        mIdx = max(mIdx, wallIdx);
        break;
      case 'G':
        gIdx = max(gIdx, wallIdx);
        break;
    }
  }

  if (wallsVector.back() == wallSize)
    wallsVector.pop_back();

  cout << wallsVector.size() << "\n";

  return 0;
}