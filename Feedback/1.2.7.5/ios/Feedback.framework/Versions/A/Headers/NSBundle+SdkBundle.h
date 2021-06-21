//
//  NSBundle+SdkBundle.h
//  Feedback
//
//  Created by 李焱 on 2021/4/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (SdkBundle)

+ (NSBundle *)sdkBundle;
+ (NSString *)fp_localizedStringForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
