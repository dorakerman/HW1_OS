#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	char* wd = get_current_dir_name();
	printf("Current working directory is: %s\n", wd);
	free(wd);
	
	char a[] = "hello";
	std::cout << a << std::endl;
	
	wd = get_current_dir_name();
	list<string> hist;
	hist.push_back("first");
	hist.push_back("second");
	hist.push_front(wd);
	cout << hist.size() << endl;
	for (auto& iter : hist) cout << iter << endl;
	//free(hist.begin());
	hist.pop_front();
	

	cout << getpid() << endl;

	int fd1 = open("/media/sf_OS/tmp1");
	int fd2 = open("/media/sf_OS/tmp2");
	
	char text1[100];
	char text2[100];

	int bytes1 = read(fd1, text1, 100);
	int bytes2 = read(fd2, text2, 100);
	
	if (bytes1 < 0 || bytes2 < 0)
	{
		cout << "error, file does not exist!" << endl;
	}
	
	else if (
	
	//char* last = get_current_dir_name();
	//chdir("/home");

	//char* new_last = get_current_dir_name();
	//chdir(last);
	//free(last);
	//last = new_last;
	//printf("Last Current working directory is: %s\n", new_last);
	//free(new_last);
	
	//char* last_cwd = get_current_dir_name();
	//chdir("/home");
	//printf("Current working directory is: %s\n", get_current_dir_name());
	//chdir(last_cwd);
	//printf("Current working directory is: %s\n", get_current_dir_name());
}
