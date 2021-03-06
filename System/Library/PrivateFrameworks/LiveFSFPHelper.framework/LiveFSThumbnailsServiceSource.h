/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/QLThumbnailCache.h>

@class LiveFSFPExtensionHelper, QLExternalThumbnailCache, NSString;

@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache> {

	LiveFSFPExtensionHelper* ex;
	QLExternalThumbnailCache* thumbnailCache;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)thumbnailCache;
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(NSString *)serviceName;
-(void)getThumbnailURLForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getThumbnailCacheURLWrappersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg1 ;
@end

