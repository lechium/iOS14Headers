/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {

	SFTokenBucket* _bucket;
	unsigned long long _maxDups;
	CFArrayRef _dups;

}
-(id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)acquireTokenForIdentifier:(unsigned long long)arg1 ;
@end
