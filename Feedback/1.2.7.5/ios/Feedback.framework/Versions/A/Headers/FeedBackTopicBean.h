//
//  FeedBackTopicBean.h
//  feedback
//
//  Created by 李焱 on 2021/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackTopicBean : NSObject

@property(nonatomic, strong) NSString *topicId;
@property(nonatomic, strong) NSString *topicName;
@property(nonatomic, assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
