/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {

	BOOL _suspended;
	NSArray* _authorizedSamples;
	unsigned long long _clientSampleIndex;
	BOOL _includeDocumentData;
	unsigned long long _maxResults;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeDocumentData;                   //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(Class)queryClass;
+(id)requiredEntitlements;
-(NSArray *)sortDescriptors;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(unsigned long long)maxResults;
-(BOOL)includeDocumentData;
-(void)_queue_start;
-(BOOL)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3 ;
-(id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2 ;
-(BOOL)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2 ;
-(void)authorizeSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

