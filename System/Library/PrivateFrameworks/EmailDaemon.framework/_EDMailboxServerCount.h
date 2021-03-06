/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _EDMailboxServerCount : NSObject {

	long long _serverCount;
	long long _mostRecentStatusCount;
	long long _lastSyncStatusCount;

}

@property (assign,nonatomic) long long serverCount;                        //@synthesize serverCount=_serverCount - In the implementation block
@property (assign,nonatomic) long long mostRecentStatusCount;              //@synthesize mostRecentStatusCount=_mostRecentStatusCount - In the implementation block
@property (assign,nonatomic) long long lastSyncStatusCount;                //@synthesize lastSyncStatusCount=_lastSyncStatusCount - In the implementation block
-(void)setMostRecentStatusCount:(long long)arg1 ;
-(long long)lastSyncStatusCount;
-(long long)serverCount;
-(void)setServerCount:(long long)arg1 ;
-(void)setLastSyncStatusCount:(long long)arg1 ;
-(long long)mostRecentStatusCount;
@end

