//
//  NSData+AES.h
//  Ueater_v0.1_20170421
//
//  Created by Stone_熊小叔 on 2017/7/3.
//  Copyright © 2017年 符琼林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>

@interface NSData (AES)
-(NSData *) aes256_encrypt:(NSString *)key;
-(NSData *) aes256_decrypt:(NSString *)key;
@end
