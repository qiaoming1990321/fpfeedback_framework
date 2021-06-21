//
//  FeedBackModel.h
//  feedback
//
//  Created by 李焱 on 2021/3/18.
//

#import <Foundation/Foundation.h>
#import "FeedBackApi.h"
#import "FeedBackBean.h"
#import "FeedBackApi.h"
#import "ALiYunOssApi.h"
//#import <AFNetworking/AFNetworking.h>
#import "FeedbackProductBean.h"
#import "FeedBackTopicBean.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum _SubmitState {
    SubmitStateStart = 0,
    SubmitStateSuccess = 1,
    SubmitStateFail = 2
}SubmitState;

typedef void(^FeedbackResultCallBack)(SubmitState);
typedef void(^AppListResultCallBack)(NSArray* _Nullable);
typedef void(^TopicListResultCallBack)(NSArray* _Nullable);

@interface FeedBackModel : NSObject

- (void)submitFeedBack:(FeedBackBean *)bean :(FeedbackResultCallBack)callback;
- (void)getAppList:(AppListResultCallBack)callback;
- (void)getTopicList:(TopicListResultCallBack)callback;

@end

NS_ASSUME_NONNULL_END
