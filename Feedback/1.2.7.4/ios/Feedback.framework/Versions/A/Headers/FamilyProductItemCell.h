//
//  FamilyProductItemCell.h
//  Feedback
//
//  Created by 李焱 on 2021/4/12.
//

#import <UIKit/UIKit.h>
#import "FeedbackStoreModuleBean.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FamilyProductItemCellDelegate <NSObject>

- (void)skipStoreClick:(FeedbackStoreModuleBean *)bean;

@end

@interface FamilyProductItemCell : UICollectionViewCell

@property(nonatomic, weak) id<FamilyProductItemCellDelegate> delegate;

- (void)setupBean:(FeedbackStoreModuleBean *)bean;

@end

NS_ASSUME_NONNULL_END
