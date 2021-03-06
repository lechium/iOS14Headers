/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject {

	NSString* _reportsDirectoryPath;
	_DPDaemonConnection* _connection;

}

@property (nonatomic,copy) NSString * reportsDirectoryPath;                   //@synthesize reportsDirectoryPath=_reportsDirectoryPath - In the implementation block
@property (nonatomic,readonly) _DPDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)submittedReports;
+(id)submittedReportsInDirectory:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(_DPDaemonConnection *)connection;
-(void)dealloc;
-(id)init;
-(NSString *)reportsDirectoryPath;
-(id)reportsNotYetSubmitted;
-(void)retireReports:(id)arg1 ;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
@end

