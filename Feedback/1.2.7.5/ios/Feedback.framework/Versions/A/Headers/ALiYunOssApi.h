//
//  ALiYunOssApi.h
//  feedback
//
//  Created by 李焱 on 2021/3/22.
//

#import <Foundation/Foundation.h>
#import <AliyunOSSiOS/AliyunOSSiOS.h>
#import <AliyunOSSiOS/OSSUtil.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ALiYunCallBack)( NSString * _Nullable url);

@interface ALiYunOssApi : NSObject

@property(nonatomic, strong) OSSClient *client;

- (void)uploadAttachment:(NSData *)data :(ALiYunCallBack)callBack;


@end

NS_ASSUME_NONNULL_END
