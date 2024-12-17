#include "pch.h"
#include "Task.h"
#include <iostream>
#include <fstream>
using namespace std;


TEST(TestTask, BadFileName) {
	string fileName = "test.txt";
	int count = GetWordsCount(fileName);
	EXPECT_EQ(count, -1);
}

TEST(TestTask, EmptyFile0Words) {
	string fileName = "test1.txt";
	int count = GetWordsCount(fileName);
	EXPECT_EQ(count, 0);
}

TEST(TestTask, FileWithSpaces0Words) {
	string fileName = "test2.txt";
	int count = GetWordsCount(fileName);
	EXPECT_EQ(count, 0);
}

TEST(TestTask, FileWith5Words) {
	string fileName = "test3.txt";
	int count = GetWordsCount(fileName);
	EXPECT_EQ(count, 5);
}