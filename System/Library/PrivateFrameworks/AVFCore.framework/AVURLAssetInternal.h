/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetCustomURLAuthentication, NSURL, NSArray, AVAssetResourceLoader, AVDispatchOnce, AVAssetCache, NSObject, NSDictionary, AVWeakReference;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVAssetCustomURLBridgeForNSURLProtocol* customURLBridgeForNSURLProtocol;
	AVAssetCustomURLAuthentication* customURLAuthenticationUsingKeychain;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	AVDispatchOnce* makeOneResourceLoaderOnly;
	AVAssetCache* assetCache;
	AVDispatchOnce* makeOneAssetDownloadCacheOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	BOOL hasInstanceIdentifierMapping;
	BOOL requiresSecurityScopeRelease;
	AVWeakReference* sessionReference;

}
@end

