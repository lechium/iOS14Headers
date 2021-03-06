/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@protocol HDSampleIteratorHDRestorableIterator;
@class NSArray, NSMutableSet, HKSample, NSString;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	id<HDSampleIterator><HDRestorableIterator> _sourceIterator;
	NSArray* _keyPaths;
	NSMutableSet* _seenValues;

}

@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKSample *)sample;
-(long long)objectID;
-(id)init;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)object;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
-(id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2 ;
@end

