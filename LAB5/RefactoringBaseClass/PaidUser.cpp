#include "PaidUser.h"

void PaidUser::SetPosts(Post* posts, int postsCount)
{
	if (postsCount < 0)
	{
		throw exception("Posts count must be positive");
	}
	_posts = posts;
	_postsCount = postsCount;
}

Post* PaidUser::GetPosts() 
{
	return _posts; 
}

int PaidUser::GetPostsCount() 
{ 
	return _postsCount; 
}

PaidUser::PaidUser(int id, string login, string password,
	Post* posts, int postsCount) : User(id, login, password)
{
	SetPosts(posts, postsCount);
}

PaidUser::PaidUser(int id, string login, string password)
	: User(id, login, password)
{

}
