/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationLite.framework/SymptomPresentationLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSXPCConnection *)connection;
-(void)dealloc;
-(id)init;
-(id)_formatInstantRouteMetrics:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)currentScorecardFor:(int)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

