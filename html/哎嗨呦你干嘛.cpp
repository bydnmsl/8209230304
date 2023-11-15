#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	char code[10][100] = {
		"<!doctype HTML>",
		"<html>",
		"<head>",
		//"<meta charset=\"utf-8\">",
		"<title>我的HTML程序</title>",
		"</head>",
		"<h1>标题</h1>",
		"<p>段落</p>",
		"</body>",
		"</html>",
	};
	ofstream outfile("website.html");
	for (int i = 0; i < 10; i++) {
		outfile << code[i] << '\n';
	}
	outfile.close();
	system(" start website.html");
}