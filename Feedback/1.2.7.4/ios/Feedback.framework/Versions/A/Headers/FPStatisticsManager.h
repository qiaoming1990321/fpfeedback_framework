//
//  FPStatisticsManager.h
//  Feedback
//
//  Created by admin on 2021/6/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FPStatisticsManager : NSObject
+ (FPStatisticsManager *(^)(void))initObject;

- (FPStatisticsManager * (^)(NSString *str))operationCode;

- (FPStatisticsManager * (^)(NSString *str))funcId;

- (FPStatisticsManager * (^)(NSString *str))protocol;

- (FPStatisticsManager * (^)(NSString *str))statisticsObject;

- (FPStatisticsManager * (^)(NSString *str))associationObject;

- (FPStatisticsManager * (^)(NSString *str))entrance;

- (FPStatisticsManager * (^)(NSString *str))tab;

- (FPStatisticsManager * (^)(NSString *str))orderType;

- (FPStatisticsManager * (^)(NSString *str))remark;

- (FPStatisticsManager * (^)(NSString *str))remarkOne;

- (FPStatisticsManager * (^)(NSString *str))remarkTwo;

- (FPStatisticsManager * (^)(NSString *str))position;

- (FPStatisticsManager * (^)(NSString *str))orderId;

- (FPStatisticsManager * (^)(NSString *str))resultCode;

- (FPStatisticsManager * (^)(NSString *str))advertId;

- (void (^)(void))upload104NoTypeStatics;
@end

NS_ASSUME_NONNULL_END
