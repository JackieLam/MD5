//
//  main.cpp
//  MD5
//
//  Created by Cho-Yeung Lam on 23/10/13.
//  Copyright (c) 2013 Cho-Yeung Lam. All rights reserved.
//

#include "MD5.h"
#include <iostream>
using namespace std;
    
int main()
{
    MD5 m;
    cout << m.encryptionWithMD5("abcd") << endl;
    cout << m.encryptionWithMD5("abc") << endl;
	
	return 0;
}
