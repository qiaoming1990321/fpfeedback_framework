//
//  FeedbackProductBean.h
//  feedback
//
//  Created by 李焱 on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedbackProductBean : NSObject

@property(nonatomic, strong) NSString *productName;
@property(nonatomic, strong) NSString *productNameForCN;
@property(nonatomic, strong) NSString *productId;
@property(nonatomic, assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
