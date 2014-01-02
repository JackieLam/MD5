//
//  MD5.h
//  MD5
//
//  Created by Cho-Yeung Lam on 25/10/13.
//  Copyright (c) 2013 Cho-Yeung Lam. All rights reserved.
//

#ifndef __MD5__MD5__
#define __MD5__MD5__

#include <iostream>
#include <string>

using namespace std;

class MD5
{
public:
    void printResult();
    string encryptionWithMD5(string srcString);
private:
    void encryptWithBlock(const uint8_t block[64]);
    void encode(const uint32_t* input, uint8_t* output, size_t length); //from word to byte
    void decode(const uint8_t* input, uint32_t* output, size_t length); //from byte to word
    void appending(const uint8_t* input, size_t length);
    
    static const uint8_t PADDING[64]; //最多往后添加64个byte
    static const uint8_t HEX[16];
    uint32_t state[4];
    uint32_t count[2];
    uint8_t buffer[64];
    uint8_t result[16];
};

#endif /* defined(__MD5__MD5__) */
