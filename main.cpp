#include <iostream>
#include <string>
#include "sha1.h"
 
using namespace std;
 
int main(int argc, char *argv[])
{
	if( (argc == 2) || (argc > 2 && string(argv[1]) == "-f") )
	{
		if(string(argv[1]) == "-f")
		{
			for (int i = 2; i < argc; ++i)
			{
				cout << "sha1(" << argv[i] << "): " << sha1_file(string(argv[i])) << endl;
			}
		} else if(argc == 2)
		{
			cout << "sha1(" << argv[1] << "): " << sha1(argv[1]) << endl;
		}
	} else {
		cout << "sha1: invalid option\nUsage: ./sha1 [ -f filelocation]\n              [ message ]" << endl;
	}
    // cout << "sha1('nhub'): " << sha1("nhub") << endl;
    return 0;
}
