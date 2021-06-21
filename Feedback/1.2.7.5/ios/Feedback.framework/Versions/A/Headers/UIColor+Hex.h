//
//  UIColor+Hex.h
//  feedback
//
//  Created by 李焱 on 2021/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Hex)

+ (UIColor *)colorWithHexColor:(NSString *)hexColorString;
- (uint)hex;
+ (UIColor *)colorWithHexNoAlpha:(NSString *)hexString;
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

+ (UIColor *)colorWith8BitRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;
+ (UIColor *)colorWith8BitRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue alpha:(CGFloat)alpha;


+ (UIColor*) colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
+ (UIColor*) colorWithHex:(NSInteger)hexValue;
+ (UIColor*) colorWithHexAndAlpha:(NSInteger)hexValue;

@end

NS_ASSUME_NONNULL_END
