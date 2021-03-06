/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AVTEditingModelColors;

@interface AVTCoreModel : NSObject {

	NSArray* _groups;
	AVTEditingModelColors* _colors;
	unsigned long long _platform;

}

@property (nonatomic,copy,readonly) NSArray * groups;                            //@synthesize groups=_groups - In the implementation block
@property (nonatomic,copy,readonly) AVTEditingModelColors * colors;              //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                      //@synthesize platform=_platform - In the implementation block
-(AVTEditingModelColors *)colors;
-(id)initWithGroups:(id)arg1 colors:(id)arg2 forPlatform:(unsigned long long)arg3 ;
-(NSArray *)groups;
-(unsigned long long)platform;
-(id)description;
@end

