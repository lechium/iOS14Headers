/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
+(id)positionWithOffset:(long long)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)affinity;
@end
