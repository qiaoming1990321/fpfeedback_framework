//
//  FeedBackCollectionViewCell.h
//  feedback
//
//  Created by 李焱 on 2021/3/26.
//

#import <UIKit/UIKit.h>
#import "FeedbackProductBean.h"
#import "FeedBackTopicBean.h"
#import "UIColor+Hex.h"
#import <Masonry/Masonry.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackCollectionViewCell : UICollectionViewCell

- (void)updateCell:(id)bean;

@end

NS_ASSUME_NONNULL_END
