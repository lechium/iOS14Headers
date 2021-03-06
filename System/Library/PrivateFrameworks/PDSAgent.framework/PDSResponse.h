/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PDSResponse : NSObject {

	long long _status;
	NSDictionary* _statusByUser;
	long long _ttl;

}

@property (nonatomic,readonly) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDictionary * statusByUser;              //@synthesize statusByUser=_statusByUser - In the implementation block
@property (nonatomic,readonly) long long ttl;                            //@synthesize ttl=_ttl - In the implementation block
-(long long)status;
-(long long)ttl;
-(id)description;
-(NSDictionary *)statusByUser;
-(id)initWithStatus:(long long)arg1 statusByUser:(id)arg2 ttl:(long long)arg3 ;
@end

