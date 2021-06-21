//
//  FeedBackViewController.h
//  feedback
//
//  Created by 李焱 on 2021/3/18.
//

#import <UIKit/UIKit.h>
#import "FeedBackView.h"
#import "FeedBackModel.h"
#import "FeedBackBean.h"
#import <MBProgressHUD/MBProgressHUD.h>
#import "FeedbackProductBean.h"
#import "FeedBackTopicBean.h"
#import "FeedBackSdk.h"

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackViewController : UIViewController

@property(nonatomic, assign) BOOL needFamily;
@property(nonatomic, strong) FeedBackView *feedBackView;
@property(nonatomic, strong) FeedBackModel *model;
@property(nonatomic, strong, nullable) UIImage * image;
@property(nonatomic, strong) FeedbackProductBean *productBean;
@property(nonatomic, strong) FeedBackTopicBean *topicBean;

- (void)initSubView;

@end

NS_ASSUME_NONNULL_END
