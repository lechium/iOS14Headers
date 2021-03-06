/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {

	/*^block*/id _bundleIDsFetchedBlock;

}

@property (nonatomic,copy) id bundleIDsFetchedBlock;              //@synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock - In the implementation block
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)requestOperationClasses;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(BOOL)requiresTokenRegistration;
-(void)setBundleIDsFetchedBlock:(id)arg1 ;
-(id)bundleIDsFetchedBlock;
@end

