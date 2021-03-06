/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMUnresolvedAsset.h>

@class RMAsset, NSDictionary, NSURL, NSString;

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset> {

	RMAsset* _asset;
	NSDictionary* _queryParameters;
	NSURL* _downloadToFileURL;

}

@property (nonatomic,retain) RMAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,retain) NSURL * downloadToFileURL;                 //@synthesize downloadToFileURL=_downloadToFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(NSString *)identifier;
-(NSDictionary *)queryParameters;
-(RMAsset *)asset;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setAsset:(RMAsset *)arg1 ;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)downloadToFileURL;
-(id)initWithAsset:(id)arg1 queryParameters:(id)arg2 downloadToFileURL:(id)arg3 ;
-(void)setDownloadToFileURL:(NSURL *)arg1 ;
@end

