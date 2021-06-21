//
//  UIImage+SdkBundle.h
//  Feedback
//
//  Created by 李焱 on 2021/4/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (SdkBundle)

+ (UIImage *)imageNamedFromSdkBundle:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
