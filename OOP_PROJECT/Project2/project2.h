#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class SocialEntiity
{
public:
	string id;
	string pass;
	SocialEntiity();
	~SocialEntiity();

};
class User : public SocialEntiity
{
public:
	User();
	void get_id();
	bool check_id();
	void pass_id();
	bool check_pass();

	~User();
};
class Post :public User
{
public:
	Post();
	Post(Post &obj);
	void display_post();
	//id: rafey122
	void home_page1();
	void Post1_access();
	void like1();
	void after_like1(int i);
	void liking_post(int i);
	void liking1_post(int i);
	void liking2_post(int i);
	void liking3_post(int i);
	void liking4_post(int i);
	void liking5_post(int i);
	void comment1();
	void after_comment1(int i);
	void share1();
	void after_share1(int k);
	void friend_list1();
	void social_pages1();
	void goal_page1();
	void meme_page1();
	void apple_page1();
	void logout1();
	// Second id: rayyan4k4
    void home_page2();
	void Post2_access();	
	void like();
	void after_like(int j);
	void append_post(int i);
    void append1_post(int i);
    void append2_post(int i);
    void append3_post(int i);
    void append4_post(int i);
    void append5_post(int i);
	void comment();
    void after_comment(int i);
    void share();
    void after_share(int k);
	void friend_list();
	void social_pages();
	void goal_page();
	void meme_page();
	void apple_page();
    void logout();


};

