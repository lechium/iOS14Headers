/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWNodeMessage.h>

@class BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	BWStillImageSettings* _stillImageSettings;

}

@property (readonly) BWStillImageSettings * stillImageSettings; 
+(id)newMessageWithStillImageSettings:(id)arg1 ;
-(BWStillImageSettings *)stillImageSettings;
-(void)dealloc;
-(id)_initWithStillImageSettings:(id)arg1 ;
@end
