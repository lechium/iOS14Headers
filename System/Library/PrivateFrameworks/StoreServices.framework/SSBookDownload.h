/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownload.h>

@protocol SSBookDownloadQueue, SSBookDownloadStatus;
@class NSString;

@interface SSBookDownload : SSDownload {

	id<SSBookDownloadQueue> _downloadQueue;
	NSString* _downloadPhaseIdentifierOverride;
	id<SSBookDownloadStatus> _downloadStatus;

}

@property (nonatomic,retain) NSString * downloadPhaseIdentifierOverride;              //@synthesize downloadPhaseIdentifierOverride=_downloadPhaseIdentifierOverride - In the implementation block
@property (nonatomic,readonly) id<SSBookDownloadStatus> downloadStatus;               //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (nonatomic,readonly) NSString * downloadID; 
-(long long)bytesTotal;
-(BOOL)isCancelable;
-(void)pause;
-(void)setMetadata:(id)arg1 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(id)metadata;
-(void)setStatus:(id)arg1 ;
-(long long)bytesDownloaded;
-(id)valueForProperty:(id)arg1 ;
-(id)downloadPhaseIdentifier;
-(id)status;
-(double)percentComplete;
-(NSString *)downloadPhaseIdentifierOverride;
-(id<SSBookDownloadStatus>)downloadStatus;
-(long long)downloadSizeLimit;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restart;
-(void)resume;
-(NSString *)downloadID;
-(id)initWithDownloadStatus:(id)arg1 ;
-(void)setDownloadPhaseIdentifierOverride:(NSString *)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(long long)persistentIdentifier;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(id)networkConstraints;
-(BOOL)removeAsset:(id)arg1 ;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
@end
