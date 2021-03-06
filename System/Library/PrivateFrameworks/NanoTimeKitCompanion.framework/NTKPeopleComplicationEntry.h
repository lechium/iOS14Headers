/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel {

	NSString* _fullName;
	NSString* _abbreviation;
	UIImage* _profileImage;
	BOOL _isLocked;

}

@property (nonatomic,readonly) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,readonly) UIImage * profileImage;               //@synthesize profileImage=_profileImage - In the implementation block
+(id)lockedEntry;
-(NSString *)abbreviation;
-(NSString *)fullName;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3 ;
-(UIImage *)profileImage;
@end

