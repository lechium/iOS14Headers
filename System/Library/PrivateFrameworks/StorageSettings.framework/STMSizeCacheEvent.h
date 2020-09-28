/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface STMSizeCacheEvent : NSObject {

	unsigned _flags;
	NSString* _path;
	unsigned long long _evtID;

}

@property (retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long evtID;              //@synthesize evtID=_evtID - In the implementation block
@property (assign) unsigned flags;                        //@synthesize flags=_flags - In the implementation block
+(id)eventWithPath:(id)arg1 flags:(unsigned)arg2 event:(unsigned long long)arg3 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)evtID;
-(void)setEvtID:(unsigned long long)arg1 ;
@end
