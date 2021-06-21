//
//  FeedBackParams.h
//  feedback
//
//  Created by 李焱 on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackParams : NSObject

@property(nonatomic, strong) NSString *appId;   // 必填
@property(nonatomic, strong) NSString *uuId;    // 必填
@property(nonatomic, assign) NSInteger productId;   // 必填
@property(nonatomic, assign) NSInteger buyChannel;  // 选填

@property(nonatomic, strong) NSString *aliyunEndPoint;  // 必填
@property(nonatomic, strong) NSString *aliyunAk;    // 必填
@property(nonatomic, strong) NSString *secretK; // 必填
@property(nonatomic, strong) NSString *bucketName;  // 必填

@property(nonatomic, strong) NSString *appVersionCode;  // 必填
@property(nonatomic, strong) NSString *appVersionName;  // 必填

/**
    以下内容为自定义反馈页面，选填
 */
@property(nonatomic, strong) UIColor *viewBackGroundColor;  //  页面背景颜色
@property(nonatomic, strong) UIColor *navigationTitleColor; //  标题栏文案颜色
@property(nonatomic, strong) UIColor *titleColor;   // 页面内容标题颜色
@property(nonatomic, strong) UIColor *textViewBackGroundColor;  //  输入框背景颜色
@property(nonatomic, strong) UIColor *placeHolderColor; //  输入框占位符文案颜色
@property(nonatomic, strong) UIColor *textViewTextColor;    //  输入框文案颜色
@property(nonatomic, strong) UIColor *textViewTintColor;    //  输入框光标颜色
@property(nonatomic, strong) UIColor *submitBackGroundColor;    //  提交按钮背景颜色
@property(nonatomic, strong) UIImage *attachmentBtnImage;   //  附件按钮图标

/**
    以下内容为自定义family页面，选填
 */
@property(nonatomic, strong) UIColor *fpSubTitleColor;  //  页面副标题颜色
@property(nonatomic, strong) UIColor *fpDescColor; //  页面描述颜色
@property(nonatomic, strong) UIColor *productTitleColor;   // 产品标题颜色
@property(nonatomic, strong) UIColor *productDescColor;  //  产品描述颜色
@property(nonatomic, strong) UIColor *productGetBtnColor; //  产品按钮标题颜色
@property(nonatomic, strong) UIColor *productGetBtnBgColor;    //  产品按钮背景颜色
@property(nonatomic, strong) UIColor *cardBgColor;    //  卡片背景颜色
@property(nonatomic, strong) UIColor *bgColor;    //  背景颜色
@property(nonatomic, strong) UIImage *closeImage;   //  关闭按钮图标
@property(nonatomic, strong) UIImage *shareImage;   //  分享按钮图标
@property(nonatomic, strong) UIImage *adviseImage;   //  建议按钮图标
@property(nonatomic, strong) UIImage *familyBgImage;   //  背景图
@property(nonatomic, assign) BOOL hideDefaultBgImage;   //  是否隐藏背景图

@property(nonatomic, assign) BOOL openDarkMode;   //  是否打开深色模式

@end

NS_ASSUME_NONNULL_END
