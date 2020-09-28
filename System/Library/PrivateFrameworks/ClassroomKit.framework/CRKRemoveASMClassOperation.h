/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class NSString;

@interface CRKRemoveASMClassOperation : CATOperation {

	NSString* _objectID;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(NSString *)objectID;
-(id<CRKClassKitRosterRequirements>)requirements;
-(BOOL)isAsynchronous;
-(void)main;
-(void)removeClass:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 requirements:(id)arg2 ;
-(void)fetchClasses;
-(void)didFetchClasses:(id)arg1 error:(id)arg2 ;
-(id)classWithObjectID:(id)arg1 inClasses:(id)arg2 ;
@end
