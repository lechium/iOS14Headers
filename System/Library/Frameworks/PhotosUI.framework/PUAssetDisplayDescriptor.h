/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class PUAssetReference, NSDate;

@interface PUAssetDisplayDescriptor : NSObject {

	PUAssetReference* _assetReference;
	NSDate* _modifiedAfterDate;
	SCD_Struct_PH4 _videoSeekTime;

}

@property (nonatomic,readonly) PUAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH4 videoSeekTime;                   //@synthesize videoSeekTime=_videoSeekTime - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAfterDate;                     //@synthesize modifiedAfterDate=_modifiedAfterDate - In the implementation block
+(id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1 ;
-(id)init;
-(PUAssetReference *)assetReference;
-(id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(SCD_Struct_PH4)arg3 ;
-(SCD_Struct_PH4)videoSeekTime;
-(NSDate *)modifiedAfterDate;
@end
