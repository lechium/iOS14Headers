/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class MDLAsset, NSString;

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver> {

	MDLAsset* _asset;

}

@property (assign,nonatomic,__weak) MDLAsset * asset;               //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 ;
-(MDLAsset *)asset;
-(void)setAsset:(MDLAsset *)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
@end

