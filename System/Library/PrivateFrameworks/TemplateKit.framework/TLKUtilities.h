/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKUtilities : NSObject
+(double)onePixelForCurrentScreenResolution;
+(id)testImageWithSize:(CGSize)arg1 text:(id)arg2 ;
+(id)testImageWithSize:(CGSize)arg1 ;
+(id)testImageWithSize:(CGSize)arg1 text:(id)arg2 color:(id)arg3 ;
+(id)testImageWithSize:(CGSize)arg1 color:(id)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(double)standardTableCellContentInset;
+(BOOL)isMacOS;
+(BOOL)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2 ;
+(BOOL)deviceSupportsRotation;
+(double)appIconCornerRadiusRatio;
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
@end
