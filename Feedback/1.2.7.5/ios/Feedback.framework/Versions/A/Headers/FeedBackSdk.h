//
//  FeedBackSdk.h
//  feedback
//
//  Created by 李焱 on 2021/3/23.
//

#import <Foundation/Foundation.h>
#import "FeedBackParams.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ParamsCallBack)(FeedBackParams*);

@interface FeedBackSdk : NSObject

@property(nonatomic, strong) FeedBackParams *params;

+(instancetype)shareInstance;
- (void)setup:(FeedBackParams *)params;
- (void)updateParams:(ParamsCallBack)callBack;
- (void)showInController:(UIViewController *)vc needFamily:(BOOL)needFamily;

- (void)setupEnvironment:(BOOL)isDebug;
- (void)setupModuleId:(NSInteger)moduleId;

@end

NS_ASSUME_NONNULL_END
