//
//  FPMacro.h
//  Feedback
//
//  Created by 李焱 on 2021/4/16.
//

#ifndef FPMacro_h
#define FPMacro_h
#import "ToolUtil.h"
#import "NSBundle+SdkBundle.h"

#define IS_IPAD     [ToolUtil isIpad]

#define LOCALE_STR(key)  [NSBundle fp_localizedStringForKey:key]

#ifdef DEBUG
#define FBLog(format, ...) NSLog(@"FPFeedbackSDK:class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] )
#else
#define FBLog(format, ...)
#endif

#define APPID_PREFIX @"fp"

#endif /* FPMacro_h */
