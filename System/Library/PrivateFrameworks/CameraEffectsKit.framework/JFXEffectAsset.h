/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, JFXEffectAssetAttributes;

@interface JFXEffectAsset : NSObject {

	NSString* _assetID;
	NSURL* _localURL;
	JFXEffectAssetAttributes* _attributes;

}

@property (nonatomic,readonly) NSString * assetID;                                 //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) NSURL * localURL;                                   //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) JFXEffectAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)firstAssetInAssets:(id)arg1 matchingFilterAttributes:(id)arg2 ;
-(NSString *)assetID;
-(NSURL *)localURL;
-(JFXEffectAssetAttributes *)attributes;
-(id)description;
-(id)initWithAssetID:(id)arg1 URL:(id)arg2 copyOfAttributes:(id)arg3 ;
@end

