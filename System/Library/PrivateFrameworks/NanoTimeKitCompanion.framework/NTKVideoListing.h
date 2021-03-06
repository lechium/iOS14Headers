/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKAVListing.h>

@class CLKDevice, CLKVideo, UIImage, NSString, UIColor;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	NSString* _name;
	NSString* _videoName;
	NSString* _transitionImageName;
	UIColor* _overlayColor;
	unsigned long long _theme;
	long long _variant;
	long long _clip;
	unsigned long long _tags;

}

@property (nonatomic,readonly) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,readonly) unsigned long long theme;              //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) long long variant;                     //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) long long clip;                        //@synthesize clip=_clip - In the implementation block
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)clip;
-(UIColor *)overlayColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)variant;
-(CLKVideo *)video;
-(BOOL)hasTag:(unsigned long long)arg1 ;
-(UIImage *)image;
-(unsigned long long)theme;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(void)_setHasAssets;
-(id)initForDevice:(id)arg1 withName:(id)arg2 videoName:(id)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned long long)arg6 variant:(long long)arg7 clip:(long long)arg8 tags:(unsigned long long)arg9 ;
@end

