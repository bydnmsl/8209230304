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
		"<title>�ҵ�HTML����</title>",
		"</head>",
		"<h1>����</h1>",
		"<p>����</p>",
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