//
//  NSString+AES.h
//  Ueater_v0.1_20170421
//
//  Created by Stone_熊小叔 on 2017/7/3.
//  Copyright © 2017年 符琼林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSData+AES.h"
#import <CommonCrypto/CommonDigest.h>
@interface NSString (AES)

-(NSString *) aes256_encrypt:(NSString *)key;
-(NSString *) aes256_decrypt:(NSString *)key;


@end
