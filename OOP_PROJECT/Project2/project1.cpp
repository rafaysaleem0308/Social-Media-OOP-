#include"project2.h"

int main()
{ system("color 30");

	Post access1;
	access1.get_id();
	access1.pass_id();
	Post access2(access1);
	access2.display_post();
	system("pause");
	return 0;

}
