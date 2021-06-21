//
//  FeedbackStoreApi.h
//  AFNetworking
//
//  Created by 李焱 on 2021/4/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//#define MODULE_ID   127431//正式服

//#define MODULE_ID   109603//测试服


typedef void(^StroeModuleCallBack)(NSData* _Nullable);

@interface FeedbackStoreApi : NSObject

@property(strong, nonatomic) NSURLSession *session;
@property(nonatomic, strong) NSURLSessionDataTask *task;

- (void)getStoreModule:(StroeModuleCallBack)callback;
@end

NS_ASSUME_NONNULL_END
