/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class FPXExtensionContext, NSFileProviderExtension, NSFileProviderDomain, NSObject, FPXSpotlightIndexer;

@interface FPXDomainContext : NSObject {

	BOOL _usesFPFS;
	unsigned long long _extensionCapabilities;
	FPXExtensionContext* _extensionContext;
	NSFileProviderExtension* _vendorInstance;
	NSFileProviderDomain* _domain;
	NSObject*<OS_os_log> _log;
	FPXSpotlightIndexer* _spotlightIndexer;

}

@property (nonatomic,__weak,readonly) FPXExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,readonly) NSFileProviderExtension * vendorInstance;                   //@synthesize vendorInstance=_vendorInstance - In the implementation block
@property (nonatomic,readonly) NSFileProviderDomain * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL usesFPFS;                                              //@synthesize usesFPFS=_usesFPFS - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                     //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) FPXSpotlightIndexer * spotlightIndexer;                     //@synthesize spotlightIndexer=_spotlightIndexer - In the implementation block
@property (nonatomic,readonly) unsigned long long extensionCapabilities;                   //@synthesize extensionCapabilities=_extensionCapabilities - In the implementation block
-(void)invalidate;
-(BOOL)usesFPFS;
-(NSObject*<OS_os_log>)log;
-(void)updateCapabilities;
-(unsigned long long)extensionCapabilities;
-(id)itemsFromVendorItems:(id)arg1 ;
-(id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 usesFPFS:(BOOL)arg4 ;
-(FPXSpotlightIndexer *)spotlightIndexer;
-(NSFileProviderExtension *)vendorInstance;
-(void)prepareForDomainRemovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemIDFromVendorItemID:(id)arg1 ;
-(id)internalErrorFromVendorError:(id)arg1 ;
-(id)itemFromVendorItem:(id)arg1 ;
-(FPXExtensionContext *)extensionContext;
-(NSFileProviderDomain *)domain;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)itemIDsFromVendorItemIDs:(id)arg1 ;
@end
