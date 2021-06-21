
//
//  QWTabBar.h
//  QWTabBar
//
//  Created by xxxx on 2018/4/26.
//  Copyright © 2018年 xxxxx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonHMAC.h>
#import <CommonCrypto/CommonDigest.h>

@interface NSString (Base64Addition)
+ (NSString *)stringFromBase64String:(NSString *)base64String;
+ (NSString *)stringFromBase64UrlEncodedString:(NSString *)base64UrlEncodedString;
- (NSString *)base64String;
- (NSString *)base64UrlEncodedString;
- (NSString *)md5Digest;
@end

@interface NSData (Base64Addition)
+ (NSData *)dataWithBase64String:(NSString *)base64String;
+ (NSData *)dataWithBase64UrlEncodedString:(NSString *)base64UrlEncodedString;
- (NSString *)base64String;
- (NSString *)base64UrlEncodedString;
@end

//@interface MF_Base64Codec : NSObject
//end

@interface GMCryptorUtil : NSObject

+ (NSString *)desEncrypt:(NSString *)string key:(NSString *)key;
+ (NSString *)desDecryptFromData:(NSData *)data key:(NSString *)key;
+ (NSString *)desEncryptBase46UrlString:(NSString *)string key:(NSString *)key;
+ (NSString *)desEncrypt:(NSString *)string keyCString:(char *)key;

+ (NSString *)desDecrypt:(NSString *)string key:(NSString *)key;
+ (NSString *)hmacSHA256Encrypt:(NSString*)string WithKey:(NSString *)key;
+ (NSData *)hmacEncryptForData:(NSData*)data UsingAlg:(CCHmacAlgorithm)alg withKey:(NSData *)key;

+(NSData *)dataFromBase64String:(NSString *)base64String;
+(NSString *)base64StringFromData:(NSData *)data;
+(NSString *)base64UrlEncodedStringFromBase64String:(NSString *)base64String;
+(NSString *)base64StringFromBase64UrlEncodedString:(NSString *)base64UrlEncodedString;

@end
