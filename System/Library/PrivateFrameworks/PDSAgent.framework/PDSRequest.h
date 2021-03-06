/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject {

	NSSet* _entries;
	PDSRequestInfo* _requestInfo;

}

@property (nonatomic,readonly) NSSet * entries;                         //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) PDSRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
-(PDSRequestInfo *)requestInfo;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)entries;
-(unsigned long long)hash;
-(id)description;
-(void)setRequestInfo:(PDSRequestInfo *)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithEntries:(id)arg1 requestInfo:(id)arg2 ;
@end

