/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface BMAppClipLaunchEvent : NSObject {

	NSString* _URLHash;
	NSString* _clipBundleID;
	NSString* _appBundleID;
	NSString* _webAppBundleID;
	NSString* _launchReason;
	NSURL* _fullURL;
	NSURL* _referrerURL;
	NSString* _referrerBundleID;

}

@property (nonatomic,copy,readonly) NSString * URLHash;                       //@synthesize URLHash=_URLHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * clipBundleID;                  //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleID;                   //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * webAppBundleID;                //@synthesize webAppBundleID=_webAppBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchReason;                  //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullURL;                          //@synthesize fullURL=_fullURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * referrerURL;                      //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerBundleID;              //@synthesize referrerBundleID=_referrerBundleID - In the implementation block
-(NSURL *)referrerURL;
-(NSString *)referrerBundleID;
-(NSString *)clipBundleID;
-(id)init;
-(NSString *)launchReason;
-(NSString *)webAppBundleID;
-(NSURL *)fullURL;
-(NSString *)URLHash;
-(id)description;
-(NSString *)appBundleID;
-(id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8 ;
@end

