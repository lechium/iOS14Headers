/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem {

	BOOL _updateInProgress;
	unsigned long long _presence;
	unsigned long long _usage;
	unsigned long long _sortOrder;
	NSSet* _cameraProfiles;

}

@property (nonatomic,readonly) unsigned long long presence;                //@synthesize presence=_presence - In the implementation block
@property (nonatomic,readonly) unsigned long long usage;                   //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) unsigned long long sortOrder;               //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) NSString * privacyDescription; 
@property (assign,nonatomic) BOOL updateInProgress;                        //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(unsigned long long)sortOrderForUsage:(unsigned long long)arg1 ;
-(unsigned long long)sortOrder;
-(unsigned long long)usage;
-(NSString *)privacyDescription;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)presence;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(BOOL)updateInProgress;
-(NSSet *)cameraProfiles;
-(id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3 ;
@end
