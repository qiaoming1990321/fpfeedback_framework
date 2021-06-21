//
//  FamilyProductQRView.h
//  Feedback
//
//  Created by 李焱 on 2021/4/23.
//

#import <UIKit/UIKit.h>
#import "FeedbackStoreModuleBean.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FamilyProductQRViewDelegate <NSObject>

- (void)qrSkipAppStoreClick:(NSString *)appId;

@end

@interface FamilyProductQRView : UIView

@property(nonatomic, weak) id<FamilyProductQRViewDelegate> delegate;

- (void)setupProductBean:(FeedbackStoreModuleBean *)bean;

@end

NS_ASSUME_NONNULL_END
