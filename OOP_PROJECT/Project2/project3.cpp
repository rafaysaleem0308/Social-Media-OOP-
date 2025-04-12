#include "project2.h"


SocialEntiity::SocialEntiity()
{
	id = " ";
	pass = " ";
}
SocialEntiity::~SocialEntiity()
{
	
}
User::User()
{
	
}
void User::get_id()
{   SocialEntiity obj1;
	SocialEntiity obj2(obj1);
	while (1)
	{
		cout << "\t\t\t\t\t\tGALACTIC GEEK REELS" << endl;
		cout << "\t\t\t\t\t\t-------------------" << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tEnter your id: ";
		cin >> id;
		if (check_id())
		{
			
			
			break;
		}
		else
		{
			cout << "\t\t\t\t\t\tID NOT FOUND" << endl;
			cout << "\t\t\t\t\t\tPLEASE TRY AGAIN" << endl;
		}
		
	}
	
}

bool User::check_id()
{
	bool find = false;
	fstream file;
	string line;
	file.open("user.txt", ios::in);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			for (int i = 0; (i < id.length() && i < line.length()); i++)
			{
				if (line[i] == id[i])
				{
					find = true;
				}
				else
				{
					find = false;
				}
			}
			if (find)
			{
				break;
			}
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	return find;
}
void User::pass_id()
{
	while (1)
	{
		cout << "\t\t\t\t\t\tEnter your password: ";
		cin >> pass;
		if (check_pass())
		{
						break;
		}
		else
		{
			cout << "\t\t\t\t\t\tPASSWORD INCORRECT" << endl;
			cout << "\t\t\t\t\t\tPLEASE TRY AGAIN" << endl;
		}
	}
}
bool User::check_pass()
{
	bool check = false;
	fstream file;
	file.open("pass.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			for (int i = 0; i < pass.length()&&line.length(); i++)
			{
				if (line[i] == pass[i])
				{
					check = true;
				}
				else
				{
					check = false;
				}
			}
			if (check)
			{
				break;
			}
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	return check;
}

User::~User()
{
	
}
Post::Post()
{

}
Post::Post(Post& obj)
{
	id = obj.id;
	pass = obj.pass;
}
void Post::display_post()
{
	if (id == "rafey122")
	{
		system("cls");
		home_page1();
	}
	else if (id == "rayyan4k4")
	{
		system("cls");
        home_page2();
	}
}
void Post::home_page1()
{
	fstream file1;
	file1.open("rafey122.txt", ios::in);
	if (file1.is_open())
	{
		string line;
		while (getline(file1, line))
		{
			cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file1.close();
	Post1_access();

}
void Post::home_page2()
{
	fstream file2;
	file2.open("rayyan123.txt", ios::in);
	if (file2.is_open())
	{
		string line;
		while (getline(file2, line))
		{
			cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file2.close();
	Post2_access();
}
void Post::Post2_access()
{   cout<<"_________________________________________________________"<<endl;
	int choice;
	cout << "Press 1 to like post" << endl;
	cout << "Press 2 to comment on post" << endl;
	cout << "Press 3 to share post" << endl;
	cout<<"Press 4 to view Friend List"<<endl;
	cout<<"Press 5 to view Social pages"<<endl;
	cout << "Press 6 to logout" << endl;
	cout<<"Press 7 to go back to home page"<<endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:

		like();
		break;

	case 2:

		comment();
		break;

	case 3:

		share();
		break;
	case 4:
		friend_list();
		break;
	case 5:
		social_pages();


	case 6:

		logout();
		break;
		case 7:
			home_page2();
			break;

	default:

		cout << "Invalid choice" << endl;
		break;
	}
	
	
}
void Post::like()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO LIKE!!!!!" << endl;
    cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	
	switch (choice)
	{
	case 1:
		after_like(1);

	case 2:

		after_like(2);

	default:

		cout << "Invalid choice" << endl;
		break;
	}
	Post2_access();
}
void Post::after_like(int j)
{
	int a;
cout<<"_________________________________________________________"<<endl;
cout<<"ENTER WHICH EMOJI YOU WANT TO USE"<<endl;
cout<<"1)LIKE"<<endl;
cout<<"2)LOVE"<<endl;
cout<<"3)HAHA"<<endl;
cout<<"4)WOW"<<endl;
cout<<"5)SAD"<<endl;
cout<<"6)ANGRY"<<endl;
cout<<"7)Enter to choose return back"<<endl;
cin>>a;
switch (a)
{
case 1:
	append_post(j);
break;
case 2:
	append1_post(j);
	break;
case 3:
   append2_post(j);
	break;
case 4:
   append3_post(j);
	break;
case 5:
   append4_post(j);
	break;
case 6:
	append5_post(j);
	break;
case 7:
		Post2_access();
	break;
default:
cout<<"INVALID CHOICE"<<endl;
cout<<"PLEASE TRY AGAIN"<<endl;
after_like(j);
	break;
}
}
void Post::append_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file <<"RAYYAN LIKE TO THE POST"<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::append1_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file <<"RAYYAN HEART TO THE POST "<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
    Post2_access();
}
void Post::append2_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file<< endl;
		file <<"RAYYAN HAHA THE POST "<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::append3_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file <<"RAYYAN WOW TO THE POST "<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::append4_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file<< endl;
		file <<"RAYYAN SAD TO THE POST "<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::append5_post(int i)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file <<"RAYYAN ANGRY TO THE POST "<<i << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::comment()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO COMMENT ON!!!!!" << endl;
	cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout<<"To return press 3"<<endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		after_comment(1);

	case 2:

		after_comment(2);
		break;
	case 3:
		Post2_access();
		break;

	default:

		cout << "Invalid choice" << endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		comment();
		break;
	}
	Post2_access();
}
void Post::after_comment(int i)
{
	string comment;
	cout << "_________________________________________________________" << endl;
	cin.ignore();
	cout << "Enter your comment: ";
	cin >> comment;
	
	fstream file;
	file.open("rayyan44.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY COMMENTED ON POST: "<<i<<":" << comment << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	Post2_access();

}
void Post::share()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO SHARE!!!!!" << endl;
	cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout <<"To return press 3"<< endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		after_share(1);
		break;

	case 2:

		after_share(2);
		break;
	case 3:
		Post2_access();
		break;

	default:

		cout << "Invalid choice" << endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		share();
		break;
	}
	Post2_access();
}
void Post::after_share(int k)
{
	fstream file;
	file.open("rayyan123.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY SHARED POST "<<k<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page2();
	Post2_access();
}
void Post::friend_list()
{
	fstream file;
	system("cls");
	file.open("friends.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{  cout<<"_________________________________________________________"<<endl;
			cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		home_page2();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}
}
void Post::social_pages()
{   system("cls");
	int choice;
	cout<<"Which Page do you want to visit"<<endl;
	cout<<"1)Goal Page"<<endl;
	cout<<"2)Meme Page"<<endl;
	cout<<"3)Apple Page"<<endl;
	cout<<"4)Enter to return back"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch (choice)
	{
	  case 1:
			goal_page();
			break;
	 case 2:
		 meme_page();
			break;
	case 3:
		apple_page();
		break;
	 case 4:
		 Post2_access();
			break;
	 default:
		 cout<<"INVALID CHOICE"<<endl;
		 cout<<"PLEASE TRY AGAIN"<<endl;
		 social_pages();
			break;
	}
}
void Post::goal_page()
{
	fstream file;
	system("cls");
	file.open("GOAL.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{ 
		   cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page2();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}
}



void Post::meme_page()
{
	fstream file;
	system("cls");
	file.open("meme.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
		 cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page2();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}
}

void Post::apple_page()
{
	fstream file;
	system("cls");
	file.open("apple_page.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{  
			cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page2();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}
}
void Post::logout()
{
	system("cls");
	cout << "You have successfully logged out" << endl;
	get_id();
}


//home screen 1 //rafeyy
void Post::Post1_access()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "Press 1 to like post" << endl;
	cout << "Press 2 to comment on post" << endl;
	cout << "Press 3 to share post" << endl;
	cout<<"Press 4 to view Friend List"<<endl;
	cout<<"Press 5 to view Social pages"<<endl;
	cout << "Press 6 to logout" << endl;
	cout<<"Press 7 to go back to home page"<<endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:

		like1();
		break;

	case 2:

		comment1();
		break;

	case 3:

		share1();
		break;
	case 4:
		friend_list1();
		break;
	case 5:
		social_pages1();
		break;

	case 6:

		logout1();
		break;
	case 7:
			home_page1();
			break;
			
	default:

		cout << "Invalid choice" << endl;

		break;
	}
}
void Post::like1()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO LIKE!!!!!" << endl;
	cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout << "Press 3 for post 3" << endl;
	cout << "Press 4 for post 4" << endl;
	cout << "Press 5 for post 5" << endl;
	cout<<"Enter Choice"<<endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		after_like1(1);

	case 2:

		after_like1(2);
		break;

	case 3:

		after_like1(3);
		break;

	case 4:

		after_like1(4);
		break;

	case 5:

		after_like1(5);
		break;

	default:

		cout << "Invalid choice" << endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		like1();
		break;
	}
	Post1_access();
}
void Post::after_like1(int i)
{

	int a;
	cout<<"_________________________________________________________"<<endl;
	cout<<"ENTER WHICH EMOJI YOU WANT TO USE"<<endl;
	cout<<"1)LIKE"<<endl;
	cout<<"2)LOVE"<<endl;
	cout<<"3)HAHA"<<endl;
	cout<<"4)WOW"<<endl;
	cout<<"5)SAD"<<endl;
	cout<<"6)ANGRY"<<endl;
	cout<<"7)Enter to choose return back"<<endl;
	cout<<"ENTER YOUR CHOICE"<<endl;
	cin>>a;
	switch (a)
	{
	case 1:
		liking_post(i);
		break;
	case 2:
		liking1_post(i);
		break;
	case 3:
		liking2_post(i);
		break;
	case 4:
		liking3_post(i);
		break;
	case 5:
		liking4_post(i);
		break;
	case 6:
		liking5_post(i);
		break;

	case 7:
		Post1_access();
		break;
	default:
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		after_like1(i);
		break;
	
	}

}
void Post::liking_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY LIKE TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::liking1_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file << "RAFEY LOVE TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::liking2_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{
		file << endl;
		file << "RAFEY HAHA TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::liking3_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY WOW TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::liking4_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY SAD TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::liking5_post(int i)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY ANGRY REACT TO THE POST "<<i<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::comment1()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO COMMENT ON!!!!!" << endl;
	cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout<<"Enter Choice"<<endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		after_comment1(1);

	case 2:

		after_comment1(2);
		break;
    case 3:
		Post1_access();
		break;

	default:

		cout << "Invalid choice" << endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		comment1();
		break;
	}
	Post1_access();
}
void Post::after_comment1(int i)
{
	string comment;
	cin.ignore();
	cout << "Enter your comment: ";
    getline(cin,comment);
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY COMMENTED ON POST "<<i<<":" << comment << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
	Post1_access();
}
void Post::share1()
{
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout << "WHICH POST DO YOU WANT TO SHARE!!!!!" << endl;
	cout << "Press 1 for post 1" << endl;
	cout << "Press 2 for post 2" << endl;
	cout<<"3)Enter to return" << endl;
	cout<<"Enter Choice"<<endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		after_share1(1);

	case 2:

		after_share1(2);
		break;
	case 3:
		Post1_access();
		break;

	default:

		cout << "Invalid choice" << endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		share1();
		break;
	}
	Post1_access();
}
void Post::after_share1(int k)
{
	fstream file;
	file.open("rafey122.txt", ios::app);
	if (file.is_open())
	{   file<< endl;
		file << "RAFEY SHARED POST "<<k<<endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	system("cls");
	home_page1();
    Post1_access();
}
void Post::friend_list1()
{
		fstream file;
	system("cls");
	file.open("friends1.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{  cout<<"_________________________________________________________"<<endl;
					cout << line << endl;
				}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		home_page1();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}

}
void Post::social_pages1()
{
		system("cls");
	int choice;
	cout<<"Which Page do you want to visit"<<endl;
	cout<<"1)Goal Page"<<endl;
	cout<<"2)Meme Page"<<endl;
	cout<<"3)Apple Page"<<endl;
	cout<<"4)Enter to return back"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch (choice)
	{
	case 1:
			goal_page1();
			break;
	 case 2:
		 meme_page1();
			break;
	case 3:
		apple_page1();
		break;
	 case 4:
		 Post1_access();
			break;
	 default:
		 cout<<"INVALID CHOICE"<<endl;
		 cout<<"PLEASE TRY AGAIN"<<endl;
		 social_pages1();
			break;
	}

}
void Post::goal_page1()
{
	fstream file;
	system("cls");
	file.open("GOAL.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{  
					cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page1();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}
}
void Post::meme_page1()
{
		fstream file;
	system("cls");
	file.open("meme.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{  cout<<"_________________________________________________________"<<endl;
		 cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page1();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}

}
void Post::apple_page1()
{
			fstream file;
	system("cls");
	file.open("apple_page.txt", ios::in);
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{ 
			cout << line << endl;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	file.close();
	int choice;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Press 1 to go back to home page"<<endl;
	cin>>choice;
	if (choice == 1)
	{
		system("cls");
		home_page1();
	}
	else
	{
		cout<<"INVALID CHOICE"<<endl;
		cout<<"PLEASE TRY AGAIN"<<endl;
		cin>>choice;
	}

}
void Post::logout1()
{
	system("cls");
	cout << "You have successfully logged out" << endl;
	system("cls");
	get_id();
}