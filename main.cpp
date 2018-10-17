/*
file: main.cpp
Description: program that checks characters for char upper lower case a
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: 10/18/2018
*/

#include<iostream>

#include<string>

using namespace std;

	string s = "3034987AAAAaaAAaa349850394850934850";
	int count = 0;
	char c = 'a';
	char C = 'A';
	int char_c(string s);

	int main()
	{	

	   cout << char_c(s) << endl;
	}
	//function to compare characters for upper and lower case a
	int char_c(string s)
	{
    	   for (int i = 0; i < s.length(); i ++)
    	{
    	   if (s.at(i) == c || s.at(i) == C)
        	count++;
    	}    
  	return count;
	}   


