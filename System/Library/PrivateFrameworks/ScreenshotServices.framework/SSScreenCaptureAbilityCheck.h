/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject {

	BOOL _isAbleToTakeScreenshots;
	NSString* _reasonForNotBeingAbleToTakeScreenshots;

}

@property (assign,nonatomic) BOOL isAbleToTakeScreenshots;                                 //@synthesize isAbleToTakeScreenshots=_isAbleToTakeScreenshots - In the implementation block
@property (nonatomic,copy) NSString * reasonForNotBeingAbleToTakeScreenshots;              //@synthesize reasonForNotBeingAbleToTakeScreenshots=_reasonForNotBeingAbleToTakeScreenshots - In the implementation block
+(id)abilityCheck;
-(void)setIsAbleToTakeScreenshots:(BOOL)arg1 ;
-(void)setReasonForNotBeingAbleToTakeScreenshots:(NSString *)arg1 ;
-(BOOL)isAbleToTakeScreenshots;
-(NSString *)reasonForNotBeingAbleToTakeScreenshots;
@end

