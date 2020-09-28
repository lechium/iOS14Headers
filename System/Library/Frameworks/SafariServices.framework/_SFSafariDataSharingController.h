/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _SFSafariDataSharingController : NSObject {

	NSObject*<OS_dispatch_queue> _dataSharingQueue;
	NSMutableArray* _appBundlesWithSeparateData;

}
+(id)sharedController;
-(void)_loadAppBundlesWithSeparateDataIfNeeded;
-(void)clearAllWebsitesData;
-(id)init;
-(id)systemDataContainerURLWithAppBundleID:(id)arg1 ;
-(void)checkInAppBundleIDIfNeeded:(id)arg1 ;
@end
