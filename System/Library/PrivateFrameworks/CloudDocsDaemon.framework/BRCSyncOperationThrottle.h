/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	BOOL _isSyncDown;
	int _lastErrorKind;
	double _delay;
	double _nextTry;
	BRMangledID* _mangledID;

}

@property (nonatomic,readonly) double delay;                       //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                     //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                  //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) BRMangledID * mangledID;              //@synthesize mangledID=_mangledID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)clear;
-(double)delay;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)nextTry;
-(id)description;
-(BRMangledID *)mangledID;
-(id)initWithMangledID:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(void)updateAfterSchedulingTask;
-(void)updateForError:(id)arg1 ;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(BOOL)updateForClearingOutOfQuota;
-(void)setMangledID:(BRMangledID *)arg1 ;
-(int)lastErrorKind;
@end

