/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSOrderedSet;

@interface DOCTagLocalStorage : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (assign,nonatomic) long long tagSerialNumber; 
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSOrderedSet * userTags; 
@property (nonatomic,retain) NSOrderedSet * discoveredTags; 
+(id)sharedAppGroupStorage;
-(void)setUserTags:(NSOrderedSet *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSOrderedSet *)userTags;
-(NSOrderedSet *)discoveredTags;
-(long long)tagSerialNumber;
-(void)setTagSerialNumber:(long long)arg1 ;
-(void)setDiscoveredTags:(NSOrderedSet *)arg1 ;
-(id)_unarchivedTagsFromData:(id)arg1 ;
@end

