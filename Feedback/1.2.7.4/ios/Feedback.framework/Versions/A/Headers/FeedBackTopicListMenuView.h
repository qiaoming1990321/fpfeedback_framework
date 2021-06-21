//
//  FeedBackTopicListMenuView.h
//  feedback
//
//  Created by 李焱 on 2021/3/25.
//

#import <UIKit/UIKit.h>
#import "FeedBackTopicBean.h"
#import "UIColor+Hex.h"
#import <Masonry/Masonry.h>
#import "FeedBackCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FeedBackTopicListMenuViewDelegate <NSObject>

- (void)chooseTopicResult:(FeedBackTopicBean *)bean;

@end

@interface FeedBackTopicListMenuView : UIView

@property(nonatomic, strong) UICollectionView *collectionView;
@property(nonatomic, weak) id<FeedBackTopicListMenuViewDelegate> delegate;

- (void)showWithList:(NSArray *)list;
- (void)hide;
- (BOOL)isShow;
- (void)screenOrientationChange:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
