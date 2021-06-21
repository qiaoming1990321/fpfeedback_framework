//
//  FeedBackBean.h
//  feedback
//
//  Created by 李焱 on 2021/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackBean : NSObject

@property(nonatomic, strong) NSString *content;
@property(nonatomic, strong) NSString *email;
@property(nonatomic, strong) NSData *imageData;
@property(nonatomic, strong) NSString *imageUrl;
@property(nonatomic, assign) NSInteger productId;
@property(nonatomic, assign) NSInteger type;

@end

NS_ASSUME_NONNULL_END
