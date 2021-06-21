//
//  FPFeedbackConfig.h
//  Feedback
//
//  Created by admin on 2021/6/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FPFeedbackConfig : NSObject

+ (FPFeedbackConfig *)sharedInstance;

- (void)setEnvironmentStatus:(BOOL)isDebug;

- (void)setupModuleId:(NSInteger)moduleId;

- (NSInteger)getCacheModuleId;

- (NSString *)getFamilyBaseUrl;

- (NSString *)toJson:(NSObject *)object;

- (NSString *)getCurrAppBundleId;

- (NSString *)getCurrAppName;

@end

NS_ASSUME_NONNULL_END
