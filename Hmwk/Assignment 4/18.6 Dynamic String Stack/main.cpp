/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nicholas
 *
 * Created on May 5, 2019, 10:34 PM
 */

#include <cstdlib>
#include <iostream>
#include "StringStack.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string str; 
	StringStack myStack = StringStack(); 
	myStack.push("apple");
	myStack.push("pear");
	myStack.push("Bannana");
	myStack.pop(str);
	cout << "Item removed: " << str << endl;
	myStack.pop(str);
	cout << "Item removed: " << str << endl;
	myStack.pop(str);
	cout << "Item removed: " << str << endl;
	myStack.pop(str);
    return 0;
}

