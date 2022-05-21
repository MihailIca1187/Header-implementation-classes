#include "School.h"
#include <string>
#include <iostream>

using namespace std;

int main() {



	Student James;

	int James_id = 5;
	string James_Name = "James Jankowski";

	James.set_ID(James_id);
	James.set_Name(James_Name);

	cout << "These should be the values now \n\n";

	cout << James.get_ID() << "\n\n";
	cout << James.get_Name() << "\n\n";
}