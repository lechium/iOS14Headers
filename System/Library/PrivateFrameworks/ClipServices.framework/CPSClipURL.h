/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface CPSClipURL : NSObject {

	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
+(BOOL)isSupported;
+(BOOL)shouldStallProgress;
+(BOOL)usesDemoMetadata;
+(void)stopStallingCurrentInstallationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)URL;
-(void)checkAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prewarmClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPrewarmingClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installClipWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchClipMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)test_uninstallClipWithCompletionHandler:(/*^block*/id)arg1 ;
@end

