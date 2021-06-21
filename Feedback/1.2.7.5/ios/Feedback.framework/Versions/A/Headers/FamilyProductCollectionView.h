//
//  FamilyProductCollectionView.h
//  Feedback
//
//  Created by 李焱 on 2021/4/12.
//

#import <UIKit/UIKit.h>
#import "FeedbackStoreModuleBean.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FamilyProductCollectionViewDelegate <NSObject>

- (void)skipAppStoreClick:(FeedbackStoreModuleBean *)bean;
- (void)scrollDistance:(CGFloat)distance withHeaderHeight:(CGFloat)height;

@end

@interface FamilyProductCollectionView : UICollectionView

@property(nonatomic, strong) NSArray *moduleBeans;
@property(nonatomic, weak) id<FamilyProductCollectionViewDelegate> customDelegate;
@property(nonatomic, assign) BOOL isLandScape;

@end

NS_ASSUME_NONNULL_END
