/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying> {

	NSMutableDictionary* _failures;
	unsigned long long _options;
	NSString* _requestReason;
	NSString* _senderDescription;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestReason;                         //@synthesize requestReason=_requestReason - In the implementation block
@property (nonatomic,copy) NSString * senderDescription;                     //@synthesize senderDescription=_senderDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long failureCount; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)accumulateFailure:(id)arg1 forSession:(unsigned long long)arg2 ;
-(id)failureForSessionIdentifier:(long long)arg1 ;
-(BOOL)hasFailedSeveralTimes;
-(NSString *)senderDescription;
-(void)setSenderDescription:(NSString *)arg1 ;
-(NSString *)requestReason;
-(void)setRequestReason:(NSString *)arg1 ;
-(unsigned long long)failureCount;
-(id)description;
@end

