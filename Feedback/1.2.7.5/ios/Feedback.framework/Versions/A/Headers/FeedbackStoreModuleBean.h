//
//  FeedbackStoreModuleBean.h
//  Feedback
//
//  Created by 李焱 on 2021/4/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedbackStoreModuleBean : NSObject

@property(nonatomic, strong) NSString *moduleId;

@property(nonatomic, strong) NSString *title;

@property(nonatomic, strong) NSString *appId;

@property(nonatomic, strong) NSString *desc;

@property(nonatomic, strong) NSString *skipUrl;

@property(nonatomic, strong) NSArray *publicityPicUrl;

@property(nonatomic, strong) NSString *logoUrl;

@property(nonatomic, assign) NSInteger layout;

//非服务器返回字段
//是否安装过
@property(nonatomic, assign) BOOL hasInstall;

+ (NSArray *)transforModuleBeans:(NSData *)data;

- (BOOL)isShowQRDialog;

@end

NS_ASSUME_NONNULL_END
