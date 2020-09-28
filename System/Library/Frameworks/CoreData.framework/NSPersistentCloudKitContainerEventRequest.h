/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {

	long long _resultType;
	NSFetchRequest* _ckEventFetchRequest;

}

@property (nonatomic,retain) NSFetchRequest * ckEventFetchRequest;              //@synthesize ckEventFetchRequest=_ckEventFetchRequest - In the implementation block
@property (assign) long long resultType;                                        //@synthesize resultType=_resultType - In the implementation block
+(id)validateClientFetchRequest:(id)arg1 ;
+(id)ckEventKeyForKey:(id)arg1 ;
+(id)translatePredicate:(id)arg1 orReturnFailureReason:(id*)arg2 ;
+(id)translateExpression:(id)arg1 orReturnFailureReason:(id*)arg2 ;
+(id)fetchEventsAfterDate:(id)arg1 ;
+(id)fetchEventsAfterEvent:(id)arg1 ;
+(id)fetchEventsMatchingFetchRequest:(id)arg1 ;
+(id)fetchRequestForEvents;
-(long long)resultType;
-(void)setResultType:(long long)arg1 ;
-(NSFetchRequest *)ckEventFetchRequest;
-(id)initWithCKEventFetchRequest:(id)arg1 ;
-(void)setCkEventFetchRequest:(NSFetchRequest *)arg1 ;
-(void)dealloc;
-(unsigned long long)requestType;
@end
