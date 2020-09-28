/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject {

	BOOL _isTrusted;
	BOOL _isTrustedCached;
	NSString* _urlScheme;
	BOOL _isTopLevelNavigation;
	BOOL _isSafe;
	BOOL _overwriteHTTPOnlyCookies;
	NSURL* _url;
	NSURL* _mainDocumentURL;
	NSURL* _siteForCookies;
	NSString* _partition;
	unsigned long long _acceptPolicy;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,retain) NSURL * siteForCookies;               //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (nonatomic,retain) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (assign) BOOL isTopLevelNavigation;                      //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (assign) BOOL isSafe;                                    //@synthesize isSafe=_isSafe - In the implementation block
@property (assign) BOOL overwriteHTTPOnlyCookies;                  //@synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies - In the implementation block
@property (assign) unsigned long long acceptPolicy;                //@synthesize acceptPolicy=_acceptPolicy - In the implementation block
-(BOOL)isSafe;
-(NSString *)partition;
-(void)setIsSafe:(BOOL)arg1 ;
-(unsigned long long)acceptPolicy;
-(void)setPartition:(NSString *)arg1 ;
-(NSURL *)mainDocumentURL;
-(void)setIsTopLevelNavigation:(BOOL)arg1 ;
-(BOOL)overwriteHTTPOnlyCookies;
-(BOOL)isTrusted;
-(void)setOverwriteHTTPOnlyCookies:(BOOL)arg1 ;
-(NSURL *)siteForCookies;
-(void)setAcceptPolicy:(unsigned long long)arg1 ;
-(BOOL)isTopLevelNavigation;
-(void)setSiteForCookies:(NSURL *)arg1 ;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(id)init;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
@end
