/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, UIImage;


@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@required
-(NSString *)burstIdentifier;
-(UIImage *)placeholderImage;
-(BOOL)isHDR;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;

@end

