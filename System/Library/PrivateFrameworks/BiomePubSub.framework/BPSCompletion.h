/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface BPSCompletion : NSObject {

	long long _state;
	NSError* _error;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)success;
+(id)failureWithError:(id)arg1 ;
-(NSError *)error;
-(id)initWithState:(long long)arg1 error:(id)arg2 ;
-(id)init;
-(long long)state;
@end

