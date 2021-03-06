/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSMediaTask, AMSBag, NSString;

@interface WFMediaSessionManager : NSObject {

	AMSMediaTask* _task;
	AMSBag* _bag;
	NSString* _clientIdentifier;
	NSString* _clientVersion;

}

@property (nonatomic,readonly) AMSMediaTask * task;                           //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) AMSBag * bag;                                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
-(AMSBag *)bag;
-(AMSMediaTask *)task;
-(NSString *)clientVersion;
-(NSString *)clientIdentifier;
-(id)init;
-(id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
-(void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

