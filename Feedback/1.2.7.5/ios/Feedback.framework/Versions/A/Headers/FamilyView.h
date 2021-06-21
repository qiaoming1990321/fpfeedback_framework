//
//  FamilyView.h
//  Feedback
//
//  Created by 李焱 on 2021/4/12.
//

#import <UIKit/UIKit.h>
#import "FamilyViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FamilyViewDelegate <NSObject>

- (void)closeBtnClick;
- (void)shareBtnClick;
- (void)adviseBtnClick;
- (void)skipAppStoreClick:(NSString *)appId;

- (void)openAppClick:(FeedbackStoreModuleBean *)bean;
- (void)skipToAppSoreClick:(FeedbackStoreModuleBean *)bean;

@end

@interface FamilyView : UIView

@property(nonatomic, weak) id<FamilyViewDelegate> delegate;

- (void)setupStoreModuleData:(NSArray *)beans;
- (void)screenOrientationChange:(CGRect)rect;
@end

NS_ASSUME_NONNULL_END
