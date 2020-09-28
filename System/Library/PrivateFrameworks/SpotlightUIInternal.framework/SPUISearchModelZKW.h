/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class NSObject, SPZKWSession;

@interface SPUISearchModelZKW : SPUISearchModel {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	BOOL _shouldCacheResults;
	BOOL _newQuery;
	SPZKWSession* _session;

}

@property (nonatomic,retain) SPZKWSession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(SPZKWSession *)arg1 ;
-(SPZKWSession *)session;
-(void)dealloc;
-(id)init;
-(void)updateWithQueryContext:(id)arg1 ;
@end
