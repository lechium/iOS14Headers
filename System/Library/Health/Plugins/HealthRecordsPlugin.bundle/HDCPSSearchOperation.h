/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLSession, HKClinicalProviderSearchResultsPage, NSError;

@interface HDCPSSearchOperation : NSOperation {

	NSURLRequest* _request;
	NSURLSession* _session;
	HKClinicalProviderSearchResultsPage* _page;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSURLRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) HKClinicalProviderSearchResultsPage * page;              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(void)setPage:(HKClinicalProviderSearchResultsPage *)arg1 ;
-(HKClinicalProviderSearchResultsPage *)page;
-(NSURLSession *)session;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSURLRequest *)request;
-(void)main;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
@end
