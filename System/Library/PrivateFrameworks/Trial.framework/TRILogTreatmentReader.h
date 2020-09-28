/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIPaths;
@class NSString;

@interface TRILogTreatmentReader : NSObject {

	int _projectId;
	id<TRIPaths> _paths;

}

@property (readonly) NSString * path; 
+(id)readerWithProjectId:(int)arg1 paths:(id)arg2 ;
-(NSString *)path;
-(id)treatments;
-(id)fetchRolloutLogNamespaces;
-(id)initWithProjectId:(int)arg1 paths:(id)arg2 ;
-(id)namespaceLoggingTreatmentPath;
@end
