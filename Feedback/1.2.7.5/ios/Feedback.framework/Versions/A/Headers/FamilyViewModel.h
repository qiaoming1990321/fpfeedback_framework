//
//  FamilyViewModel.h
//  Feedback
//
//  Created by 李焱 on 2021/4/12.
//

#import <Foundation/Foundation.h>
#import "FeedbackStoreApi.h"
#import "FeedbackStoreModuleBean.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^GetModuleDataCallBack)(NSArray* _Nullable);

@interface FamilyViewModel : NSObject

- (void)getStoreModuleData:(GetModuleDataCallBack)callBack;

@end

NS_ASSUME_NONNULL_END
