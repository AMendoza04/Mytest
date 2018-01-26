#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  unsigned t0,t1;
  t0 = clock();
  cout << "Serrano es MARICA!!!!" << endl;
  cout << endl;
  for(int i = 0 ; i < 10 ; i++)
  {
    cout << i+1 << "\t";
  }
  cout << endl << endl;
  t1 = clock();
  double time = (double(t1-t0)/CLOCKS_PER_SEC);
  cout << "Tiempo de ejecucion: " << time << endl;

  return 0;
}
