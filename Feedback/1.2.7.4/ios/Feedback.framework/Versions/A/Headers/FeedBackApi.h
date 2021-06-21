//
//  FeedBackApi.h
//  feedback
//
//  Created by 李焱 on 2021/3/19.
//

#import <Foundation/Foundation.h>
#import "FeedBackBean.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^FeedBackCallBack)(BOOL);
typedef void(^ProductCallBack)(NSData* _Nullable);
typedef void(^TopicCallBack)(NSData* _Nullable);

@interface FeedBackApi : NSObject

@property(strong, nonatomic) NSURLSession *session;
@property(nonatomic, strong) NSURLSessionDataTask *task;

- (void)doFeedBack:(FeedBackBean *)info :(FeedBackCallBack)callBack;
- (void)getProductList:(ProductCallBack)callBack;
- (void)getTopicList:(TopicCallBack)callBack;

@end

NS_ASSUME_NONNULL_END
