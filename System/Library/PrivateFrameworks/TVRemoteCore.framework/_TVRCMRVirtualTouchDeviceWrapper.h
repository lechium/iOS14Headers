/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (assign,getter=isAbsolute,nonatomic) BOOL absolute; 
@property (assign,getter=isDisplayIntegrated,nonatomic) BOOL displayIntegrated; 
@property (assign,nonatomic) CGSize screenSize; 
-(void)setAbsolute:(BOOL)arg1 ;
-(BOOL)isDisplayIntegrated;
-(void)dealloc;
-(void)setScreenSize:(CGSize)arg1 ;
-(BOOL)isAbsolute;
-(id)init;
-(CGSize)screenSize;
-(void*)deviceDescriptor;
-(void)setDisplayIntegrated:(BOOL)arg1 ;
@end
