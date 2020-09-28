/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {

	NSMutableDictionary* _mediaKindDict;
	unsigned long long _totalStorage;
	unsigned long long _usedStorage;

}

@property (assign,nonatomic) unsigned long long totalStorage;              //@synthesize totalStorage=_totalStorage - In the implementation block
@property (assign,nonatomic) unsigned long long usedStorage;               //@synthesize usedStorage=_usedStorage - In the implementation block
-(id)init;
-(unsigned long long)totalStorage;
-(void)setUsedStorage:(unsigned long long)arg1 ;
-(unsigned long long)usedStorage;
-(void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2 ;
-(unsigned long long)storageInUseForMediaKind:(long long)arg1 ;
-(void)setTotalStorage:(unsigned long long)arg1 ;
@end
